#include "GrForm.h"
#include "GrShapes.h"

using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) 
{//�������� �������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	VKR15::GrForm form;
	Application::Run(% form);
}

struct Vector2D
{
	int X, Y;		
};
																								 
Vector2D mousePosition;
ShList* beg, * endl;
GrShape* Sh, * Shm;

VKR15::GrForm::GrForm(void)
{
	InitializeComponent();
		//��������� �������� ��� ������� ������
	openFileDialog1->Filter = "����� ����������� (*.bmp, *.jpg, *.png)|*.bmp;*.jpg;*.png";
	saveFileDialog1->Filter = "����� ����������� (*.bmp, *.jpg, *.png)|*.bmp;*.jpg;*.png";
	
}

System::Void VKR15::GrForm::GrForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	//�������������� ������
	color = Color::Red;
	pressed = false;
	statePen = 1;	
	dr = 1;	
	beg = new ShList;
	endl = beg;
	penM = gcnew Pen(Color::Black);
	col = color;
	Bitmap^ Img = gcnew Bitmap(pictureBoxGen->Width, pictureBoxGen->Height);
	gr = Graphics::FromImage(Img);
	pictureBoxGen->Image = Img;
	pictureBoxGen->BackColor = Color::White;	
	�������ToolStripMenuItem->BackColor = color;
	clearAll = false;
	filename = "openFileDialog1";	
	points = gcnew List <Point>();
	return System::Void();
}


System::Void VKR15::GrForm::pictureBoxGen_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{//������������� ������ ��� �����������
	GrForm::label14->Text = "statePen= " + Convert::ToString(statePen);
	pictureBoxGen->Cursor = Cursors::Default;
	//��������, ��� ������
	switch (statePen)
	{	
	case 1://������  �����			
		stateDraw = 0;
	    {		 
		GrLine* L1 = new GrLine; //�������� ������
		Sh = L1; //������������� ���������		
	    }
		break;		

	case 2://������ �������		
			if (radioButtonMouseQuadrat->Checked == false && radioButtonNumberQuadrat->Checked == false) {
				MessageBox::Show("�������� ������ ����� �������", "��������!");
				return;
			}			
			if (radioButtonMouseQuadrat->Checked == true) {				
				stateDraw = 0; //������ �����
			}
			if (radioButtonNumberQuadrat->Checked == true) {
				stateDraw = 1;//������ �������
			}		
		{
			GrQuadrat* Q1 = new GrQuadrat; //�������� ������
			Sh = Q1;//������������� ���������
			
		}
			break;

	case 3://������ �������������
			if (radioButtonMouseRetangle->Checked == false && radioButtonNumberRetangle->Checked == false) {
				MessageBox::Show("�������� ������ ����� �������", "��������!");
				return;
			}		   
			if (radioButtonMouseRetangle->Checked == true) {				
				stateDraw = 0;//������ �����
			}
			if (radioButtonNumberRetangle->Checked == true) {				
				stateDraw = 1;			//������ �������	 
			}
	    {
		GrRectangle* R1 = new GrRectangle;//�������� ������
		Sh = R1;		//������������� ���������			
	    }	   
		break;			

	case 4://������ ����
		
		if (radioButtonMouse�ircle->Checked == false && radioButtonNumber�ircle->Checked == false) {
			MessageBox::Show("�������� ������ ����� �������", "��������!");
			return;
		}
		if (radioButtonMouse�ircle->Checked == true) {			
			stateDraw = 0;//������ �����
		}
		if (radioButtonNumber�ircle->Checked == true) {			
			stateDraw = 1;//������ �������
		}		
		{
			GrCircle* Cir1 = new GrCircle;//�������� ������
			Sh = Cir1;	//������������� ���������					
		}
		break;

	case 5://������ ������		
		if (radioButtonMouseEllipse->Checked == false && radioButtonNumberEllipse->Checked == false) {
			MessageBox::Show("�������� ������ ����� �������", "��������!");
			return;
		}
		if (radioButtonMouseEllipse->Checked == true) {			
			stateDraw = 0;//������ �����
		}
		if (radioButtonNumberEllipse->Checked == true) {			
			stateDraw = 1;//������ �������
		}		
	    {
		GrEllipse* E1 = new GrEllipse; //�������� ������
		Sh = E1;		//������������� ���������
			
	    }		
		break;

	case 6://������ �������������

		if (radioButtonMousePolygon->Checked == false && radioButtonNumberPolygon->Checked == false) {
			MessageBox::Show("�������� ������ ����� �������", "��������!");
			return;
		}
		if (radioButtonMousePolygon->Checked == true) {			
			stateDraw = 0;//������ �����
		}
		if (radioButtonNumberPolygon->Checked == true) {			
			stateDraw = 1;//������ �������
		}
	{  
		GrPolygon* P1 = new GrPolygon; //�������� ������
		Sh = P1;			//������������� ���������
			
	}
		break;

	case 7://�����
		stateDraw = 0;
		{		
			GrText* Tx1 = new GrText; //�������� ������
			Sh = Tx1;		//������������� ���������			
		}
		break;

	case 8://������		
		isLastic = false;				
		pictureBoxGen->Cursor = gcnew System::Windows::Forms::Cursor("lasticCur_3.ico");
		p.X = -1; p.Y = -1;
		break;
	}
	
	col = GrForm::�������ToolStripMenuItem->BackColor; //��������� �����
	if (clearAll) {		
		gr->Clear(Color::White);
		clearAll = false;
		mousePosition.X = -1;
		mousePosition.Y = -1;		
	}
}

System::Void VKR15::GrForm::pictureBoxGen_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{ // ������� ������� ����� ����
	float x1, y1;	
	if (stateDraw == 0) //���� ������ ������������� �����
	{		
		if (statePen == 6) {		
			Sh->AddPoint(0, e->X, e->Y);
			xr1 = e->X;			
		}
		else		
		Sh->AddPoint(0, e->X, e->Y);
	}
	if (stateDraw == 1) //���� ������ ������������� �������
	{//��������, ��� ������
		switch (statePen)
		{
		case 2://������  �������
			Sh->AddPoint(0, e->X, e->Y);
			x1 = System::Convert::ToSingle(numericUpDownQuadrat->Value);
			Sh->AddPoint(1, e->X + x1, e->Y - x1);
			break;
		case 3://������  �������������
			Sh->AddPoint(0, e->X, e->Y);
			x1 = System::Convert::ToSingle(numericUpDownRetangleW->Value);
			y1 = System::Convert::ToSingle(numericUpDownRetangleH->Value);
			
			Sh->AddPoint(1, e->X + x1, e->Y - y1);
			break;
		case 4://������  ����
			Sh->AddPoint(0, e->X, e->Y);
			x1 = System::Convert::ToSingle(numericUpDown�ircle->Value);
			Sh->AddPoint(1, e->X + x1, e->Y - x1);
			break;
		case 5://������  ������
			Sh->AddPoint(0, e->X, e->Y);
			x1 = System::Convert::ToSingle(numericUpDownEllipseH->Value);
			y1 = System::Convert::ToSingle(numericUpDownEllipseW->Value);
			Sh->AddPoint(1, e->X + x1, e->Y - y1);
			break;
		case 6://������  �������������
			Sh->AddPoint(0, e->X, e->Y);			
			Sh->AddNumR(System::Convert::ToInt32(numericUpDownPolygonR->Value));			
			break;
		default:
			break;
		}
		
		xz2 = e->X + x1;
		yz2 = e->Y - y1;
	}	
	pressed = true;
	if ((e->X >= 0)&& (e->Y >= 0))
	{
		Sh->AddPoint(0, e->X, e->Y);
		xz1 = e->X;
		yz1 = e->Y;				
	}
	else
	{
		MessageBox::Show("����� �� ������� ������ ���������", "��������!");
	}
	if (statePen == 8) {
		isLastic = true;
		Sh->AddColor(0, pictureBoxGen->BackColor);
		Sh->AddColor(1, pictureBoxGen->BackColor);
	}
}

System::Void VKR15::GrForm::pictureBoxGen_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{ //������� �������� ����
	
	if (statePen == 8)
	{		
		Graphics^ gr = Graphics::FromImage(pictureBoxGen->Image);
		LsBrush = gcnew SolidBrush(pictureBoxGen->BackColor);				
		p.X = -1;
		p.Y = -1;

		if (!isLastic) return;
		else if (p.X != e->X || p.Y != e->Y) {
			p.X = e->X; 
			p.Y = e->Y;			
			
			Point pt = e->Location;
			points->Add(pt);
			gr->FillEllipse(LsBrush , p.X, p.Y, 12, 12);			
		}		
	}
	GrForm::label1->Text = "(" + e->X.ToString() + ";" + e->Y.ToString() + ")";		
}

System::Void VKR15::GrForm::pictureBoxGen_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{ // ������� ��������� ������ ����
	String^ ShName;
	String^ txtSt;
	pressed = false;
	pictureBoxGen->Invalidate();
	Color colorSh = �������ToolStripMenuItem->BackColor;	
	switch (statePen)
	{
	case 1://������  �����
		ShName = "�����";
		Sh->AddColor(0, colorSh);
		Sh->AddLineWidth(System::Convert::ToSingle(numericUpDownLineW->Value));
		break;
	case 2://������  �������
		ShName = "�������";
		Sh->AddFilled(GrForm::checkBoxQuadrat->Checked);
		Sh->AddLineWidth(System::Convert::ToSingle(numericUpDownLineW->Value));
		Sh->AddColor(0, colorSh);
		Sh->AddColor(1, colorSh);
		break;
	case 3://������  �������������
		ShName = "�������������";
		Sh->AddFilled(GrForm::checkBoxRectangle->Checked);
		Sh->AddLineWidth(System::Convert::ToSingle(numericUpDownLineW->Value));
		Sh->AddColor(0, colorSh);
		Sh->AddColor(1, colorSh);
		break;
	case 4://������  ����
		ShName = "����";
		Sh->AddFilled(GrForm::checkBoxCircle->Checked);
		Sh->AddLineWidth(System::Convert::ToSingle(numericUpDownLineW->Value));
		Sh->AddColor(0, colorSh);
		Sh->AddColor(1, colorSh);
		break;
	case 5://������  ������
		ShName = "������";
		Sh->AddFilled(GrForm::checkBoxEllipse->Checked);
		Sh->AddLineWidth(System::Convert::ToSingle(numericUpDownLineW->Value));
		Sh->AddColor(0, colorSh);
		Sh->AddColor(1, colorSh);
		break;
	case 6://������  �������������
		ShName = "������������";
		Sh->AddFilled(GrForm::checkBoxPolygon->Checked);
		Sh->AddLineWidth(System::Convert::ToSingle(numericUpDownLineW->Value));
		Sh->AddColor(0, colorSh);
		Sh->AddColor(1, colorSh);
		Sh->AddNum(System::Convert::ToInt32(numericUpDownPolygon->Value));
		break;
	case 7://������  �����
		ShName = "�����";
		txtSt = textBoxTx->Text;
		std::string txtCls = marshal_as<std::string>(txtSt);
		IntPtr txtFnt= (fontDialog1->Font) ->ToHfont();
		Sh->AddTextFont(txtFnt);
		Sh->AddText (txtCls);
		Sh->AddColor(0, colorSh);		
		break;
	}
	if (stateDraw == 0) // ������ �����
	{
		if (statePen == 6) {
			int xr = 0;
			xr2 = e->X;
			if (xr1 > xr2)
				xr = xr1 - xr2;
			else
				xr = xr2 - xr1;
			Sh->AddNumR(xr);
		}
		if ((e->X > 0) && (e->Y > 0))
		{
			if (dr == 0 || dr == 1)
				Sh->AddPoint(1, e->X, e->Y);
		}
		else
			MessageBox::Show("����� �� ������� ������ ���������", "��������!");
	}
	if (dr == 1&& statePen!=8)
	{// ������ ���������
		GrShape* Shm = Sh->Allocate();
		endl = endl->AddSh(Shm);
		Sh->GrDraw(pictureBoxGen);
	}
	if (stateDraw == 0)
	{
		xz2 = e->X;
		yz2 = e->Y;
	}
	int colorInt = colorSh.ToArgb(); 
	ShNum++;
	String^ Shp = Convert::ToString(endl);			
		if (dr==0)
		{// ����� ��������������		
			ShList* t;
			t = beg;
			Graphics^ gr = Graphics::FromImage(pictureBoxGen->Image);
			GrShape* Shm = Sh->Allocate();
			Sh->GrDraw(pictureBoxGen);			
			endl = endl->AddSh(Shm); 			
			groupBoxSaveEdit->Visible = true;
		}				
		if (statePen == 8)
		{
			isLastic = false;
		}
		else
		{
			int cnt = listViewSelect->Items->Count + 1;
			AddItem(cnt, ShName, colorSh, xz1, yz1, xz2, yz2, wsh, colorInt, statePen);
		}

}


System::Void VKR15::GrForm::�������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{ //��������� ����
	openFileDialog1->ShowDialog();//��������� ���������� ���� ��� ���������� ������
	filename = openFileDialog1->FileName;//��������� ���� �� ����� ("������ ���")
	//�������� ������
	if (filename == "openFileDialog1")
		return;
	background = gcnew Bitmap(filename);//��������� ���
	this->Width = background->Width;
	this->Height = background->Height;
	gr = Graphics::FromImage(background);//��������� ���
	pictureBoxGen->Image = background;
	return System::Void();
}

System::Void VKR15::GrForm::���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{//��������� ����������� � ����
	String^ fname;
	saveFileDialog1->ShowDialog();//���������� ������ ��� ����������
	fname = saveFileDialog1->FileName;//���������� ������������ ���������
	//��������� 
	if (fname == "")
		return;
	//���������� �����������
	Bitmap^ img = gcnew Bitmap(pictureBoxGen->Image);
	img->Save(fname);//���������
	MessageBox::Show("����������� ��������� �� ������ \"" + fname + "\".", "��������!");
	return System::Void();
}

System::Void VKR15::GrForm::������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{ //������� ����������� �� �������		
	PrintDialog^ printDialog1 = gcnew PrintDialog();
	printDialog1->Document = printDocument1;
	if (printDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
		printDocument1->Print();	
	return System::Void();
}

System::Void VKR15::GrForm::printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e)
{ //���������� ������ �� �������	
	Bitmap^ bmp = gcnew Bitmap(pictureBoxGen->Size.Width + 10, pictureBoxGen->Size.Height + 10);//������� ���������� ������
	pictureBoxGen->DrawToBitmap(bmp, pictureBoxGen->Bounds);	
	e->Graphics->DrawImage(bmp, 0, 0);
	return System::Void();
}

System::Void VKR15::GrForm::radioButtonMousePolygon_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{//������������ radioButton 
 �������������ToolStripMenuItem_Click(sender, e);
	return System::Void();
}

System::Void VKR15::GrForm::radioButtonNumberPolygon_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{//������������ radioButton
	�������������ToolStripMenuItem_Click(sender, e);
	return System::Void();
}

System::Void VKR15::GrForm::radioButtonMouseQuadrat_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{//������������ radioButton
	�������ToolStripMenuItem_Click(sender, e);
	return System::Void();
}

System::Void VKR15::GrForm::radioButtonNumberQuadrat_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{//������������ radioButton
	�������ToolStripMenuItem_Click(sender, e);
	return System::Void();
}

System::Void VKR15::GrForm::radioButtonMouseRetangle_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{//������������ radioButton
	�������������ToolStripMenuItem_Click(sender, e);
	return System::Void();
}

System::Void VKR15::GrForm::radioButtonNumberRetangle_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{//������������ radioButton
	�������������ToolStripMenuItem_Click(sender, e);
	return System::Void();
}

System::Void VKR15::GrForm::radioButtonMouse�ircle_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{//������������ radioButton
	����ToolStripMenuItem_Click(sender, e);
	return System::Void();
}

System::Void VKR15::GrForm::radioButtonNumber�ircle_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{//������������ radioButton
	����ToolStripMenuItem_Click(sender, e);
	return System::Void();
}

System::Void VKR15::GrForm::radioButtonMouseEllipse_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{//������������ radioButton
	������ToolStripMenuItem_Click(sender, e);
	return System::Void();
}

System::Void VKR15::GrForm::radioButtonNumberEllipse_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{//������������ radioButton
	������ToolStripMenuItem_Click(sender, e);
	return System::Void();
}


System::Void VKR15::GrForm::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{ //����� �� ���������
	Application::Exit();
}

System::Void VKR15::GrForm::������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{ //�������� � �������� ���� ������� ������� �����
	groupBoxLineW->Visible = true;	
	groupBoxQuadrat->Visible = false;
	groupBoxRetangle->Visible = false;
	groupBox�ircle->Visible = false;
	groupBoxEllipse->Visible = false;
	groupBoxPolygon->Visible = false;	
	groupBoxText->Visible = false;
	groupBoxZoom->Visible = false;
	groupBoxLineW->Location = Point(30, 172);
	return System::Void();
}

System::Void VKR15::GrForm::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� � �������� ���� ������� �����	
	groupBoxQuadrat->Visible = false;
	groupBoxRetangle->Visible = false;
	groupBox�ircle->Visible = false;
	groupBoxEllipse->Visible = false;
	groupBoxPolygon->Visible = false;	
	groupBoxLineW->Visible = false;
	groupBoxText->Visible = false;
	groupBoxZoom->Visible = false;
	if (statePen != 1) {
		//�������� ����
		statePen = 1;		
	}
	pictureBoxGen->Invalidate();
	return System::Void();
}

System::Void VKR15::GrForm::�������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� � �������� ���� ������� �������	
	groupBoxQuadrat->Visible = true;
	groupBoxZoom->Visible = false;
	groupBoxRetangle->Visible = false;
	groupBox�ircle->Visible = false;
	groupBoxEllipse->Visible = false;
	groupBoxPolygon->Visible = false;	
	groupBoxLineW->Visible = false;
	groupBoxText->Visible = false;
	if (radioButtonMouseQuadrat->Checked == false && radioButtonNumberQuadrat->Checked == false) {
		MessageBox::Show("�������� ������ ����� �������", "��������!");
		return;
	}
	if (radioButtonMouseQuadrat->Checked == true) {
		numericUpDownQuadrat->Enabled = false;
	}
	if (radioButtonNumberQuadrat->Checked == true) {
		numericUpDownQuadrat->Enabled = true;
	}
	groupBoxQuadrat->Location = Point(30, 172);
	return System::Void();
}

System::Void VKR15::GrForm::�������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� � �������� ���� ������� �������������	
	groupBoxRetangle->Visible = true;
	groupBoxZoom->Visible = false;
	groupBoxQuadrat->Visible = false;	
	groupBox�ircle->Visible = false;
	groupBoxEllipse->Visible = false;
	groupBoxPolygon->Visible = false;	
	groupBoxLineW->Visible = false;
	groupBoxText->Visible = false;
	if (radioButtonMouseQuadrat->Checked == false && radioButtonNumberQuadrat->Checked == false) {
		MessageBox::Show("�������� ������ ����� �������", "��������!");
		return;
	}
	if (radioButtonMouseRetangle->Checked == true) {
		numericUpDownRetangleH->Enabled = false;
		numericUpDownRetangleW->Enabled = false;
	}
	if (radioButtonNumberRetangle->Checked == true) {
		numericUpDownRetangleH->Enabled = true;
		numericUpDownRetangleW->Enabled = true;
	}
	groupBoxRetangle->Location = Point(30, 172);
	return System::Void();
}

System::Void VKR15::GrForm::����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� � �������� ���� ������� ����
	groupBox�ircle->Visible = true;
	groupBoxZoom->Visible = false;
	groupBoxQuadrat->Visible = false;
	groupBoxRetangle->Visible = false;	
	groupBoxEllipse->Visible = false;
	groupBoxPolygon->Visible = false;	
	groupBoxLineW->Visible = false;
	groupBoxText->Visible = false;
	if (radioButtonMouse�ircle->Checked == false && radioButtonNumber�ircle->Checked == false) {
		MessageBox::Show("�������� ������ ����� �������", "��������!");
		return;
	}
	if (radioButtonMouse�ircle->Checked == true) {
		numericUpDown�ircle->Enabled = false;
	}
	if (radioButtonNumber�ircle->Checked == true) {
		numericUpDown�ircle->Enabled = true;
	}
	groupBox�ircle->Location = Point(30, 172);
	return System::Void();	
}

System::Void VKR15::GrForm::������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� � �������� ���� ������� ������
	groupBoxEllipse->Visible = true;
	groupBoxZoom->Visible = false;
	groupBoxQuadrat->Visible = false;
	groupBoxRetangle->Visible = false;
	groupBox�ircle->Visible = false;	
	groupBoxPolygon->Visible = false;
	groupBoxLineW->Visible = false;
	groupBoxText->Visible = false;
	if (radioButtonMouseEllipse->Checked == false && radioButtonNumberEllipse->Checked == false) {
		MessageBox::Show("�������� ������ ����� �������", "��������!");
		return;
	}
	if (radioButtonMouseEllipse->Checked == true) {
		numericUpDownEllipseH->Enabled = false;
		numericUpDownEllipseW->Enabled = false;
	}
	if (radioButtonNumberEllipse->Checked == true) {
		numericUpDownEllipseH->Enabled = true;
		numericUpDownEllipseW->Enabled = true;
	}
	groupBoxEllipse->Location = Point(30, 172);
	return System::Void();	
}

System::Void VKR15::GrForm::�������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� � �������� ���� ������� �������������
	groupBoxPolygon->Visible = true;
	groupBoxZoom->Visible = false;
	groupBoxQuadrat->Visible = false;
	groupBoxRetangle->Visible = false;
	groupBox�ircle->Visible = false;
	groupBoxEllipse->Visible = false;		
	groupBoxLineW->Visible = false;
	groupBoxText->Visible = false;
	if (radioButtonMousePolygon->Checked == false && radioButtonNumberPolygon->Checked == false) {
		MessageBox::Show("�������� ������ ����� �������", "��������!");
		return;
	}
	if (radioButtonMousePolygon->Checked == true) {
		numericUpDownPolygonR->Enabled = false;		
	}
	if (radioButtonNumberPolygon->Checked == true) {
		numericUpDownPolygonR->Enabled = true;		
	}
	groupBoxPolygon->Location = Point(30, 172);
	return System::Void();
}

System::Void VKR15::GrForm::�����StripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� � �������� ���� ������� �����
	groupBoxText->Visible = true;
	groupBoxZoom->Visible = false;
	groupBoxQuadrat->Visible = false;
	groupBox�ircle->Visible = false;
	groupBoxEllipse->Visible = false;
	groupBoxPolygon->Visible = false;	
	groupBoxLineW->Visible = false;
	groupBoxRetangle->Visible = false;
	groupBoxText->Location = Point(30, 100);
		return System::Void();
}

System::Void VKR15::GrForm::buttonOkText_Click(System::Object^ sender, System::EventArgs^ e)
{ //������� ��� ������� ������ "���������" � ����� �����
	if (statePen != 7) {
		//������ ��������� ����
		statePen = 7;
	}

	groupBoxText->Visible = false;
	return System::Void();
}

System::Void VKR15::GrForm::buttonCancelText_Click(System::Object^ sender, System::EventArgs^ e)
{//������� ��� ������� ������ "�������" � ����� �����
	groupBoxText->Visible = false;
	return System::Void();
}

System::Void VKR15::GrForm::�����ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� ������ ��������� ���������� �������
	fontDialog1->ShowDialog();	
	return System::Void();
}

System::Void VKR15::GrForm::�������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� ������ ��������� ����� �����
	colorDialog1->ShowDialog();
	color = colorDialog1->Color;
	drSt = 1;
	�������ToolStripMenuItem->BackColor = color;
	if (color == Color::Black) {
		�������ToolStripMenuItem->ForeColor = Color::White;
	}
	else {
		�������ToolStripMenuItem->ForeColor = Color::Black;
	}	
	return System::Void();
}

System::Void VKR15::GrForm::selectToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� � �������� ���� ������� ��������	
	groupBoxSelect2->Visible = true;
	groupBoxZoom->Visible = false;	
	groupBoxQuadrat->Visible = false;
	groupBoxRetangle->Visible = false;
	groupBox�ircle->Visible = false;
	groupBoxEllipse->Visible = false;
	groupBoxPolygon->Visible = false;
	groupBoxLineW->Visible = false;
	groupBoxText->Visible = false;
	groupBoxSelect2->Location = Point(30, 172);
	P������������ToolStripMenuItem->Enabled=true;
	�������ToolStripMenuItem->Enabled = true;
	�������������ToolStripMenuItem->Enabled = true;
	listViewSelect->View = View::Details;
	return System::Void();
}

System::Void VKR15::GrForm::editToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� ������� �������������
	//dr = 0; //����� ��������������
	if (dr == 0)
	{
		P������������ToolStripMenuItem->Enabled = false;
		�������ToolStripMenuItem->Enabled = false;
		�������������ToolStripMenuItem->Enabled = false;		
		switch (statePen)
		{
		case 1://������  �����
			�����ToolStripMenuItem_Click(sender, e);
			break;
		case 2://������  �������
			�������ToolStripMenuItem_Click(sender, e);
			break;
		case 3://������  �������������
			�������������ToolStripMenuItem_Click(sender, e);
			break;
		case 4://������  ����
			����ToolStripMenuItem_Click(sender, e);
			break;
		case 5://������  ������
			������ToolStripMenuItem_Click(sender, e);
			break;
		case 6://������  �������������
			�������������ToolStripMenuItem_Click(sender, e);
			break;
		case 7://������  �����
			�����StripMenuItem_Click(sender, e);
			break;
		default:
			break;
		}
	}
  return System::Void();
}

System::Void VKR15::GrForm::deleteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{ //�������� ������� �������
	P������������ToolStripMenuItem->Enabled = false;
	�������ToolStripMenuItem->Enabled = false;
	�������������ToolStripMenuItem->Enabled = false;
	Bitmap^ Img = gcnew Bitmap(pictureBoxGen->Size.Width - 2, pictureBoxGen->Size.Height - 2);
	pictureBoxGen->Image = Img;
	numStrm = 0;
	Graphics^ gr = Graphics::FromImage(pictureBoxGen->Image);		
	ShList* t;
	t = beg;		
	if (listNum!= 0)
	{
		while (t->Inc() != nullptr)
		{
			if (numStrm == listNum)
			{
				t->DelSelSh();
				t = t->Inc();
				listViewSelect->Items[listNum]->Remove();
				break;
			}
			numStrm++;
			t = t->Inc();
		}
		t = beg;
	}
	else
	{ 
		t = t->DelStartSh();
		listViewSelect->Items[0]->Remove();	
		beg = t;
	}
	int counLst = listViewSelect->Items->Count;
	int cntn = 0;		
	for (int cnti =0 ; cnti < counLst; cnti++)
	{
		cntn = cnti+1;
		listViewSelect->Items[cnti]->Text = cntn.ToString();		
	}	
	while (t->Inc() != nullptr)
	{
		t->Redraw(pictureBoxGen);
		t = t->Inc();
		
	}
	for (int i = 0; i < (points->Count); i++)
	{
		Point pt = points[i];
		gr->FillEllipse(LsBrush, pt.X, pt.Y, 10, 10);
	}
	pictureBoxGen->Invalidate();
	return System::Void();
}

System::Void VKR15::GrForm::zoomToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� ������� �������������	
	groupBoxSelect2->Visible = false;	
	groupBoxQuadrat->Visible = false;
	groupBoxRetangle->Visible = false;
	groupBox�ircle->Visible = false;
	groupBoxEllipse->Visible = false;
	groupBoxPolygon->Visible = false;
	groupBoxLineW->Visible = false;
	groupBoxText->Visible = false;
	groupBoxSelect2->Location = Point(30, 172);
	P������������ToolStripMenuItem->Enabled = false;
	�������ToolStripMenuItem->Enabled = false;
	�������������ToolStripMenuItem->Enabled = false;
	if (statePen != 7 || statePen != 8)
	{
		groupBoxZoom->Visible = true;
		dr = 2; //����� ��������������
		xm = Convert::ToSingle(numericUpDownZoom->Value);
		ym = xm;
		groupBoxZoom->Visible = true;
		groupBoxZoom->Location = Point(30, 150);
	}
	else
		MessageBox::Show("�� �������������");
	return System::Void();
}

System::Void VKR15::GrForm::buttonOkSel_Click(System::Object^ sender, System::EventArgs^ e)
{//		����� �������� ����� ��������	
	if (radioButtonDelSel->Checked == true)
	{ 
		deleteToolStripMenuItem_Click(sender, e);
		groupBoxSelect->Visible = false;
	}
	if (radioButtonEditSel->Checked == true)
	{		
			dr = 0;
			editToolStripMenuItem_Click(sender, e);
			groupBoxSelect->Visible = false;		
	}
	if (radioButtonZoomSel->Checked == true)
	{	
			if (statePen == 7)
			{
				MessageBox::Show("�� �������������");
			}
			else
			{
				dr = 2;
				zoomToolStripMenuItem_Click(sender, e);
				groupBoxSelect->Visible = false;
			}		
	}	
	
	return System::Void();
}

System::Void VKR15::GrForm::buttonCancelSel_Click(System::Object^ sender, System::EventArgs^ e)

{// �������� �����	
		listNum = 0;
		numStrm = 0;
		int colStr = 0;
		for (int i = listViewSelect->Items->Count - 1; i >= 0; i--)
		{
			if (listViewSelect->Items[i]->Selected)
			{	// �������� �������� ��������� ��������� ������		
				listNum = i;
				wsh = Convert::ToSingle(listViewSelect->Items[i]->SubItems[7]->Text);
				colStr = Convert::ToInt32(listViewSelect->Items[i]->SubItems[8]->Text);
				col = Color::FromArgb(colStr);
			}
		}
		Bitmap^ Img = gcnew Bitmap(pictureBoxGen->Size.Width - 2, pictureBoxGen->Size.Height - 2);
		pictureBoxGen->Image = Img;
		Graphics^ gr = Graphics::FromImage(pictureBoxGen->Image);
		ShList* t;
		t = beg;
		numStrm = 0;
		while (t->Inc() != nullptr)
		{
			if (numStrm == listNum)
			{
				t->UnSelSh(wsh, col);
			}
			numStrm++;
			t->Redraw(pictureBoxGen);
			t = t->Inc();
		}		
		for (int i = 0; i < (points->Count); i++)			
		{
			Point pt = points[i];
			gr->FillEllipse(LsBrush, pt.X, pt.Y, 10, 10);
		}
		pictureBoxGen->Invalidate();
		P������������ToolStripMenuItem->Enabled = false;
		�������ToolStripMenuItem->Enabled = false;
		�������������ToolStripMenuItem->Enabled = false;
		groupBoxSelect->Visible = false;	
	return System::Void();
}

System::Void VKR15::GrForm::buttonOkSaveEdit_Click(System::Object^ sender, System::EventArgs^ e)
{ //���������� ���������� ��������������
	if (dr == 0)
	{
		Bitmap^ Img = gcnew Bitmap(pictureBoxGen->Size.Width - 2, pictureBoxGen->Size.Height - 2);
		pictureBoxGen->Image = Img;
		Graphics^ gr = Graphics::FromImage(pictureBoxGen->Image);
		numStrm = 0;
		ShList* t;
		t = beg;
		
		if (listNum != 0)
		{
			while (t->Inc() != nullptr)
			{
				if (numStrm == listNum)
				{
					t->DelSelSh();					
					listViewSelect->Items[listNum]->Remove();
					break;
				}
				numStrm++;
				t = t->Inc();
			}		
			t = beg;			
		}
		else
		{
			t = t->DelStartSh();
			listViewSelect->Items[0]->Remove();
			beg = t;
		}		
		int counLst = listViewSelect->Items->Count; // ��������� ���������
		int cntn = 0;
		for (int cnti = 0; cnti < counLst; cnti++)
		{
			cntn = cnti + 1;
			listViewSelect->Items[cnti]->Text = cntn.ToString();
		}
		while (t->Inc() != nullptr)
		{
			t->Redraw(pictureBoxGen);
			t = t->Inc();
		}
		for (int i = 0; i < (points->Count); i++)
		{
			Point pt = points[i];
			gr->FillEllipse(LsBrush, pt.X, pt.Y, 10, 10);
		}
		pictureBoxGen->Invalidate();
		groupBoxSaveEdit->Visible = false;
		dr = 1;
	}
	return System::Void();
}

System::Void VKR15::GrForm::buttonCancelSaveEdit_Click(System::Object^ sender, System::EventArgs^ e)
{ //�������� ��������� ��������������
	if (dr == 0)
	{
		listNum = 0;
		numStrm = 0;
		int colStr = 0;
		for (int i = listViewSelect->Items->Count - 1; i >= 0; i--)
		{
			if (listViewSelect->Items[i]->Selected)
			{	// �������� �������� ��������� ��������� ������		
				listNum = i;
				wsh = Convert::ToSingle(listViewSelect->Items[i]->SubItems[7]->Text);
				colStr = Convert::ToInt32(listViewSelect->Items[i]->SubItems[8]->Text);
				col = Color::FromArgb(colStr);
			}
		}
		Bitmap^ Img = gcnew Bitmap(pictureBoxGen->Size.Width - 2, pictureBoxGen->Size.Height - 2);
		pictureBoxGen->Image = Img;
		Graphics^ gr = Graphics::FromImage(pictureBoxGen->Image);
		ShList* t;
		if (beg != endl)
			endl = endl->DelEndSh();
		int nl = listViewSelect->Items->Count - 1;
		listViewSelect->Items[nl]->Remove();
		t = beg;
		int cnt = 0;
		numStrm = 0;
		while (t->Inc() != nullptr)
		{
			if (numStrm == listNum)
			{
				t->UnSelSh(wsh, col);
			}
			numStrm++;
			t->Redraw(pictureBoxGen);
			t = t->Inc();
		}
		for (int i = 0; i < (points->Count); i++)
		{
			Point pt = points[i];
			gr->FillEllipse(LsBrush, pt.X, pt.Y, 10, 10);
		}
		P������������ToolStripMenuItem->Enabled = false;
		�������ToolStripMenuItem->Enabled = false;
		�������������ToolStripMenuItem->Enabled = false;
		groupBoxSaveEdit->Visible = false;
		dr = 1;
	}
	return System::Void();
}

System::Void VKR15::GrForm::buttonOkZoom_Click(System::Object^ sender, System::EventArgs^ e)
{ //�������� ������ "���������" � ��������������
	Bitmap^ Img = gcnew Bitmap(pictureBoxGen->Size.Width - 2, pictureBoxGen->Size.Height - 2);
	pictureBoxGen->Image = Img;
	numStrm = 0;
	Graphics^ gr = Graphics::FromImage(pictureBoxGen->Image);		
	ShList* t;
	t = beg;
	xm = Convert::ToSingle(numericUpDownZoom->Value);	
	if (radioButtonPlus->Checked == false && radioButtonMinus->Checked == false) {
		MessageBox::Show("�������� ������ ���������������", "��������!");
		return;
	}
	if (radioButtonMinus->Checked == true) {
		if (abs(xz2 - xz1) > xm)
		xm = xm * (-1);
		else
		{
			MessageBox::Show("��������� �������� ��������� ������ ������", "��������!");
			return;
		}
	}	
	float cz = 0;
	float az = 0;
	while (t->Inc() != nullptr)	
	{		
		if (numStrm == listNum)
		{
			switch (statePen)
			{
			case 1://������  �����					 
				if ((yz1 >= yz2) && (xz2 > xz1))
				{
					az = atan((yz1 - yz2) / (xz2 - xz1));
					xm1 = xz2 + xm * cos(az);
					ym1 = yz2 - xm * sin(az);
				}
				if ((yz2 > yz1) && (xz1 >= xz2))
				{
					az = atan((xz1 - xz2) / (yz2 - yz1));
					xm1 = xz2 - xm * sin(az) ;
					ym1 = yz2 + xm * cos(az);
				}
				if ((yz2 < yz1) && (xz1 >= xz2))
				{					
					az = atan((xz1 - xz2) / (yz1 - yz2));
					xm1 = xz2 - xm * sin(az);
					ym1 = yz2 - xm * cos(az);
				}
				if ((yz2 > yz1) && (xz1 <= xz2))
				{					
					az = atan((yz2 - yz1) / (xz2 - xz1));
					xm1 = xz2 + xm * cos(az);
					ym1 = yz2 + xm * sin(az);
				}
				break;
			case 2://������  �������
				if ((yz1 >= yz2) && (xz2 >= xz1))
				{
					xm1 = xz2 + xm;
					ym1 = yz2 - xm;
				}
				if ((yz2 > yz1) && (xz1 > xz2))
				{
					xm1 = xz2 - xm;
					ym1 = yz2 + xm;
				}
				if ((yz2 > yz1) && (xz1 < xz2))
				{
					xm1 = xz2 + xm;
					ym1 = yz2 + xm;
				}
				if ((yz1 > yz2) && (xz1 > xz2))
				{
					xm1 = xz2 - xm;
					ym1 = yz2 - xm;
				}

				break;
			case 3://������  �������������
				if ((yz1 >= yz2) && (xz2 >= xz1))
				{
					xm1 = xz2 + xm;
					ym1 = yz2 - xm;
				}
				if ((yz2 > yz1) && (xz1 > xz2))
				{
					xm1 = xz2 - xm;
					ym1 = yz2 + xm;
				}
				if ((yz2 > yz1) && (xz1 < xz2))
				{
					xm1 = xz2 + xm;
					ym1 = yz2 + xm;
				}
				if ((yz1 > yz2) && (xz1 > xz2))
				{
					xm1 = xz2 - xm;
					ym1 = yz2 - xm;
				}				
				break;
			case 4://������  ����
				if ((yz1 >= yz2) && (xz2 >= xz1))
				{
					xm1 = xz2 + xm;
					ym1 = yz2 - xm;
				}
				if ((yz2 > yz1) && (xz1 > xz2))
				{
					xm1 = xz2 - xm;
					ym1 = yz2 + xm;
				}
				if ((yz2 > yz1) && (xz1 < xz2))
				{
					xm1 = xz2 + xm;
					ym1 = yz2 + xm;
				}
				if ((yz1 > yz2) && (xz1 > xz2))
				{
					xm1 = xz2 - xm;
					ym1 = yz2 - xm;
				}
				break;
			case 5://������  ������
				if ((yz1 >= yz2) && (xz2 >= xz1))
				{
					xm1 = xz2 + xm;
					ym1 = yz2 - xm;
				}
				if ((yz2 > yz1) && (xz1 > xz2))
				{
					xm1 = xz2 - xm;
					ym1 = yz2 + xm;
				}
				if ((yz2 > yz1) && (xz1 < xz2))
				{
					xm1 = xz2 + xm;
					ym1 = yz2 + xm;
				}
				if ((yz1 > yz2) && (xz1 > xz2))
				{
					xm1 = xz2 - xm;
					ym1 = yz2 - xm;
				}
				break;
			case 6://������  �������������
				xm1 = xz2+xm;
				ym1 = yz2;						
				break;
			case 7://������  �����
				xm1 = xz2;
				ym1 = yz2;
				MessageBox::Show("����� �� �������������");
				break;
			default:
				break;
			}
			if (statePen == 6) {
				int xr = 0; //�������� � ���������������
				xr2 = xm1;
				if (xr1 > xr2)
					xr = xr1 - xr2;
				else
					xr = xr2 - xr1;				
				t->AddZoomR(xr);
			}
			else
			{				
				t->AddZoomPoint(xm1, ym1);
			}
			listNum = 0;
			numStrm = 0;
			int colStr = 0;
			for (int i = listViewSelect->Items->Count - 1; i >= 0; i--)
			{
				if (listViewSelect->Items[i]->Selected)
				{	// �������� �������� ��������� ������		
					listNum = i;
					wsh = Convert::ToSingle(listViewSelect->Items[i]->SubItems[7]->Text);
					colStr = Convert::ToInt32(listViewSelect->Items[i]->SubItems[8]->Text);
					col = Color::FromArgb(colStr);
				}
			}
			t->UnSelSh(wsh, col);
			break;
		}
		numStrm++;	
		t = t->Inc();
	}
	t = beg;
	while (t->Inc() != nullptr)
	{
		t->Redraw(pictureBoxGen);
		t = t->Inc();
	}
	for (int i = 0; i < (points->Count); i++)
	{
		Point pt = points[i];
		gr->FillEllipse(LsBrush, pt.X, pt.Y, 10, 10);
	}
	pictureBoxGen->Invalidate();
	groupBoxZoom->Visible = false;
	dr = 1;
	return System::Void();
}

System::Void VKR15::GrForm::buttonCancelZoom_Click(System::Object^ sender, System::EventArgs^ e)
{//��������� ���� ��������������
	listNum = 0;
	numStrm = 0;
	int colStr = 0;
	for (int i = listViewSelect->Items->Count - 1; i >= 0; i--)
	{
		if (listViewSelect->Items[i]->Selected)
		{		
			listNum = i;
			wsh = Convert::ToSingle(listViewSelect->Items[i]->SubItems[7]->Text);
			colStr = Convert::ToInt32(listViewSelect->Items[i]->SubItems[8]->Text);
			col = Color::FromArgb(colStr);
		}
	}
	Bitmap^ Img = gcnew Bitmap(pictureBoxGen->Size.Width - 2, pictureBoxGen->Size.Height - 2);
	pictureBoxGen->Image = Img;
	numStrm = 0;
	Graphics^ gr = Graphics::FromImage(pictureBoxGen->Image);
	ShList* t;
	t = beg;
	while (t->Inc() != nullptr)
	{
		if (numStrm == listNum)
		{
		t->UnSelSh(wsh,col);
		}

		numStrm++;
		t->Redraw(pictureBoxGen);
		t = t->Inc();
	}
	for (int i = 0; i < (points->Count); i++)
	{
		Point pt = points[i];
		gr->FillEllipse(LsBrush, pt.X, pt.Y, 10, 10);
	}
	P������������ToolStripMenuItem->Enabled = false;
	�������ToolStripMenuItem->Enabled = false;
	�������������ToolStripMenuItem->Enabled = false;
	groupBoxZoom->Visible = false;
	return System::Void();
}

System::Void VKR15::GrForm:: AddItem(int strNum, String^ text, Color colStr, float xz1, float yz1,float xz2, float yz2,float ws, int col, int stPen)
{ //��������� �������� � listView
	
	ListViewItem^ lvi = gcnew ListViewItem();
	lvi->Text = strNum.ToString();

	ListViewItem::ListViewSubItem^ lvsi1 = gcnew ListViewItem::ListViewSubItem();
	lvsi1->Text = text;
	lvi->SubItems->Add(lvsi1); 

	ListViewItem::ListViewSubItem^ lvsi2 = gcnew ListViewItem::ListViewSubItem();
	lvsi2->Text = Convert::ToString(colStr);
	lvi->SubItems->Add(lvsi2);

	ListViewItem::ListViewSubItem^ lvsi3 = gcnew ListViewItem::ListViewSubItem();
	lvsi3->Text = Convert::ToString(xz1);
	lvi->SubItems->Add(lvsi3);

	ListViewItem::ListViewSubItem^ lvsi4 = gcnew ListViewItem::ListViewSubItem();
	lvsi4->Text = Convert::ToString(yz1);
	lvi->SubItems->Add(lvsi4);

	ListViewItem::ListViewSubItem^ lvsi5 = gcnew ListViewItem::ListViewSubItem();
	lvsi5->Text = Convert::ToString(xz2);
	lvi->SubItems->Add(lvsi5);

	ListViewItem::ListViewSubItem^ lvsi6 = gcnew ListViewItem::ListViewSubItem();
	lvsi6->Text = Convert::ToString(yz2);
	lvi->SubItems->Add(lvsi6);

	ListViewItem::ListViewSubItem^ lvsi7 = gcnew ListViewItem::ListViewSubItem();
	lvsi7->Text = Convert::ToString(ws);
	lvi->SubItems->Add(lvsi7);
	
	ListViewItem::ListViewSubItem^ lvsi8 = gcnew ListViewItem::ListViewSubItem();
	lvsi8->Text = Convert::ToString(col);
	lvi->SubItems->Add(lvsi8);	

	ListViewItem::ListViewSubItem^ lvsi9 = gcnew ListViewItem::ListViewSubItem();
	lvsi9->Text = Convert::ToString(stPen);
	lvi->SubItems->Add(lvsi9);

	listViewSelect->Items->Add(lvi); //�������� ������� � ���������

	return System::Void();
}


System::Void VKR15::GrForm::����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{ //������� ��������� ��������� ������	
	Bitmap^ Img = gcnew Bitmap(pictureBoxGen->Size.Width - 2, pictureBoxGen->Size.Height - 2);
	pictureBoxGen->Image = Img;
	Graphics^ gr = Graphics::FromImage(pictureBoxGen->Image);
	if (beg != endl)
		endl = endl->DelEndSh();	
	ShList* t;
	t = beg;
	int cnt = 0;
	while (t->Inc() != nullptr)
	{		
		t->Redraw(pictureBoxGen);
		t = t->Inc();
		cnt++;
	}
	listViewSelect->Items[cnt]->Remove();
	pictureBoxGen->Invalidate();
}

System::Void VKR15::GrForm::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)

{ //������� ��� ������
	Bitmap^ Img = gcnew Bitmap(pictureBoxGen->Size.Width - 2, pictureBoxGen->Size.Height - 2);
	pictureBoxGen->Image = Img;
	Graphics^ gr = Graphics::FromImage(pictureBoxGen->Image);
	while (beg != endl)
		endl = endl->DelEndSh();
	listViewSelect->Items->Clear();
	points->Clear();
	pictureBoxGen->Invalidate();
	return System::Void();
}

System::Void VKR15::GrForm::������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (statePen != 8) {
		//������ ��������� ����
		statePen = 8;
	}	
	pictureBoxGen->Cursor = gcnew System::Windows::Forms::Cursor("lasticCur_3.ico");	
	return System::Void();
}

System::Void VKR15::GrForm::���������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Bitmap^ Img = gcnew Bitmap(pictureBoxGen->Size.Width - 2, pictureBoxGen->Size.Height - 2);
	pictureBoxGen->Image = Img;
	Graphics^ gr = Graphics::FromImage(pictureBoxGen->Image);
	ShList* t;
	t = beg;
	points->Clear();	
	pictureBoxGen->Invalidate();
	while (t->Inc() != nullptr)
	{
		t->Redraw(pictureBoxGen);
		t = t->Inc();
	}
	pictureBoxGen->Invalidate();
	return System::Void();
}


System::Void VKR15::GrForm::buttonOkQuadrat_Click(System::Object^ sender, System::EventArgs^ e)
{ //�������� ������ "���������" � ����� �������
	if (statePen != 2) {
		//������ ��������� ����
		statePen = 2;
	}	
	groupBoxQuadrat->Visible = false;
	return System::Void();
}

System::Void VKR15::GrForm::buttonCancelQuadrat_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� ������ "�������" � ����� �������
	groupBoxQuadrat->Visible = false;
	return System::Void();
}

System::Void VKR15::GrForm::buttonOkRetangle_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� ������ "���������" � ����� �������������
	//��������� ��������� ����
	if (statePen != 3) {
		//������ ��������� ����
		statePen = 3;
	}	
	groupBoxRetangle->Visible = false;
	return System::Void();
}

System::Void VKR15::GrForm::buttonCancelRetangle_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� ������ "�������" � ����� �������������
	groupBoxRetangle->Visible = false;
	return System::Void();
}

System::Void VKR15::GrForm::buttonOk�ircle_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� ������ "���������" � ����� ����
	if (statePen != 4) {
		//������ ��������� ����
		statePen = 4;
	}
	groupBox�ircle->Visible = false;
	return System::Void();	
}

System::Void VKR15::GrForm::buttonCacelCircle_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� ������ "�������" � ����� ����
	groupBox�ircle->Visible = false;
	return System::Void();
}

System::Void VKR15::GrForm::buttonOkEllipse_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� ������ "���������" � ����� ������
	if (statePen != 5) {
		//������ ��������� ����
		statePen = 5;
	}
	groupBoxEllipse->Visible = false;
	return System::Void();
}

System::Void VKR15::GrForm::buttonCanselEllipse_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� ������ "�������" � ����� ������
	groupBoxEllipse->Visible = false;
	return System::Void();
}

System::Void VKR15::GrForm::buttonOkPolygone_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� ������ "���������" � ����� �������������
	if (statePen != 6) {
		//������ ��������� ����
		statePen = 6;
	}	
	if(Convert::ToInt32(numericUpDownPolygon->Value)<3)
		MessageBox::Show("���������� ������ ������ ���� ������ 2-�");
		else
	groupBoxPolygon->Visible = false;
	return System::Void();
}

System::Void VKR15::GrForm::buttonCancelPolygone_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� ������ "�������" � ����� �������������		
	groupBoxPolygon->Visible = false;
	return System::Void();
}

System::Void VKR15::GrForm::buttonOkLineW_Click(System::Object^ sender, System::EventArgs^ e)
{//������ ���������� ���������� �������� ���� "������� �����"
    
	wsh = Convert::ToSingle(numericUpDownLineW->Value);
	groupBoxLineW->Visible = false;
	return System::Void();
}

System::Void VKR15::GrForm::buttonCancelLineW_Click(System::Object^ sender, System::EventArgs^ e)
{//������ ������ ������ ���� "������� �����"
	groupBoxLineW->Visible = false;
	return System::Void();
}

System::Void VKR15::GrForm::buttonOKSelect_2_Click(System::Object^ sender, System::EventArgs^ e)
{ //������ ���������� ������ ������
	listNum = 0;
	numStrm = 0;
	int colStr=0;
	for (int i = listViewSelect->Items->Count - 1; i >= 0; i--)
	{
		if (listViewSelect->Items[i]->Selected)
		{	// �������� �������� ��������� ��������� ������				
			int il = Convert::ToInt32(listViewSelect->Items[i]->Text);
			listNum = i;			
			xz1 = Convert::ToSingle(listViewSelect->Items[i]->SubItems[3]->Text);
			yz1 = Convert::ToSingle(listViewSelect->Items[i]->SubItems[4]->Text);
			xz2 = Convert::ToSingle(listViewSelect->Items[i]->SubItems[5]->Text);
			yz2 = Convert::ToSingle(listViewSelect->Items[i]->SubItems[6]->Text);
			wsh= Convert::ToSingle(listViewSelect->Items[i]->SubItems[7]->Text);
		    colStr = Convert::ToInt32(listViewSelect->Items[i]->SubItems[8]->Text);
			col = Color::FromArgb(colStr);			
			statePen= Convert::ToInt32(listViewSelect->Items[i]->SubItems[9]->Text);
		}			
	}	
	pictureBoxGen->Invalidate();
	Bitmap^ Img = gcnew Bitmap(pictureBoxGen->Size.Width - 2, pictureBoxGen->Size.Height - 2);
	pictureBoxGen->Image = Img;
	Graphics^ gr = Graphics::FromImage(pictureBoxGen->Image);	
	ShList* t;
	t = beg;			
	while (t->Inc() != nullptr)
	{	//�������� ��������� ������	
		if (numStrm == listNum)
		{			
			t->SelSh(wsh,col);	
		}		
		numStrm++;
		t->Redraw(pictureBoxGen);
		t = t->Inc();
	}	
	for (int i = 0; i < (points->Count); i++)
	{
		Point pt = points[i];
		gr->FillEllipse(LsBrush, pt.X, pt.Y, 10, 10);
	}
	pictureBoxGen->Invalidate();
	groupBoxSelect2->Visible = false;
	groupBoxSelect->Visible = true;
	groupBoxSelect->Location = Point(30, 100);
	return System::Void();
}

System::Void VKR15::GrForm::buttonCancelSelect_2_Click(System::Object^ sender, System::EventArgs^ e)
{//������ ������ �� ���� ��������� ������	
	groupBoxSelect2->Visible = false;	
	P������������ToolStripMenuItem->Enabled = false;
	�������ToolStripMenuItem->Enabled = false;
	�������������ToolStripMenuItem->Enabled = false;
	return System::Void();
}

