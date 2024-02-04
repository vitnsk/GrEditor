#include "GrShapes.h"

using namespace System::Windows::Forms;

ShList::ShList() //�����������
{
	prev = next = nullptr;
}

ShList* ShList::AddSh(GrShape* sh) //��������� 
{
	ShList* t = new ShList;
	this->Sh = sh;
	this->next = t;
	t->next = nullptr;
	t->prev = this;
	return t;
}

void ShList::SelSh(float w, Color col) //��������
{
	if(w>=5)
		Sh->AddLineWidth(1);
	else
		Sh->AddLineWidth(5);
	
	if (col == Color::Black)
	{
		Sh->AddColor(0, Color::Red);
		Sh->AddColor(1, Color::Red);
	}
	else
	{
		Sh->AddColor(0, Color::Black);
		Sh->AddColor(1, Color::Black);
	}
	
}
void ShList::UnSelSh(float w, Color col) //������� ���������
{
	Sh->AddLineWidth(w);
	Sh->AddColor(0, col);
	Sh->AddColor(1, col);	
}

void ShList::AddZoomR(unsigned int rn) //��������� �������������� �������
{
	Sh->AddNumR(rn);	
}

void ShList::AddZoomPoint(float xz, float yz) //��������� �������������� �����
{
	
	Sh->AddPoint(1, xz, yz);	
}

ShList* ShList::DelEndSh() //������� ��������� ������
{
	ShList* t, * d;
	t = this->prev;
	t->next = nullptr;
	d = this;
	delete d;
	return t;
}

ShList* ShList::DelStartSh() //������� ������ ������
{
	ShList* t, * d;	
	t = this->next;
	t->prev = nullptr;
	d = this;
	delete d;
	return t;
}

ShList* ShList::DelSelSh() //������� ���������� ������
{
	ShList* t, *d;
    this->next->prev = this->prev;
	this->prev->next = this->next;
	d = this;
	delete d;
	return t;
}

ShList* ShList::Inc() //������� �� ��������� ������
{
	return this->next;
}

ShList* ShList::Dec() //������� �� ���������� ������
{
	return this->prev;
}

void ShList::Redraw(System::Windows::Forms::PictureBox^ picbox) //����������� �����
{
	Sh->GrDraw(picbox);
}

GrShape::GrShape() //�����������
{
	filled = false;
	x = new float[2];
	y = new float[2];
}

GrShape::~GrShape() //����������
{
	delete[]x;
	delete[]y;
}

void GrShape::AddPoint(unsigned int i, float X, float Y) //��������� �����
{
	x[i] = X;
	y[i] = Y;
}


void GrShape::AddFilled(bool f) // ��������� ����������
{
	filled = f;
}

void GrShape::AddColor(int i, Color col) //��������� ����
{
	if (i) 
	color2 = col.ToArgb();
	else 
	color1 = col.ToArgb();
}
void GrShape::AddLineWidth(float w) //��������� ������� �����
{
	lineWidth = w;
}

void GrShape::AddTextFont(IntPtr fn) //��������� �����
{
    textFnt = fn;
}

void GrShape::AddText(std::string tx) //��������� �����
{
	textPt = tx;

}

void GrShape::AddNum(unsigned int n) //��������� �������
{	
	num = n;
}

void GrShape::AddNumR(unsigned int rn) //��������� ������
{
	rnum = rn;	
}

void GrLine::GrDraw(PictureBox^ picbox) //������ �����
{
	Graphics^ gr = Graphics::FromImage(picbox->Image);
	Pen^ pen1 = gcnew Pen(Color::FromArgb(color1), lineWidth);
	gr->DrawLine(pen1, x[0], y[0], x[1], y[1]);
}

GrShape* GrLine::Allocate() //�������� ������ ��� �����
{
	GrLine* Ln = new GrLine;
	Ln->AddColor(0, Color::FromArgb(color1));
	Ln->AddColor(1, Color::FromArgb(color2));
	Ln->AddPoint(0, x[0], y[0]);
	Ln->AddPoint(1, x[1], y[1]);
	Ln->AddLineWidth(lineWidth);
	return Ln;
}

void GrRectangle::GrDraw(PictureBox^ picbox) //������ �������������
{
	Graphics^ gr = Graphics::FromImage(picbox->Image);
	Pen^ pen1 = gcnew Pen( Color::FromArgb(color1),lineWidth);
	SolidBrush^ brush1 = gcnew SolidBrush(Color::FromArgb(color2));

	if (filled){
	if (x[1] - x[0] >= 0 && y[1] - y[0] >= 0)
		gr->FillRectangle(brush1, x[0], y[0], x[1] - x[0], y[1] - y[0]);
	if (x[1] - x[0] < 0 && y[1] - y[0] >= 0)
		gr->FillRectangle(brush1, x[1], y[0], x[0] - x[1], y[1] - y[0]);
	if (x[1] - x[0] >= 0 && y[1] - y[0] < 0)
		gr->FillRectangle(brush1, x[0], y[1], x[1] - x[0], y[0] - y[1]);
	if (x[1] - x[0] < 0 && y[1] - y[0] < 0)
		gr->FillRectangle(brush1, x[1], y[1], x[0] - x[1], y[0] - y[1]);
     }
	else {
		if (x[1] - x[0] >= 0 && y[1] - y[0] >= 0)
			gr->DrawRectangle(pen1, x[0], y[0], x[1] - x[0], y[1] - y[0]);
		if (x[1] - x[0] < 0 && y[1] - y[0] >= 0)
			gr->DrawRectangle(pen1, x[1], y[0], x[0] - x[1], y[1] - y[0]);
		if (x[1] - x[0] >= 0 && y[1] - y[0] < 0)
			gr->DrawRectangle(pen1, x[0], y[1], x[1] - x[0], y[0] - y[1]);
		if (x[1] - x[0] < 0 && y[1] - y[0] < 0)
			gr->DrawRectangle(pen1, x[1], y[1], x[0] - x[1], y[0] - y[1]);
	}
}

GrShape* GrRectangle::Allocate() //�������� ������ ��� ��������������
{
	GrRectangle* Rect = new GrRectangle;
	Rect->AddColor(0, Color::FromArgb(color1));
	Rect->AddColor(1, Color::FromArgb(color2));
	Rect->AddFilled(filled);
	Rect->AddPoint(0, x[0], y[0]);
	Rect->AddPoint(1, x[1], y[1]);
	Rect->AddLineWidth(lineWidth);
	return Rect;
}

void GrQuadrat::GrDraw(PictureBox^ picbox) //������ �������
{
	Graphics^ gr = Graphics::FromImage(picbox->Image);
	Pen^ pen1 = gcnew Pen(Color::FromArgb(color1), lineWidth);
	SolidBrush^ brush1 = gcnew SolidBrush(Color::FromArgb(color2));

	if (filled) {
		if (x[1] - x[0] >= 0 && y[1] - y[0] >= 0)
			gr->FillRectangle(brush1, x[0], y[0], x[1] - x[0], x[1] - x[0]);
		if (x[1] - x[0] < 0 && y[1] - y[0] >= 0)
			gr->FillRectangle(brush1, x[1], y[0], x[0] - x[1], x[0] - x[1]);
		if (x[1] - x[0] >= 0 && y[1] - y[0] < 0)
			gr->FillRectangle(brush1, x[0], y[1], x[1] - x[0], x[1] - x[0]);
		if (x[1] - x[0] < 0 && y[1] - y[0] < 0) 
			gr->FillRectangle(brush1, x[1], y[1], x[0] - x[1], x[0] - x[1]);
	}
	else {
		if (x[1] - x[0] >= 0 && y[1] - y[0] >= 0)
			gr->DrawRectangle(pen1, x[0], y[0], x[1] - x[0], x[1] - x[0]);
		if (x[1] - x[0] < 0 && y[1] - y[0] >= 0)
			gr->DrawRectangle(pen1, x[1], y[0], x[0] - x[1], x[0] - x[1]);
		if (x[1] - x[0] >= 0 && y[1] - y[0] < 0)
			gr->DrawRectangle(pen1, x[0], y[1], x[1] - x[0], x[1] - x[0]);
		if (x[1] - x[0] < 0 && y[1] - y[0] < 0)
			gr->DrawRectangle(pen1, x[1], y[1], x[0] - x[1], x[0] - x[1]);
	}
}

GrShape* GrQuadrat::Allocate() //�������� ������  ��� ��������
{
	GrQuadrat* Quad = new GrQuadrat;
	Quad->AddColor(0, Color::FromArgb(color1));
	Quad->AddColor(1, Color::FromArgb(color2));
	Quad->AddFilled(filled);
	Quad->AddPoint(0, x[0], y[0]);
	Quad->AddPoint(1, x[1], y[1]);
	Quad->AddLineWidth(lineWidth);
	return Quad;
}

void GrEllipse::GrDraw(PictureBox^ picbox) //������ ������
{
	Graphics^ gr = Graphics::FromImage(picbox->Image);
	Pen^ pen1 = gcnew Pen(Color::FromArgb(color1), lineWidth);
	SolidBrush^ brush1 = gcnew SolidBrush(Color::FromArgb(color2));
	if (filled)
	gr->FillEllipse(brush1, x[0], y[0], x[1] - x[0], y[1] - y[0]);
	gr->DrawEllipse(pen1, x[0], y[0], x[1] - x[0], y[1] - y[0]);
}

GrShape* GrEllipse::Allocate() //�������� ������ ��� �������
{
	GrEllipse* Ell = new GrEllipse;
	Ell->AddColor(0, Color::FromArgb(color1));
	Ell->AddColor(1, Color::FromArgb(color2));
	Ell->AddFilled(filled);
	Ell->AddPoint(0, x[0], y[0]);
	Ell->AddPoint(1, x[1], y[1]);
	Ell->AddLineWidth(lineWidth);
	return Ell;
}

void GrCircle::GrDraw(PictureBox^ picbox)//������ ����
{
	Graphics^ gr = Graphics::FromImage(picbox->Image);
	Pen^ pen1 = gcnew Pen(Color::FromArgb(color1), lineWidth);
	SolidBrush^ brush1 = gcnew SolidBrush(Color::FromArgb(color2));
	float R = sqrt((x[1] - x[0]) * (x[1] - x[0]) + (y[1] - y[0]) * (y[1] - y[0]));
	if (filled)
	{
		gr->FillEllipse(brush1, x[0] - R, y[0] - R, 2 * R, 2 * R);		
	}
	gr->DrawEllipse(pen1, x[0] - R, y[0] - R, 2 * R, 2 * R);
}

GrShape* GrCircle::Allocate() //�������� ������ ��� �����
{
	GrCircle* Cir = new GrCircle;
	Cir->AddColor(0, Color::FromArgb(color1));
	Cir->AddColor(1, Color::FromArgb(color2));
	Cir->AddFilled(filled);
	Cir->AddPoint(0, x[0], y[0]);
	Cir->AddPoint(1, x[1], y[1]);
	Cir->AddLineWidth(lineWidth);
	return Cir;
}

GrPolygon::GrPolygon() //����������� ��������������
{
	num = 50;	
	xv = new float[num];
	yv = new float[num];
}

void GrPolygon::GrDraw(PictureBox^ picbox) //������ �������������
{
	Graphics^ gr = Graphics::FromImage(picbox->Image);
	Pen^ pen1 = gcnew Pen(Color::FromArgb(color1), lineWidth);
	SolidBrush^ brush1 = gcnew SolidBrush(Color::FromArgb(color2));
	GraphicsPath^ grp = gcnew GraphicsPath();
	
	unsigned radius = rnum;	//������ ���������� ������ �������������� ����������
	double angle = 0;		//���� ��� ����������� ����� �� ����������
		
 /*��������� ���������� ������ ��������������*/

	for (int j = 0; j < num + 1; j++) {
		xv[j] = x[0]+radius * cos(angle * (System::Math::PI) / 180);
		yv[j] = y[0]-radius * sin(angle * (System::Math::PI) / 180);
		angle = angle + 360.0 / num;		//�����! ����� 360 ������ ���� �� �����
	}	
	if (filled)
	{
		for (int j = 0; j < num; j++)
		{
			grp->AddLine(xv[j], yv[j], xv[j + 1], yv[j + 1]);
		}
		Region^ reg = gcnew Region(grp);
		 
		gr->FillRegion(brush1, reg);
	}
	else
	{
		for (int j = 0; j < num; j++)
		{
			gr->DrawLine(pen1, xv[j], yv[j], xv[j + 1], yv[j + 1]);
		}
	}
	
}

GrShape* GrPolygon::Allocate() // �������� ������ ��� ��������������
{
	GrPolygon* Pol = new GrPolygon;
	
	Pol->AddColor(0, Color::FromArgb(color1));
	Pol->AddColor(1, Color::FromArgb(color2));
	Pol->AddFilled(filled);
	Pol->AddNum(num);
	Pol->AddNumR(rnum);
	Pol->AddLineWidth(lineWidth);
	Pol->AddPoint(0, x[0], y[0]);
	Pol->AddPoint(1, x[1], y[1]);
	return Pol;
}

void GrText::GrDraw(PictureBox^ picbox) //����� �����
	{
		Graphics^ gr = Graphics::FromImage(picbox->Image);
		Pen^ pen1 = gcnew Pen(Color::FromArgb(color1));
		Font^ drawFont = System::Drawing::Font::FromHfont(textFnt);				
		String^ drawString = gcnew System::String(textPt.c_str());
		SolidBrush^ fontBrush = gcnew SolidBrush(Color::FromArgb(color1));		
		gr->DrawString(drawString, drawFont, fontBrush, x[0], y[0]);		
	}

	GrShape* GrText::Allocate() //�������� ������ ��� ������
    {
		GrText* Tx = new GrText;
		Tx->AddText(textPt);		
		Tx->AddTextFont(textFnt);
	    Tx->AddColor(0, Color::FromArgb(color1));
	    /*Tx->AddColor(1, Color::FromArgb(color2));*/
	    Tx->AddPoint(0, x[0], y[0]);
	    Tx->AddPoint(1, x[1], y[1]);
	    return Tx;
		
    }

	
	