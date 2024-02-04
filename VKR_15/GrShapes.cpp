#include "GrShapes.h"

using namespace System::Windows::Forms;

ShList::ShList() //Конструктор
{
	prev = next = nullptr;
}

ShList* ShList::AddSh(GrShape* sh) //Добавляем 
{
	ShList* t = new ShList;
	this->Sh = sh;
	this->next = t;
	t->next = nullptr;
	t->prev = this;
	return t;
}

void ShList::SelSh(float w, Color col) //Выделяем
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
void ShList::UnSelSh(float w, Color col) //Снимаем выделение
{
	Sh->AddLineWidth(w);
	Sh->AddColor(0, col);
	Sh->AddColor(1, col);	
}

void ShList::AddZoomR(unsigned int rn) //Добавляем маштабирование радиуса
{
	Sh->AddNumR(rn);	
}

void ShList::AddZoomPoint(float xz, float yz) //Добавляем маштабирование точки
{
	
	Sh->AddPoint(1, xz, yz);	
}

ShList* ShList::DelEndSh() //Удаляем последнюю фигуру
{
	ShList* t, * d;
	t = this->prev;
	t->next = nullptr;
	d = this;
	delete d;
	return t;
}

ShList* ShList::DelStartSh() //Удаляем первую фигуру
{
	ShList* t, * d;	
	t = this->next;
	t->prev = nullptr;
	d = this;
	delete d;
	return t;
}

ShList* ShList::DelSelSh() //Удаляем выделенную фигуру
{
	ShList* t, *d;
    this->next->prev = this->prev;
	this->prev->next = this->next;
	d = this;
	delete d;
	return t;
}

ShList* ShList::Inc() //Переход на следующую фигуру
{
	return this->next;
}

ShList* ShList::Dec() //Переход на предыдущую фигуру
{
	return this->prev;
}

void ShList::Redraw(System::Windows::Forms::PictureBox^ picbox) //Перерисовка фигур
{
	Sh->GrDraw(picbox);
}

GrShape::GrShape() //Конструктор
{
	filled = false;
	x = new float[2];
	y = new float[2];
}

GrShape::~GrShape() //Деструктор
{
	delete[]x;
	delete[]y;
}

void GrShape::AddPoint(unsigned int i, float X, float Y) //Добавляем точку
{
	x[i] = X;
	y[i] = Y;
}


void GrShape::AddFilled(bool f) // Добавялем заполнение
{
	filled = f;
}

void GrShape::AddColor(int i, Color col) //Добавляем цвет
{
	if (i) 
	color2 = col.ToArgb();
	else 
	color1 = col.ToArgb();
}
void GrShape::AddLineWidth(float w) //Добавляем толщину линии
{
	lineWidth = w;
}

void GrShape::AddTextFont(IntPtr fn) //Добавляем шрифт
{
    textFnt = fn;
}

void GrShape::AddText(std::string tx) //Добавляем текст
{
	textPt = tx;

}

void GrShape::AddNum(unsigned int n) //Добавляем вершины
{	
	num = n;
}

void GrShape::AddNumR(unsigned int rn) //Добавляем радиус
{
	rnum = rn;	
}

void GrLine::GrDraw(PictureBox^ picbox) //рисуем линию
{
	Graphics^ gr = Graphics::FromImage(picbox->Image);
	Pen^ pen1 = gcnew Pen(Color::FromArgb(color1), lineWidth);
	gr->DrawLine(pen1, x[0], y[0], x[1], y[1]);
}

GrShape* GrLine::Allocate() //Выделяем память для линии
{
	GrLine* Ln = new GrLine;
	Ln->AddColor(0, Color::FromArgb(color1));
	Ln->AddColor(1, Color::FromArgb(color2));
	Ln->AddPoint(0, x[0], y[0]);
	Ln->AddPoint(1, x[1], y[1]);
	Ln->AddLineWidth(lineWidth);
	return Ln;
}

void GrRectangle::GrDraw(PictureBox^ picbox) //Рисуем прямоугольник
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

GrShape* GrRectangle::Allocate() //Выделяем память для прямоугольника
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

void GrQuadrat::GrDraw(PictureBox^ picbox) //Рисуем квадрат
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

GrShape* GrQuadrat::Allocate() //Выделяем память  для квадрата
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

void GrEllipse::GrDraw(PictureBox^ picbox) //Рисуем эллипс
{
	Graphics^ gr = Graphics::FromImage(picbox->Image);
	Pen^ pen1 = gcnew Pen(Color::FromArgb(color1), lineWidth);
	SolidBrush^ brush1 = gcnew SolidBrush(Color::FromArgb(color2));
	if (filled)
	gr->FillEllipse(brush1, x[0], y[0], x[1] - x[0], y[1] - y[0]);
	gr->DrawEllipse(pen1, x[0], y[0], x[1] - x[0], y[1] - y[0]);
}

GrShape* GrEllipse::Allocate() //Выделяем память для эллипса
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

void GrCircle::GrDraw(PictureBox^ picbox)//Рисуем круг
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

GrShape* GrCircle::Allocate() //Выделяем память для круга
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

GrPolygon::GrPolygon() //Конструктор многоугольника
{
	num = 50;	
	xv = new float[num];
	yv = new float[num];
}

void GrPolygon::GrDraw(PictureBox^ picbox) //Рисуем многоугольник
{
	Graphics^ gr = Graphics::FromImage(picbox->Image);
	Pen^ pen1 = gcnew Pen(Color::FromArgb(color1), lineWidth);
	SolidBrush^ brush1 = gcnew SolidBrush(Color::FromArgb(color2));
	GraphicsPath^ grp = gcnew GraphicsPath();
	
	unsigned radius = rnum;	//радиус описаннной вокруг многоугольника окружности
	double angle = 0;		//угол для определения точки на окружности
		
 /*Вычисляем координаты вершин многоугольника*/

	for (int j = 0; j < num + 1; j++) {
		xv[j] = x[0]+radius * cos(angle * (System::Math::PI) / 180);
		yv[j] = y[0]-radius * sin(angle * (System::Math::PI) / 180);
		angle = angle + 360.0 / num;		//ВАЖНО! число 360 должно быть не целым
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

GrShape* GrPolygon::Allocate() // Выделяем память для многоугольника
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

void GrText::GrDraw(PictureBox^ picbox) //Выоди текст
	{
		Graphics^ gr = Graphics::FromImage(picbox->Image);
		Pen^ pen1 = gcnew Pen(Color::FromArgb(color1));
		Font^ drawFont = System::Drawing::Font::FromHfont(textFnt);				
		String^ drawString = gcnew System::String(textPt.c_str());
		SolidBrush^ fontBrush = gcnew SolidBrush(Color::FromArgb(color1));		
		gr->DrawString(drawString, drawFont, fontBrush, x[0], y[0]);		
	}

	GrShape* GrText::Allocate() //Выделяем память для текста
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

	
	