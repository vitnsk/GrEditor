#include <msclr\marshal_cppstd.h>
#include <Math.h>

#pragma once

namespace VKR15 {

	using namespace System;		
	using namespace System::Drawing;	
	using namespace System::Collections::Generic;	
	using namespace msclr::interop;
	
	public ref class GrForm : public System::Windows::Forms::Form
	{
	public:
		GrForm(void);		
			//TODO: ‰Ó·‡‚¸ÚÂ ÍÓ‰ ÍÓÌÒÚÛÍÚÓ‡
		

	protected:
		/// <summary>
		/// ŒÒ‚Ó·Ó‰ËÚ¸ ‚ÒÂ ËÒÔÓÎ¸ÁÛÂÏ˚Â ÂÒÛÒ˚.
		/// </summary>
		~GrForm()
		{
			if (components)
			{
				delete components;
			}
		}
	
	protected:

	private: System::Windows::Forms::PictureBox^ pictureBoxGen;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::GroupBox^ groupBoxQuadrat;
	private: System::Windows::Forms::Button^ buttonCancelQuadrat;
	private: System::Windows::Forms::Button^ buttonOkQuadrat;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownQuadrat;
	private: System::Windows::Forms::RadioButton^ radioButtonNumberQuadrat;
	private: System::Windows::Forms::RadioButton^ radioButtonMouseQuadrat;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonOkRetangle;
	private: System::Windows::Forms::Button^ buttonCancelRetangle;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownRetangleW;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownRetangleH;
	private: System::Windows::Forms::RadioButton^ radioButtonNumberRetangle;
	private: System::Windows::Forms::RadioButton^ radioButtonMouseRetangle;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox—ircle;
	private: System::Windows::Forms::Button^ buttonCacelCircle;
	private: System::Windows::Forms::Button^ buttonOk—ircle;
private: System::Windows::Forms::NumericUpDown^ numericUpDown—ircle;
private: System::Windows::Forms::RadioButton^ radioButtonNumber—ircle;
private: System::Windows::Forms::RadioButton^ radioButtonMouse—ircle;
	private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::GroupBox^ groupBoxEllipse;
private: System::Windows::Forms::Button^ buttonOkEllipse;
private: System::Windows::Forms::Button^ buttonCanselEllipse;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::NumericUpDown^ numericUpDownEllipseW;
private: System::Windows::Forms::NumericUpDown^ numericUpDownEllipseH;
private: System::Windows::Forms::RadioButton^ radioButtonNumberEllipse;
private: System::Windows::Forms::RadioButton^ radioButtonMouseEllipse;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBoxPolygon;
	private: System::Windows::Forms::Button^ buttonCancelPolygon;
	private: System::Windows::Forms::Button^ buttonOkPolygon;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownPolygon;
private: System::Windows::Forms::GroupBox^ groupBoxLineW;
private: System::Windows::Forms::Button^ buttonCancelLineW;
private: System::Windows::Forms::Button^ buttonOkLineW;
private: System::Windows::Forms::NumericUpDown^ numericUpDownLineW;
private: System::Windows::Forms::GroupBox^ groupBoxRetangle;
private: System::Windows::Forms::PrintDialog^ printDialog1;
private: System::Windows::Forms::ToolStripMenuItem^ Ù‡ÈÎToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ÓÚÍ˚Ú¸ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ÒÓı‡ÌËÚ¸ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ‚˚ıÓ‰ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ‚˚ıÓ‰ToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ ‚Ë‰ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ÚÓÎ˘ËÌ‡ÀËÌËÈToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ Ô‡ÎËÚ‡ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ Ô‡ÌÂÎ¸›ÂÏÂÌÚÓ‚ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ÎËÌËˇToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ Í‚‡‰‡ÚToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ÔˇÏÓÛ„ÓÎ¸ÌËÍToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ÍÛ„ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ˝ÎÎËÔÒToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ÏÌÓ„ÓÛ„ÓÎ¸ÌËÍToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ˝ÎÂÏÂÌÚ˚ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ÚÂÍÒÚStripMenuItem;
//private: System::Windows::Forms::ToolStripMenuItem^ ÚÂÍÒÚÛ‡ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
private: System::Windows::Forms::MenuStrip^ menuStrip1;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::CheckBox^ checkBoxRectangle;
private: System::Windows::Forms::CheckBox^ checkBoxEllipse;
private: System::Windows::Forms::CheckBox^ checkBoxQuadrat;
private: System::Windows::Forms::CheckBox^ checkBoxCircle;
private: System::Windows::Forms::CheckBox^ checkBoxPolygon;
private: System::Windows::Forms::FontDialog^ fontDialog1;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::GroupBox^ groupBoxText;
private: System::Windows::Forms::Button^ buttonOkText;
private: System::Windows::Forms::Button^ buttonCancelText;
private: System::Windows::Forms::TextBox^ textBoxTx;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::NumericUpDown^ numericUpDownPolygonR;
private: System::Windows::Forms::RadioButton^ radioButtonNumberPolygon;
private: System::Windows::Forms::RadioButton^ radioButtonMousePolygon;
private: System::Windows::Forms::ToolStripMenuItem^ Û‰‡ÎËÚ¸œÓÒÎÂ‰ÌËÈToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ Û‰‡ÎËÚ¸¬ÒÂToolStripMenuItem;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::ToolStripMenuItem^ ‚˚‰ÂÎËÚ¸2ToolStripMenuItem;
private: System::Windows::Forms::GroupBox^ groupBoxSelect2;
internal: System::Windows::Forms::ListView^ listViewSelect;
private: System::Windows::Forms::Button^ buttonCancelSelect2_Click;
internal:
private:
private: System::Windows::Forms::Button^ buttonOkSelect2_Click;
private: System::Windows::Forms::ColumnHeader^ columnHeaderNum;
private: System::Windows::Forms::ColumnHeader^ columnHeaderSh;
private: System::Windows::Forms::ColumnHeader^ columnHeaderCol;
private: System::Windows::Forms::ToolStripMenuItem^ PÂ‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ Û‰‡ÎËÚ¸ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ Ï‡¯Ú‡·ËÓ‚‡Ú¸ToolStripMenuItem;
private: System::Windows::Forms::GroupBox^ groupBoxZoom;
private: System::Windows::Forms::Button^ buttonCancelZoom;
private: System::Windows::Forms::Button^ buttonOkZoom;
private: System::Windows::Forms::NumericUpDown^ numericUpDownZoom;
private: System::Windows::Forms::GroupBox^ groupBoxSaveEdit;
private: System::Windows::Forms::Button^ buttonCancelSaveEdit;
private: System::Windows::Forms::Button^ buttonOkSaveEdit;
private: System::Windows::Forms::GroupBox^ groupBoxSelect;
private: System::Windows::Forms::RadioButton^ radioButtonZoomSel;
private: System::Windows::Forms::Button^ buttonOkSel;
private: System::Windows::Forms::Button^ buttonCancelSel;
private: System::Windows::Forms::RadioButton^ radioButtonEditSel;
private: System::Windows::Forms::RadioButton^ radioButtonDelSel;
private: System::Windows::Forms::ToolStripMenuItem^ ¯ËÙÚToolStripMenuItem1;
private: System::Windows::Forms::ColumnHeader^ columnHeaderX0;
private: System::Windows::Forms::ColumnHeader^ columnHeaderY0;
private: System::Windows::Forms::ColumnHeader^ columnHeaderX1;
private: System::Windows::Forms::ColumnHeader^ columnHeaderY1;
private: System::Drawing::Printing::PrintDocument^ printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
private: System::Windows::Forms::Timer^ timer2;
private: System::Windows::Forms::ToolStripMenuItem^ Î‡ÒÚËÍToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ‚ÓÒÒÚ‡ÌÓ‚ËÚ¸—ÚÂÚÓÂÀ‡ÒÚËÍÓÏToolStripMenuItem;
private: System::Windows::Forms::RadioButton^ radioButtonMinus;
private: System::Windows::Forms::RadioButton^ radioButtonPlus;
private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// Œ·ˇÁ‡ÚÂÎ¸Ì‡ˇ ÔÂÂÏÂÌÌ‡ˇ ÍÓÌÒÚÛÍÚÓ‡.
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// “Â·ÛÂÏ˚È ÏÂÚÓ‰ ‰Îˇ ÔÓ‰‰ÂÊÍË ÍÓÌÒÚÛÍÚÓ‡ ó ÌÂ ËÁÏÂÌˇÈÚÂ 
		/// ÒÓ‰ÂÊËÏÓÂ ˝ÚÓ„Ó ÏÂÚÓ‰‡ Ò ÔÓÏÓ˘¸˛ Â‰‡ÍÚÓ‡ ÍÓ‰‡.
		/// </summary>
		void InitializeComponent(void)
		{
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GrForm::typeid));
            this->pictureBoxGen = (gcnew System::Windows::Forms::PictureBox());
            this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
            this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
            this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
            this->groupBoxQuadrat = (gcnew System::Windows::Forms::GroupBox());
            this->checkBoxQuadrat = (gcnew System::Windows::Forms::CheckBox());
            this->buttonCancelQuadrat = (gcnew System::Windows::Forms::Button());
            this->buttonOkQuadrat = (gcnew System::Windows::Forms::Button());
            this->numericUpDownQuadrat = (gcnew System::Windows::Forms::NumericUpDown());
            this->radioButtonNumberQuadrat = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonMouseQuadrat = (gcnew System::Windows::Forms::RadioButton());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->groupBoxRetangle = (gcnew System::Windows::Forms::GroupBox());
            this->checkBoxRectangle = (gcnew System::Windows::Forms::CheckBox());
            this->buttonOkRetangle = (gcnew System::Windows::Forms::Button());
            this->buttonCancelRetangle = (gcnew System::Windows::Forms::Button());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->numericUpDownRetangleW = (gcnew System::Windows::Forms::NumericUpDown());
            this->numericUpDownRetangleH = (gcnew System::Windows::Forms::NumericUpDown());
            this->radioButtonNumberRetangle = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonMouseRetangle = (gcnew System::Windows::Forms::RadioButton());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->groupBox—ircle = (gcnew System::Windows::Forms::GroupBox());
            this->checkBoxCircle = (gcnew System::Windows::Forms::CheckBox());
            this->buttonCacelCircle = (gcnew System::Windows::Forms::Button());
            this->buttonOk—ircle = (gcnew System::Windows::Forms::Button());
            this->numericUpDown—ircle = (gcnew System::Windows::Forms::NumericUpDown());
            this->radioButtonNumber—ircle = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonMouse—ircle = (gcnew System::Windows::Forms::RadioButton());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->groupBoxEllipse = (gcnew System::Windows::Forms::GroupBox());
            this->checkBoxEllipse = (gcnew System::Windows::Forms::CheckBox());
            this->buttonOkEllipse = (gcnew System::Windows::Forms::Button());
            this->buttonCanselEllipse = (gcnew System::Windows::Forms::Button());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->numericUpDownEllipseW = (gcnew System::Windows::Forms::NumericUpDown());
            this->numericUpDownEllipseH = (gcnew System::Windows::Forms::NumericUpDown());
            this->radioButtonNumberEllipse = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonMouseEllipse = (gcnew System::Windows::Forms::RadioButton());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->groupBoxPolygon = (gcnew System::Windows::Forms::GroupBox());
            this->radioButtonNumberPolygon = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonMousePolygon = (gcnew System::Windows::Forms::RadioButton());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->numericUpDownPolygonR = (gcnew System::Windows::Forms::NumericUpDown());
            this->checkBoxPolygon = (gcnew System::Windows::Forms::CheckBox());
            this->buttonCancelPolygon = (gcnew System::Windows::Forms::Button());
            this->buttonOkPolygon = (gcnew System::Windows::Forms::Button());
            this->numericUpDownPolygon = (gcnew System::Windows::Forms::NumericUpDown());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->groupBoxLineW = (gcnew System::Windows::Forms::GroupBox());
            this->buttonCancelLineW = (gcnew System::Windows::Forms::Button());
            this->buttonOkLineW = (gcnew System::Windows::Forms::Button());
            this->numericUpDownLineW = (gcnew System::Windows::Forms::NumericUpDown());
            this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
            this->Ù‡ÈÎToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ÓÚÍ˚Ú¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ÒÓı‡ÌËÚ¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->‚˚ıÓ‰ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->‚˚ıÓ‰ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->‚Ë‰ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ÚÓÎ˘ËÌ‡ÀËÌËÈToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->Ô‡ÎËÚ‡ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->Ô‡ÌÂÎ¸›ÂÏÂÌÚÓ‚ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ÎËÌËˇToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->Í‚‡‰‡ÚToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ÔˇÏÓÛ„ÓÎ¸ÌËÍToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ÍÛ„ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->˝ÎÎËÔÒToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ÏÌÓ„ÓÛ„ÓÎ¸ÌËÍToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->˝ÎÂÏÂÌÚ˚ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ÚÂÍÒÚStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->¯ËÙÚToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->Û‰‡ÎËÚ¸œÓÒÎÂ‰ÌËÈToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->Û‰‡ÎËÚ¸¬ÒÂToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->Î‡ÒÚËÍToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->‚ÓÒÒÚ‡ÌÓ‚ËÚ¸—ÚÂÚÓÂÀ‡ÒÚËÍÓÏToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->‚˚‰ÂÎËÚ¸2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->PÂ‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->Û‰‡ÎËÚ¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->Ï‡¯Ú‡·ËÓ‚‡Ú¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
            this->groupBoxText = (gcnew System::Windows::Forms::GroupBox());
            this->textBoxTx = (gcnew System::Windows::Forms::TextBox());
            this->buttonOkText = (gcnew System::Windows::Forms::Button());
            this->buttonCancelText = (gcnew System::Windows::Forms::Button());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->groupBoxSelect2 = (gcnew System::Windows::Forms::GroupBox());
            this->listViewSelect = (gcnew System::Windows::Forms::ListView());
            this->columnHeaderNum = (gcnew System::Windows::Forms::ColumnHeader());
            this->columnHeaderSh = (gcnew System::Windows::Forms::ColumnHeader());
            this->columnHeaderCol = (gcnew System::Windows::Forms::ColumnHeader());
            this->columnHeaderX0 = (gcnew System::Windows::Forms::ColumnHeader());
            this->columnHeaderY0 = (gcnew System::Windows::Forms::ColumnHeader());
            this->columnHeaderX1 = (gcnew System::Windows::Forms::ColumnHeader());
            this->columnHeaderY1 = (gcnew System::Windows::Forms::ColumnHeader());
            this->buttonCancelSelect2_Click = (gcnew System::Windows::Forms::Button());
            this->buttonOkSelect2_Click = (gcnew System::Windows::Forms::Button());
            this->groupBoxZoom = (gcnew System::Windows::Forms::GroupBox());
            this->radioButtonMinus = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonPlus = (gcnew System::Windows::Forms::RadioButton());
            this->buttonCancelZoom = (gcnew System::Windows::Forms::Button());
            this->buttonOkZoom = (gcnew System::Windows::Forms::Button());
            this->numericUpDownZoom = (gcnew System::Windows::Forms::NumericUpDown());
            this->groupBoxSaveEdit = (gcnew System::Windows::Forms::GroupBox());
            this->buttonCancelSaveEdit = (gcnew System::Windows::Forms::Button());
            this->buttonOkSaveEdit = (gcnew System::Windows::Forms::Button());
            this->groupBoxSelect = (gcnew System::Windows::Forms::GroupBox());
            this->radioButtonZoomSel = (gcnew System::Windows::Forms::RadioButton());
            this->buttonOkSel = (gcnew System::Windows::Forms::Button());
            this->buttonCancelSel = (gcnew System::Windows::Forms::Button());
            this->radioButtonEditSel = (gcnew System::Windows::Forms::RadioButton());
            this->radioButtonDelSel = (gcnew System::Windows::Forms::RadioButton());
            this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
            this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
            this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxGen))->BeginInit();
            this->groupBoxQuadrat->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownQuadrat))->BeginInit();
            this->groupBoxRetangle->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownRetangleW))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownRetangleH))->BeginInit();
            this->groupBox—ircle->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown—ircle))->BeginInit();
            this->groupBoxEllipse->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEllipseW))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEllipseH))->BeginInit();
            this->groupBoxPolygon->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPolygonR))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPolygon))->BeginInit();
            this->groupBoxLineW->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLineW))->BeginInit();
            this->menuStrip1->SuspendLayout();
            this->groupBoxText->SuspendLayout();
            this->groupBoxSelect2->SuspendLayout();
            this->groupBoxZoom->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownZoom))->BeginInit();
            this->groupBoxSaveEdit->SuspendLayout();
            this->groupBoxSelect->SuspendLayout();
            this->SuspendLayout();
            // 
            // pictureBoxGen
            // 
            this->pictureBoxGen->Cursor = System::Windows::Forms::Cursors::Default;
            this->pictureBoxGen->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBoxGen->Location = System::Drawing::Point(0, 30);
            this->pictureBoxGen->Name = L"pictureBoxGen";
            this->pictureBoxGen->Size = System::Drawing::Size(1425, 592);
            this->pictureBoxGen->TabIndex = 2;
            this->pictureBoxGen->TabStop = false;
            this->pictureBoxGen->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GrForm::pictureBoxGen_Paint);
            this->pictureBoxGen->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &GrForm::pictureBoxGen_MouseDown);
            this->pictureBoxGen->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &GrForm::pictureBoxGen_MouseMove);
            this->pictureBoxGen->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &GrForm::pictureBoxGen_MouseUp);
            // 
            // openFileDialog1
            // 
            this->openFileDialog1->FileName = L"openFileDialog1";
            // 
            // groupBoxQuadrat
            // 
            this->groupBoxQuadrat->Controls->Add(this->checkBoxQuadrat);
            this->groupBoxQuadrat->Controls->Add(this->buttonCancelQuadrat);
            this->groupBoxQuadrat->Controls->Add(this->buttonOkQuadrat);
            this->groupBoxQuadrat->Controls->Add(this->numericUpDownQuadrat);
            this->groupBoxQuadrat->Controls->Add(this->radioButtonNumberQuadrat);
            this->groupBoxQuadrat->Controls->Add(this->radioButtonMouseQuadrat);
            this->groupBoxQuadrat->Controls->Add(this->label2);
            this->groupBoxQuadrat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBoxQuadrat->Location = System::Drawing::Point(296, 48);
            this->groupBoxQuadrat->Name = L"groupBoxQuadrat";
            this->groupBoxQuadrat->Size = System::Drawing::Size(261, 198);
            this->groupBoxQuadrat->TabIndex = 4;
            this->groupBoxQuadrat->TabStop = false;
            this->groupBoxQuadrat->Text = L" ‚‡‰‡Ú";
            this->groupBoxQuadrat->Visible = false;
            // 
            // checkBoxQuadrat
            // 
            this->checkBoxQuadrat->AutoSize = true;
            this->checkBoxQuadrat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->checkBoxQuadrat->Location = System::Drawing::Point(114, 74);
            this->checkBoxQuadrat->Name = L"checkBoxQuadrat";
            this->checkBoxQuadrat->Size = System::Drawing::Size(132, 24);
            this->checkBoxQuadrat->TabIndex = 13;
            this->checkBoxQuadrat->Text = L"«‡ÔÓÎÌÂÌÓ";
            this->checkBoxQuadrat->UseVisualStyleBackColor = true;
            // 
            // buttonCancelQuadrat
            // 
            this->buttonCancelQuadrat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonCancelQuadrat->Location = System::Drawing::Point(140, 148);
            this->buttonCancelQuadrat->Name = L"buttonCancelQuadrat";
            this->buttonCancelQuadrat->Size = System::Drawing::Size(115, 33);
            this->buttonCancelQuadrat->TabIndex = 8;
            this->buttonCancelQuadrat->Text = L"«‡Í˚Ú¸";
            this->buttonCancelQuadrat->UseVisualStyleBackColor = true;
            this->buttonCancelQuadrat->Click += gcnew System::EventHandler(this, &GrForm::buttonCancelQuadrat_Click);
            // 
            // buttonOkQuadrat
            // 
            this->buttonOkQuadrat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonOkQuadrat->Location = System::Drawing::Point(3, 148);
            this->buttonOkQuadrat->Name = L"buttonOkQuadrat";
            this->buttonOkQuadrat->Size = System::Drawing::Size(131, 33);
            this->buttonOkQuadrat->TabIndex = 7;
            this->buttonOkQuadrat->Text = L"œËÏÂÌËÚ¸";
            this->buttonOkQuadrat->UseVisualStyleBackColor = true;
            this->buttonOkQuadrat->Click += gcnew System::EventHandler(this, &GrForm::buttonOkQuadrat_Click);
            // 
            // numericUpDownQuadrat
            // 
            this->numericUpDownQuadrat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->numericUpDownQuadrat->Location = System::Drawing::Point(161, 101);
            this->numericUpDownQuadrat->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
            this->numericUpDownQuadrat->Name = L"numericUpDownQuadrat";
            this->numericUpDownQuadrat->Size = System::Drawing::Size(66, 26);
            this->numericUpDownQuadrat->TabIndex = 5;
            // 
            // radioButtonNumberQuadrat
            // 
            this->radioButtonNumberQuadrat->AutoSize = true;
            this->radioButtonNumberQuadrat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->radioButtonNumberQuadrat->Location = System::Drawing::Point(10, 103);
            this->radioButtonNumberQuadrat->Name = L"radioButtonNumberQuadrat";
            this->radioButtonNumberQuadrat->Size = System::Drawing::Size(118, 24);
            this->radioButtonNumberQuadrat->TabIndex = 4;
            this->radioButtonNumberQuadrat->Text = L"÷ËÙ‡ÏË";
            this->radioButtonNumberQuadrat->UseVisualStyleBackColor = true;
            this->radioButtonNumberQuadrat->CheckedChanged += gcnew System::EventHandler(this, &GrForm::radioButtonNumberQuadrat_CheckedChanged);
            // 
            // radioButtonMouseQuadrat
            // 
            this->radioButtonMouseQuadrat->AutoSize = true;
            this->radioButtonMouseQuadrat->Checked = true;
            this->radioButtonMouseQuadrat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->radioButtonMouseQuadrat->Location = System::Drawing::Point(10, 73);
            this->radioButtonMouseQuadrat->Name = L"radioButtonMouseQuadrat";
            this->radioButtonMouseQuadrat->Size = System::Drawing::Size(98, 24);
            this->radioButtonMouseQuadrat->TabIndex = 3;
            this->radioButtonMouseQuadrat->TabStop = true;
            this->radioButtonMouseQuadrat->Text = L"Ã˚¯¸˛";
            this->radioButtonMouseQuadrat->UseVisualStyleBackColor = true;
            this->radioButtonMouseQuadrat->CheckedChanged += gcnew System::EventHandler(this, &GrForm::radioButtonMouseQuadrat_CheckedChanged);
            // 
            // label2
            // 
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(6, 46);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(194, 20);
            this->label2->TabIndex = 0;
            this->label2->Text = L"–‡ÁÏÂ ÛÍ‡Á˚‚‡ÂÏ:";
            // 
            // groupBoxRetangle
            // 
            this->groupBoxRetangle->Controls->Add(this->checkBoxRectangle);
            this->groupBoxRetangle->Controls->Add(this->buttonOkRetangle);
            this->groupBoxRetangle->Controls->Add(this->buttonCancelRetangle);
            this->groupBoxRetangle->Controls->Add(this->label5);
            this->groupBoxRetangle->Controls->Add(this->label4);
            this->groupBoxRetangle->Controls->Add(this->numericUpDownRetangleW);
            this->groupBoxRetangle->Controls->Add(this->numericUpDownRetangleH);
            this->groupBoxRetangle->Controls->Add(this->radioButtonNumberRetangle);
            this->groupBoxRetangle->Controls->Add(this->radioButtonMouseRetangle);
            this->groupBoxRetangle->Controls->Add(this->label3);
            this->groupBoxRetangle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBoxRetangle->Location = System::Drawing::Point(563, 48);
            this->groupBoxRetangle->Name = L"groupBoxRetangle";
            this->groupBoxRetangle->Size = System::Drawing::Size(278, 255);
            this->groupBoxRetangle->TabIndex = 5;
            this->groupBoxRetangle->TabStop = false;
            this->groupBoxRetangle->Text = L"œˇÏÓÛ„ÓÎ¸ÌËÍ";
            this->groupBoxRetangle->Visible = false;
            // 
            // checkBoxRectangle
            // 
            this->checkBoxRectangle->AutoSize = true;
            this->checkBoxRectangle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->checkBoxRectangle->Location = System::Drawing::Point(128, 65);
            this->checkBoxRectangle->Name = L"checkBoxRectangle";
            this->checkBoxRectangle->Size = System::Drawing::Size(132, 24);
            this->checkBoxRectangle->TabIndex = 11;
            this->checkBoxRectangle->Text = L"«‡ÔÓÎÌÂÌÓ";
            this->checkBoxRectangle->UseVisualStyleBackColor = true;
            // 
            // buttonOkRetangle
            // 
            this->buttonOkRetangle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonOkRetangle->Location = System::Drawing::Point(15, 206);
            this->buttonOkRetangle->Name = L"buttonOkRetangle";
            this->buttonOkRetangle->Size = System::Drawing::Size(121, 33);
            this->buttonOkRetangle->TabIndex = 10;
            this->buttonOkRetangle->Text = L"œËÏÂÌËÚ¸";
            this->buttonOkRetangle->UseVisualStyleBackColor = true;
            this->buttonOkRetangle->Click += gcnew System::EventHandler(this, &GrForm::buttonOkRetangle_Click);
            // 
            // buttonCancelRetangle
            // 
            this->buttonCancelRetangle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonCancelRetangle->Location = System::Drawing::Point(139, 206);
            this->buttonCancelRetangle->Name = L"buttonCancelRetangle";
            this->buttonCancelRetangle->Size = System::Drawing::Size(115, 33);
            this->buttonCancelRetangle->TabIndex = 9;
            this->buttonCancelRetangle->Text = L"«‡Í˚Ú¸";
            this->buttonCancelRetangle->UseVisualStyleBackColor = true;
            this->buttonCancelRetangle->Click += gcnew System::EventHandler(this, &GrForm::buttonCancelRetangle_Click);
            // 
            // label5
            // 
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label5->Location = System::Drawing::Point(131, 124);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(110, 23);
            this->label5->TabIndex = 8;
            this->label5->Text = L"ÿËËÌ‡";
            // 
            // label4
            // 
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(7, 124);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(92, 23);
            this->label4->TabIndex = 7;
            this->label4->Text = L"¬˚ÒÓÚ‡";
            // 
            // numericUpDownRetangleW
            // 
            this->numericUpDownRetangleW->Cursor = System::Windows::Forms::Cursors::Default;
            this->numericUpDownRetangleW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->numericUpDownRetangleW->Location = System::Drawing::Point(135, 163);
            this->numericUpDownRetangleW->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
            this->numericUpDownRetangleW->Name = L"numericUpDownRetangleW";
            this->numericUpDownRetangleW->Size = System::Drawing::Size(66, 26);
            this->numericUpDownRetangleW->TabIndex = 6;
            // 
            // numericUpDownRetangleH
            // 
            this->numericUpDownRetangleH->Cursor = System::Windows::Forms::Cursors::Default;
            this->numericUpDownRetangleH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->numericUpDownRetangleH->Location = System::Drawing::Point(21, 163);
            this->numericUpDownRetangleH->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
            this->numericUpDownRetangleH->Name = L"numericUpDownRetangleH";
            this->numericUpDownRetangleH->Size = System::Drawing::Size(66, 26);
            this->numericUpDownRetangleH->TabIndex = 5;
            // 
            // radioButtonNumberRetangle
            // 
            this->radioButtonNumberRetangle->AutoSize = true;
            this->radioButtonNumberRetangle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->radioButtonNumberRetangle->Location = System::Drawing::Point(11, 94);
            this->radioButtonNumberRetangle->Name = L"radioButtonNumberRetangle";
            this->radioButtonNumberRetangle->Size = System::Drawing::Size(118, 24);
            this->radioButtonNumberRetangle->TabIndex = 4;
            this->radioButtonNumberRetangle->Text = L"÷ËÙ‡ÏË";
            this->radioButtonNumberRetangle->UseVisualStyleBackColor = true;
            this->radioButtonNumberRetangle->CheckedChanged += gcnew System::EventHandler(this, &GrForm::radioButtonNumberRetangle_CheckedChanged);
            // 
            // radioButtonMouseRetangle
            // 
            this->radioButtonMouseRetangle->AutoSize = true;
            this->radioButtonMouseRetangle->Checked = true;
            this->radioButtonMouseRetangle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->radioButtonMouseRetangle->Location = System::Drawing::Point(11, 64);
            this->radioButtonMouseRetangle->Name = L"radioButtonMouseRetangle";
            this->radioButtonMouseRetangle->Size = System::Drawing::Size(98, 24);
            this->radioButtonMouseRetangle->TabIndex = 3;
            this->radioButtonMouseRetangle->TabStop = true;
            this->radioButtonMouseRetangle->Text = L"Ã˚¯¸˛";
            this->radioButtonMouseRetangle->UseVisualStyleBackColor = true;
            this->radioButtonMouseRetangle->CheckedChanged += gcnew System::EventHandler(this, &GrForm::radioButtonMouseRetangle_CheckedChanged);
            // 
            // label3
            // 
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(17, 37);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(194, 20);
            this->label3->TabIndex = 0;
            this->label3->Text = L"–‡ÁÏÂ ÛÍ‡Á˚‚‡ÂÏ:";
            // 
            // groupBox—ircle
            // 
            this->groupBox—ircle->Controls->Add(this->checkBoxCircle);
            this->groupBox—ircle->Controls->Add(this->buttonCacelCircle);
            this->groupBox—ircle->Controls->Add(this->buttonOk—ircle);
            this->groupBox—ircle->Controls->Add(this->numericUpDown—ircle);
            this->groupBox—ircle->Controls->Add(this->radioButtonNumber—ircle);
            this->groupBox—ircle->Controls->Add(this->radioButtonMouse—ircle);
            this->groupBox—ircle->Controls->Add(this->label6);
            this->groupBox—ircle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBox—ircle->Location = System::Drawing::Point(864, 61);
            this->groupBox—ircle->Name = L"groupBox—ircle";
            this->groupBox—ircle->Size = System::Drawing::Size(262, 198);
            this->groupBox—ircle->TabIndex = 6;
            this->groupBox—ircle->TabStop = false;
            this->groupBox—ircle->Text = L" Û„";
            this->groupBox—ircle->Visible = false;
            // 
            // checkBoxCircle
            // 
            this->checkBoxCircle->AutoSize = true;
            this->checkBoxCircle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->checkBoxCircle->Location = System::Drawing::Point(114, 74);
            this->checkBoxCircle->Name = L"checkBoxCircle";
            this->checkBoxCircle->Size = System::Drawing::Size(132, 24);
            this->checkBoxCircle->TabIndex = 13;
            this->checkBoxCircle->Text = L"«‡ÔÓÎÌÂÌÓ";
            this->checkBoxCircle->UseVisualStyleBackColor = true;
            // 
            // buttonCacelCircle
            // 
            this->buttonCacelCircle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonCacelCircle->Location = System::Drawing::Point(141, 148);
            this->buttonCacelCircle->Name = L"buttonCacelCircle";
            this->buttonCacelCircle->Size = System::Drawing::Size(115, 33);
            this->buttonCacelCircle->TabIndex = 8;
            this->buttonCacelCircle->Text = L"«‡Í˚Ú¸";
            this->buttonCacelCircle->UseVisualStyleBackColor = true;
            this->buttonCacelCircle->Click += gcnew System::EventHandler(this, &GrForm::buttonCacelCircle_Click);
            // 
            // buttonOk—ircle
            // 
            this->buttonOk—ircle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonOk—ircle->Location = System::Drawing::Point(3, 148);
            this->buttonOk—ircle->Name = L"buttonOk—ircle";
            this->buttonOk—ircle->Size = System::Drawing::Size(132, 33);
            this->buttonOk—ircle->TabIndex = 7;
            this->buttonOk—ircle->Text = L"œËÏÂÌËÚ¸";
            this->buttonOk—ircle->UseVisualStyleBackColor = true;
            this->buttonOk—ircle->Click += gcnew System::EventHandler(this, &GrForm::buttonOk—ircle_Click);
            // 
            // numericUpDown—ircle
            // 
            this->numericUpDown—ircle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->numericUpDown—ircle->Location = System::Drawing::Point(134, 101);
            this->numericUpDown—ircle->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
            this->numericUpDown—ircle->Name = L"numericUpDown—ircle";
            this->numericUpDown—ircle->Size = System::Drawing::Size(66, 26);
            this->numericUpDown—ircle->TabIndex = 5;
            // 
            // radioButtonNumber—ircle
            // 
            this->radioButtonNumber—ircle->AutoSize = true;
            this->radioButtonNumber—ircle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->radioButtonNumber—ircle->Location = System::Drawing::Point(10, 103);
            this->radioButtonNumber—ircle->Name = L"radioButtonNumber—ircle";
            this->radioButtonNumber—ircle->Size = System::Drawing::Size(118, 24);
            this->radioButtonNumber—ircle->TabIndex = 4;
            this->radioButtonNumber—ircle->Text = L"÷ËÙ‡ÏË";
            this->radioButtonNumber—ircle->UseVisualStyleBackColor = true;
            this->radioButtonNumber—ircle->CheckedChanged += gcnew System::EventHandler(this, &GrForm::radioButtonNumber—ircle_CheckedChanged);
            // 
            // radioButtonMouse—ircle
            // 
            this->radioButtonMouse—ircle->AutoSize = true;
            this->radioButtonMouse—ircle->Checked = true;
            this->radioButtonMouse—ircle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->radioButtonMouse—ircle->Location = System::Drawing::Point(10, 73);
            this->radioButtonMouse—ircle->Name = L"radioButtonMouse—ircle";
            this->radioButtonMouse—ircle->Size = System::Drawing::Size(98, 24);
            this->radioButtonMouse—ircle->TabIndex = 3;
            this->radioButtonMouse—ircle->TabStop = true;
            this->radioButtonMouse—ircle->Text = L"Ã˚¯¸˛";
            this->radioButtonMouse—ircle->UseVisualStyleBackColor = true;
            this->radioButtonMouse—ircle->CheckedChanged += gcnew System::EventHandler(this, &GrForm::radioButtonMouse—ircle_CheckedChanged);
            // 
            // label6
            // 
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label6->Location = System::Drawing::Point(6, 45);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(217, 20);
            this->label6->TabIndex = 0;
            this->label6->Text = L"ƒË‡ÏÂÚ ÛÍ‡Á˚‚‡ÂÏ:";
            // 
            // groupBoxEllipse
            // 
            this->groupBoxEllipse->Controls->Add(this->checkBoxEllipse);
            this->groupBoxEllipse->Controls->Add(this->buttonOkEllipse);
            this->groupBoxEllipse->Controls->Add(this->buttonCanselEllipse);
            this->groupBoxEllipse->Controls->Add(this->label7);
            this->groupBoxEllipse->Controls->Add(this->label8);
            this->groupBoxEllipse->Controls->Add(this->numericUpDownEllipseW);
            this->groupBoxEllipse->Controls->Add(this->numericUpDownEllipseH);
            this->groupBoxEllipse->Controls->Add(this->radioButtonNumberEllipse);
            this->groupBoxEllipse->Controls->Add(this->radioButtonMouseEllipse);
            this->groupBoxEllipse->Controls->Add(this->label9);
            this->groupBoxEllipse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBoxEllipse->Location = System::Drawing::Point(1132, 33);
            this->groupBoxEllipse->Name = L"groupBoxEllipse";
            this->groupBoxEllipse->Size = System::Drawing::Size(260, 255);
            this->groupBoxEllipse->TabIndex = 7;
            this->groupBoxEllipse->TabStop = false;
            this->groupBoxEllipse->Text = L"›ÎÎËÔÒ";
            this->groupBoxEllipse->Visible = false;
            // 
            // checkBoxEllipse
            // 
            this->checkBoxEllipse->AutoSize = true;
            this->checkBoxEllipse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->checkBoxEllipse->Location = System::Drawing::Point(122, 62);
            this->checkBoxEllipse->Name = L"checkBoxEllipse";
            this->checkBoxEllipse->Size = System::Drawing::Size(132, 24);
            this->checkBoxEllipse->TabIndex = 12;
            this->checkBoxEllipse->Text = L"«‡ÔÓÎÌÂÌÓ";
            this->checkBoxEllipse->UseVisualStyleBackColor = true;
            // 
            // buttonOkEllipse
            // 
            this->buttonOkEllipse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonOkEllipse->Location = System::Drawing::Point(6, 206);
            this->buttonOkEllipse->Name = L"buttonOkEllipse";
            this->buttonOkEllipse->Size = System::Drawing::Size(127, 33);
            this->buttonOkEllipse->TabIndex = 10;
            this->buttonOkEllipse->Text = L"œËÏÂÌËÚ¸";
            this->buttonOkEllipse->UseVisualStyleBackColor = true;
            this->buttonOkEllipse->Click += gcnew System::EventHandler(this, &GrForm::buttonOkEllipse_Click);
            // 
            // buttonCanselEllipse
            // 
            this->buttonCanselEllipse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonCanselEllipse->Location = System::Drawing::Point(139, 206);
            this->buttonCanselEllipse->Name = L"buttonCanselEllipse";
            this->buttonCanselEllipse->Size = System::Drawing::Size(115, 33);
            this->buttonCanselEllipse->TabIndex = 9;
            this->buttonCanselEllipse->Text = L"«‡Í˚Ú¸";
            this->buttonCanselEllipse->UseVisualStyleBackColor = true;
            this->buttonCanselEllipse->Click += gcnew System::EventHandler(this, &GrForm::buttonCanselEllipse_Click);
            // 
            // label7
            // 
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label7->Location = System::Drawing::Point(131, 124);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(80, 23);
            this->label7->TabIndex = 8;
            this->label7->Text = L"ÿËËÌ‡";
            // 
            // label8
            // 
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label8->Location = System::Drawing::Point(7, 124);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(97, 23);
            this->label8->TabIndex = 7;
            this->label8->Text = L"¬˚ÒÓÚ‡";
            // 
            // numericUpDownEllipseW
            // 
            this->numericUpDownEllipseW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->numericUpDownEllipseW->Location = System::Drawing::Point(135, 163);
            this->numericUpDownEllipseW->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
            this->numericUpDownEllipseW->Name = L"numericUpDownEllipseW";
            this->numericUpDownEllipseW->Size = System::Drawing::Size(66, 26);
            this->numericUpDownEllipseW->TabIndex = 6;
            // 
            // numericUpDownEllipseH
            // 
            this->numericUpDownEllipseH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->numericUpDownEllipseH->Location = System::Drawing::Point(21, 163);
            this->numericUpDownEllipseH->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
            this->numericUpDownEllipseH->Name = L"numericUpDownEllipseH";
            this->numericUpDownEllipseH->Size = System::Drawing::Size(66, 26);
            this->numericUpDownEllipseH->TabIndex = 5;
            // 
            // radioButtonNumberEllipse
            // 
            this->radioButtonNumberEllipse->AutoSize = true;
            this->radioButtonNumberEllipse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->radioButtonNumberEllipse->Location = System::Drawing::Point(6, 92);
            this->radioButtonNumberEllipse->Name = L"radioButtonNumberEllipse";
            this->radioButtonNumberEllipse->Size = System::Drawing::Size(118, 24);
            this->radioButtonNumberEllipse->TabIndex = 4;
            this->radioButtonNumberEllipse->Text = L"÷ËÙ‡ÏË";
            this->radioButtonNumberEllipse->UseVisualStyleBackColor = true;
            this->radioButtonNumberEllipse->CheckedChanged += gcnew System::EventHandler(this, &GrForm::radioButtonNumberEllipse_CheckedChanged);
            // 
            // radioButtonMouseEllipse
            // 
            this->radioButtonMouseEllipse->AllowDrop = true;
            this->radioButtonMouseEllipse->AutoSize = true;
            this->radioButtonMouseEllipse->Checked = true;
            this->radioButtonMouseEllipse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->radioButtonMouseEllipse->Location = System::Drawing::Point(10, 62);
            this->radioButtonMouseEllipse->Name = L"radioButtonMouseEllipse";
            this->radioButtonMouseEllipse->Size = System::Drawing::Size(98, 24);
            this->radioButtonMouseEllipse->TabIndex = 3;
            this->radioButtonMouseEllipse->TabStop = true;
            this->radioButtonMouseEllipse->Text = L"Ã˚¯¸˛";
            this->radioButtonMouseEllipse->UseVisualStyleBackColor = true;
            this->radioButtonMouseEllipse->CheckedChanged += gcnew System::EventHandler(this, &GrForm::radioButtonMouseEllipse_CheckedChanged);
            // 
            // label9
            // 
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label9->Location = System::Drawing::Point(17, 37);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(194, 20);
            this->label9->TabIndex = 0;
            this->label9->Text = L"–‡ÁÏÂ ÛÍ‡Á˚‚‡ÂÏ:";
            // 
            // groupBoxPolygon
            // 
            this->groupBoxPolygon->Controls->Add(this->radioButtonNumberPolygon);
            this->groupBoxPolygon->Controls->Add(this->radioButtonMousePolygon);
            this->groupBoxPolygon->Controls->Add(this->label15);
            this->groupBoxPolygon->Controls->Add(this->numericUpDownPolygonR);
            this->groupBoxPolygon->Controls->Add(this->checkBoxPolygon);
            this->groupBoxPolygon->Controls->Add(this->buttonCancelPolygon);
            this->groupBoxPolygon->Controls->Add(this->buttonOkPolygon);
            this->groupBoxPolygon->Controls->Add(this->numericUpDownPolygon);
            this->groupBoxPolygon->Controls->Add(this->label10);
            this->groupBoxPolygon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBoxPolygon->Location = System::Drawing::Point(16, 381);
            this->groupBoxPolygon->Name = L"groupBoxPolygon";
            this->groupBoxPolygon->Size = System::Drawing::Size(319, 210);
            this->groupBoxPolygon->TabIndex = 8;
            this->groupBoxPolygon->TabStop = false;
            this->groupBoxPolygon->Text = L"ÃÌÓ„ÓÛ„ÓÎ¸ÌËÍ";
            this->groupBoxPolygon->Visible = false;
            // 
            // radioButtonNumberPolygon
            // 
            this->radioButtonNumberPolygon->AutoSize = true;
            this->radioButtonNumberPolygon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->radioButtonNumberPolygon->Location = System::Drawing::Point(4, 59);
            this->radioButtonNumberPolygon->Name = L"radioButtonNumberPolygon";
            this->radioButtonNumberPolygon->Size = System::Drawing::Size(118, 24);
            this->radioButtonNumberPolygon->TabIndex = 20;
            this->radioButtonNumberPolygon->Text = L"÷ËÙ‡ÏË";
            this->radioButtonNumberPolygon->UseVisualStyleBackColor = true;
            this->radioButtonNumberPolygon->CheckedChanged += gcnew System::EventHandler(this, &GrForm::radioButtonNumberPolygon_CheckedChanged);
            // 
            // radioButtonMousePolygon
            // 
            this->radioButtonMousePolygon->AllowDrop = true;
            this->radioButtonMousePolygon->AutoSize = true;
            this->radioButtonMousePolygon->Checked = true;
            this->radioButtonMousePolygon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->radioButtonMousePolygon->Location = System::Drawing::Point(8, 32);
            this->radioButtonMousePolygon->Name = L"radioButtonMousePolygon";
            this->radioButtonMousePolygon->Size = System::Drawing::Size(98, 24);
            this->radioButtonMousePolygon->TabIndex = 19;
            this->radioButtonMousePolygon->TabStop = true;
            this->radioButtonMousePolygon->Text = L"Ã˚¯¸˛";
            this->radioButtonMousePolygon->UseVisualStyleBackColor = true;
            this->radioButtonMousePolygon->CheckedChanged += gcnew System::EventHandler(this, &GrForm::radioButtonMousePolygon_CheckedChanged);
            // 
            // label15
            // 
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label15->Location = System::Drawing::Point(4, 124);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(201, 23);
            this->label15->TabIndex = 16;
            this->label15->Text = L"–‡‰ËÛÒ:";
            // 
            // numericUpDownPolygonR
            // 
            this->numericUpDownPolygonR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->numericUpDownPolygonR->Location = System::Drawing::Point(247, 125);
            this->numericUpDownPolygonR->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
            this->numericUpDownPolygonR->Name = L"numericUpDownPolygonR";
            this->numericUpDownPolygonR->Size = System::Drawing::Size(66, 26);
            this->numericUpDownPolygonR->TabIndex = 15;
            // 
            // checkBoxPolygon
            // 
            this->checkBoxPolygon->AutoSize = true;
            this->checkBoxPolygon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->checkBoxPolygon->Location = System::Drawing::Point(162, 50);
            this->checkBoxPolygon->Name = L"checkBoxPolygon";
            this->checkBoxPolygon->Size = System::Drawing::Size(132, 24);
            this->checkBoxPolygon->TabIndex = 14;
            this->checkBoxPolygon->Text = L"«‡ÔÓÎÌÂÌÓ";
            this->checkBoxPolygon->UseVisualStyleBackColor = true;
            // 
            // buttonCancelPolygon
            // 
            this->buttonCancelPolygon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonCancelPolygon->Location = System::Drawing::Point(140, 166);
            this->buttonCancelPolygon->Name = L"buttonCancelPolygon";
            this->buttonCancelPolygon->Size = System::Drawing::Size(138, 33);
            this->buttonCancelPolygon->TabIndex = 7;
            this->buttonCancelPolygon->Text = L"«‡Í˚Ú¸";
            this->buttonCancelPolygon->UseVisualStyleBackColor = true;
            this->buttonCancelPolygon->Click += gcnew System::EventHandler(this, &GrForm::buttonCancelPolygone_Click);
            // 
            // buttonOkPolygon
            // 
            this->buttonOkPolygon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonOkPolygon->Location = System::Drawing::Point(6, 166);
            this->buttonOkPolygon->Name = L"buttonOkPolygon";
            this->buttonOkPolygon->Size = System::Drawing::Size(128, 33);
            this->buttonOkPolygon->TabIndex = 6;
            this->buttonOkPolygon->Text = L"œËÏÂÌËÚ¸";
            this->buttonOkPolygon->UseVisualStyleBackColor = true;
            this->buttonOkPolygon->Click += gcnew System::EventHandler(this, &GrForm::buttonOkPolygone_Click);
            // 
            // numericUpDownPolygon
            // 
            this->numericUpDownPolygon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->numericUpDownPolygon->Location = System::Drawing::Point(247, 88);
            this->numericUpDownPolygon->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
            this->numericUpDownPolygon->Name = L"numericUpDownPolygon";
            this->numericUpDownPolygon->Size = System::Drawing::Size(66, 26);
            this->numericUpDownPolygon->TabIndex = 5;
            // 
            // label10
            // 
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label10->Location = System::Drawing::Point(4, 91);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(237, 23);
            this->label10->TabIndex = 0;
            this->label10->Text = L" ÓÎË˜ÂÒÚ‚Ó ‚Â¯ËÌ:";
            // 
            // groupBoxLineW
            // 
            this->groupBoxLineW->Controls->Add(this->buttonCancelLineW);
            this->groupBoxLineW->Controls->Add(this->buttonOkLineW);
            this->groupBoxLineW->Controls->Add(this->numericUpDownLineW);
            this->groupBoxLineW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBoxLineW->Location = System::Drawing::Point(16, 34);
            this->groupBoxLineW->Name = L"groupBoxLineW";
            this->groupBoxLineW->Size = System::Drawing::Size(263, 132);
            this->groupBoxLineW->TabIndex = 10;
            this->groupBoxLineW->TabStop = false;
            this->groupBoxLineW->Text = L"“ÓÎ˘ËÌ‡ ÎËÌËË";
            this->groupBoxLineW->Visible = false;
            // 
            // buttonCancelLineW
            // 
            this->buttonCancelLineW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonCancelLineW->Location = System::Drawing::Point(138, 85);
            this->buttonCancelLineW->Name = L"buttonCancelLineW";
            this->buttonCancelLineW->Size = System::Drawing::Size(115, 33);
            this->buttonCancelLineW->TabIndex = 7;
            this->buttonCancelLineW->Text = L"«‡Í˚Ú¸";
            this->buttonCancelLineW->UseVisualStyleBackColor = true;
            this->buttonCancelLineW->Click += gcnew System::EventHandler(this, &GrForm::buttonCancelLineW_Click);
            // 
            // buttonOkLineW
            // 
            this->buttonOkLineW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonOkLineW->Location = System::Drawing::Point(-1, 85);
            this->buttonOkLineW->Name = L"buttonOkLineW";
            this->buttonOkLineW->Size = System::Drawing::Size(133, 33);
            this->buttonOkLineW->TabIndex = 6;
            this->buttonOkLineW->Text = L"œËÏÂÌËÚ¸";
            this->buttonOkLineW->UseVisualStyleBackColor = true;
            this->buttonOkLineW->Click += gcnew System::EventHandler(this, &GrForm::buttonOkLineW_Click);
            // 
            // numericUpDownLineW
            // 
            this->numericUpDownLineW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->numericUpDownLineW->Location = System::Drawing::Point(62, 37);
            this->numericUpDownLineW->Name = L"numericUpDownLineW";
            this->numericUpDownLineW->Size = System::Drawing::Size(66, 26);
            this->numericUpDownLineW->TabIndex = 5;
            // 
            // printDialog1
            // 
            this->printDialog1->UseEXDialog = true;
            // 
            // Ù‡ÈÎToolStripMenuItem
            // 
            this->Ù‡ÈÎToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
                this->ÓÚÍ˚Ú¸ToolStripMenuItem,
                    this->ÒÓı‡ÌËÚ¸ToolStripMenuItem, this->‚˚ıÓ‰ToolStripMenuItem, this->‚˚ıÓ‰ToolStripMenuItem1
            });
            this->Ù‡ÈÎToolStripMenuItem->Name = L"Ù‡ÈÎToolStripMenuItem";
            this->Ù‡ÈÎToolStripMenuItem->Size = System::Drawing::Size(59, 24);
            this->Ù‡ÈÎToolStripMenuItem->Text = L"‘‡ÈÎ";
            // 
            // ÓÚÍ˚Ú¸ToolStripMenuItem
            // 
            this->ÓÚÍ˚Ú¸ToolStripMenuItem->Name = L"ÓÚÍ˚Ú¸ToolStripMenuItem";
            this->ÓÚÍ˚Ú¸ToolStripMenuItem->Size = System::Drawing::Size(166, 26);
            this->ÓÚÍ˚Ú¸ToolStripMenuItem->Text = L"ŒÚÍ˚Ú¸";
            this->ÓÚÍ˚Ú¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GrForm::ÓÚÍ˚Ú¸ToolStripMenuItem_Click);
            // 
            // ÒÓı‡ÌËÚ¸ToolStripMenuItem
            // 
            this->ÒÓı‡ÌËÚ¸ToolStripMenuItem->Name = L"ÒÓı‡ÌËÚ¸ToolStripMenuItem";
            this->ÒÓı‡ÌËÚ¸ToolStripMenuItem->Size = System::Drawing::Size(166, 26);
            this->ÒÓı‡ÌËÚ¸ToolStripMenuItem->Text = L"—Óı‡ÌËÚ¸";
            this->ÒÓı‡ÌËÚ¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GrForm::ÒÓı‡ÌËÚ¸ToolStripMenuItem_Click);
            // 
            // ‚˚ıÓ‰ToolStripMenuItem
            // 
            this->‚˚ıÓ‰ToolStripMenuItem->Name = L"‚˚ıÓ‰ToolStripMenuItem";
            this->‚˚ıÓ‰ToolStripMenuItem->Size = System::Drawing::Size(166, 26);
            this->‚˚ıÓ‰ToolStripMenuItem->Text = L"œÂ˜‡Ú¸";
            this->‚˚ıÓ‰ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GrForm::ÔÂ˜‡Ú¸ToolStripMenuItem_Click);
            // 
            // ‚˚ıÓ‰ToolStripMenuItem1
            // 
            this->‚˚ıÓ‰ToolStripMenuItem1->Name = L"‚˚ıÓ‰ToolStripMenuItem1";
            this->‚˚ıÓ‰ToolStripMenuItem1->Size = System::Drawing::Size(166, 26);
            this->‚˚ıÓ‰ToolStripMenuItem1->Text = L"¬˚ıÓ‰";
            this->‚˚ıÓ‰ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &GrForm::‚˚ıÓ‰ToolStripMenuItem_Click);
            // 
            // ‚Ë‰ToolStripMenuItem
            // 
            this->‚Ë‰ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->ÚÓÎ˘ËÌ‡ÀËÌËÈToolStripMenuItem,
                    this->Ô‡ÎËÚ‡ToolStripMenuItem
            });
            this->‚Ë‰ToolStripMenuItem->Name = L"‚Ë‰ToolStripMenuItem";
            this->‚Ë‰ToolStripMenuItem->Size = System::Drawing::Size(49, 24);
            this->‚Ë‰ToolStripMenuItem->Text = L"¬Ë‰";
            // 
            // ÚÓÎ˘ËÌ‡ÀËÌËÈToolStripMenuItem
            // 
            this->ÚÓÎ˘ËÌ‡ÀËÌËÈToolStripMenuItem->Name = L"ÚÓÎ˘ËÌ‡ÀËÌËÈToolStripMenuItem";
            this->ÚÓÎ˘ËÌ‡ÀËÌËÈToolStripMenuItem->Size = System::Drawing::Size(203, 26);
            this->ÚÓÎ˘ËÌ‡ÀËÌËÈToolStripMenuItem->Text = L"“ÓÎ˘ËÌ‡ ÎËÌËÈ";
            this->ÚÓÎ˘ËÌ‡ÀËÌËÈToolStripMenuItem->Click += gcnew System::EventHandler(this, &GrForm::ÚÓÎ˘ËÌ‡ÀËÌËÈToolStripMenuItem_Click);
            // 
            // Ô‡ÎËÚ‡ToolStripMenuItem
            // 
            this->Ô‡ÎËÚ‡ToolStripMenuItem->Name = L"Ô‡ÎËÚ‡ToolStripMenuItem";
            this->Ô‡ÎËÚ‡ToolStripMenuItem->Size = System::Drawing::Size(203, 26);
            this->Ô‡ÎËÚ‡ToolStripMenuItem->Text = L"œ‡ÎËÚ‡";
            this->Ô‡ÎËÚ‡ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GrForm::Ô‡ÎËÚ‡ToolStripMenuItem_Click);
            // 
            // Ô‡ÌÂÎ¸›ÂÏÂÌÚÓ‚ToolStripMenuItem
            // 
            this->Ô‡ÌÂÎ¸›ÂÏÂÌÚÓ‚ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
                this->ÎËÌËˇToolStripMenuItem,
                    this->Í‚‡‰‡ÚToolStripMenuItem, this->ÔˇÏÓÛ„ÓÎ¸ÌËÍToolStripMenuItem, this->ÍÛ„ToolStripMenuItem, this->˝ÎÎËÔÒToolStripMenuItem,
                    this->ÏÌÓ„ÓÛ„ÓÎ¸ÌËÍToolStripMenuItem
            });
            this->Ô‡ÌÂÎ¸›ÂÏÂÌÚÓ‚ToolStripMenuItem->Name = L"Ô‡ÌÂÎ¸›ÂÏÂÌÚÓ‚ToolStripMenuItem";
            this->Ô‡ÌÂÎ¸›ÂÏÂÌÚÓ‚ToolStripMenuItem->Size = System::Drawing::Size(76, 24);
            this->Ô‡ÌÂÎ¸›ÂÏÂÌÚÓ‚ToolStripMenuItem->Text = L"‘Ë„Û˚";
            // 
            // ÎËÌËˇToolStripMenuItem
            // 
            this->ÎËÌËˇToolStripMenuItem->Name = L"ÎËÌËˇToolStripMenuItem";
            this->ÎËÌËˇToolStripMenuItem->Size = System::Drawing::Size(203, 26);
            this->ÎËÌËˇToolStripMenuItem->Text = L"ÀËÌËˇ";
            this->ÎËÌËˇToolStripMenuItem->Click += gcnew System::EventHandler(this, &GrForm::ÎËÌËˇToolStripMenuItem_Click);
            // 
            // Í‚‡‰‡ÚToolStripMenuItem
            // 
            this->Í‚‡‰‡ÚToolStripMenuItem->Name = L"Í‚‡‰‡ÚToolStripMenuItem";
            this->Í‚‡‰‡ÚToolStripMenuItem->Size = System::Drawing::Size(203, 26);
            this->Í‚‡‰‡ÚToolStripMenuItem->Text = L" ‚‡‰‡Ú";
            this->Í‚‡‰‡ÚToolStripMenuItem->Click += gcnew System::EventHandler(this, &GrForm::Í‚‡‰‡ÚToolStripMenuItem_Click);
            // 
            // ÔˇÏÓÛ„ÓÎ¸ÌËÍToolStripMenuItem
            // 
            this->ÔˇÏÓÛ„ÓÎ¸ÌËÍToolStripMenuItem->Name = L"ÔˇÏÓÛ„ÓÎ¸ÌËÍToolStripMenuItem";
            this->ÔˇÏÓÛ„ÓÎ¸ÌËÍToolStripMenuItem->Size = System::Drawing::Size(203, 26);
            this->ÔˇÏÓÛ„ÓÎ¸ÌËÍToolStripMenuItem->Text = L"œˇÏÓÛ„ÓÎ¸ÌËÍ";
            this->ÔˇÏÓÛ„ÓÎ¸ÌËÍToolStripMenuItem->Click += gcnew System::EventHandler(this, &GrForm::ÔˇÏÓÛ„ÓÎ¸ÌËÍToolStripMenuItem_Click);
            // 
            // ÍÛ„ToolStripMenuItem
            // 
            this->ÍÛ„ToolStripMenuItem->Name = L"ÍÛ„ToolStripMenuItem";
            this->ÍÛ„ToolStripMenuItem->Size = System::Drawing::Size(203, 26);
            this->ÍÛ„ToolStripMenuItem->Text = L" Û„";
            this->ÍÛ„ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GrForm::ÍÛ„ToolStripMenuItem_Click);
            // 
            // ˝ÎÎËÔÒToolStripMenuItem
            // 
            this->˝ÎÎËÔÒToolStripMenuItem->Name = L"˝ÎÎËÔÒToolStripMenuItem";
            this->˝ÎÎËÔÒToolStripMenuItem->Size = System::Drawing::Size(203, 26);
            this->˝ÎÎËÔÒToolStripMenuItem->Text = L"›ÎÎËÔÒ";
            this->˝ÎÎËÔÒToolStripMenuItem->Click += gcnew System::EventHandler(this, &GrForm::˝ÎÎËÔÒToolStripMenuItem_Click);
            // 
            // ÏÌÓ„ÓÛ„ÓÎ¸ÌËÍToolStripMenuItem
            // 
            this->ÏÌÓ„ÓÛ„ÓÎ¸ÌËÍToolStripMenuItem->Name = L"ÏÌÓ„ÓÛ„ÓÎ¸ÌËÍToolStripMenuItem";
            this->ÏÌÓ„ÓÛ„ÓÎ¸ÌËÍToolStripMenuItem->Size = System::Drawing::Size(203, 26);
            this->ÏÌÓ„ÓÛ„ÓÎ¸ÌËÍToolStripMenuItem->Text = L"ÃÌÓ„ÓÛ„ÓÎ¸ÌËÍ";
            this->ÏÌÓ„ÓÛ„ÓÎ¸ÌËÍToolStripMenuItem->Click += gcnew System::EventHandler(this, &GrForm::ÏÌÓ„ÓÛ„ÓÎ¸ÌËÍToolStripMenuItem_Click);
            // 
            // ˝ÎÂÏÂÌÚ˚ToolStripMenuItem
            // 
            this->˝ÎÂÏÂÌÚ˚ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->ÚÂÍÒÚStripMenuItem,
                    this->¯ËÙÚToolStripMenuItem1
            });
            this->˝ÎÂÏÂÌÚ˚ToolStripMenuItem->Name = L"˝ÎÂÏÂÌÚ˚ToolStripMenuItem";
            this->˝ÎÂÏÂÌÚ˚ToolStripMenuItem->Size = System::Drawing::Size(59, 24);
            this->˝ÎÂÏÂÌÚ˚ToolStripMenuItem->Text = L"“ÂÍÒÚ";
            // 
            // ÚÂÍÒÚStripMenuItem
            // 
            this->ÚÂÍÒÚStripMenuItem->Name = L"ÚÂÍÒÚStripMenuItem";
            this->ÚÂÍÒÚStripMenuItem->Size = System::Drawing::Size(172, 26);
            this->ÚÂÍÒÚStripMenuItem->Text = L"¬‚Ó‰ ÚÂÍÒÚ‡";
            this->ÚÂÍÒÚStripMenuItem->Click += gcnew System::EventHandler(this, &GrForm::ÚÂÍÒÚStripMenuItem_Click);
            // 
            // ¯ËÙÚToolStripMenuItem1
            // 
            this->¯ËÙÚToolStripMenuItem1->Name = L"¯ËÙÚToolStripMenuItem1";
            this->¯ËÙÚToolStripMenuItem1->Size = System::Drawing::Size(172, 26);
            this->¯ËÙÚToolStripMenuItem1->Text = L"ÿËÙÚ";
            this->¯ËÙÚToolStripMenuItem1->Click += gcnew System::EventHandler(this, &GrForm::¯ËÙÚToolStripMenuItem1_Click);
            // 
            // toolStripMenuItem2
            // 
            this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
                this->Û‰‡ÎËÚ¸œÓÒÎÂ‰ÌËÈToolStripMenuItem,
                    this->Û‰‡ÎËÚ¸¬ÒÂToolStripMenuItem, this->Î‡ÒÚËÍToolStripMenuItem, this->‚ÓÒÒÚ‡ÌÓ‚ËÚ¸—ÚÂÚÓÂÀ‡ÒÚËÍÓÏToolStripMenuItem, this->‚˚‰ÂÎËÚ¸2ToolStripMenuItem,
                    this->PÂ‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem, this->Û‰‡ÎËÚ¸ToolStripMenuItem, this->Ï‡¯Ú‡·ËÓ‚‡Ú¸ToolStripMenuItem
            });
            this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
            this->toolStripMenuItem2->Size = System::Drawing::Size(88, 24);
            this->toolStripMenuItem2->Text = L"ƒÂÈÒÚ‚Ëˇ";
            // 
            // Û‰‡ÎËÚ¸œÓÒÎÂ‰ÌËÈToolStripMenuItem
            // 
            this->Û‰‡ÎËÚ¸œÓÒÎÂ‰ÌËÈToolStripMenuItem->Name = L"Û‰‡ÎËÚ¸œÓÒÎÂ‰ÌËÈToolStripMenuItem";
            this->Û‰‡ÎËÚ¸œÓÒÎÂ‰ÌËÈToolStripMenuItem->Size = System::Drawing::Size(313, 26);
            this->Û‰‡ÎËÚ¸œÓÒÎÂ‰ÌËÈToolStripMenuItem->Text = L"”‰‡ÎËÚ¸ ÔÓÒÎÂ‰ÌËÈ";
            this->Û‰‡ÎËÚ¸œÓÒÎÂ‰ÌËÈToolStripMenuItem->Click += gcnew System::EventHandler(this, &GrForm::Û‰‡ÎËÚ¸œÓÒÎÂ‰ÌËÈToolStripMenuItem_Click);
            // 
            // Û‰‡ÎËÚ¸¬ÒÂToolStripMenuItem
            // 
            this->Û‰‡ÎËÚ¸¬ÒÂToolStripMenuItem->Name = L"Û‰‡ÎËÚ¸¬ÒÂToolStripMenuItem";
            this->Û‰‡ÎËÚ¸¬ÒÂToolStripMenuItem->Size = System::Drawing::Size(313, 26);
            this->Û‰‡ÎËÚ¸¬ÒÂToolStripMenuItem->Text = L"”‰‡ÎËÚ¸ ‚ÒÂ";
            this->Û‰‡ÎËÚ¸¬ÒÂToolStripMenuItem->Click += gcnew System::EventHandler(this, &GrForm::Û‰‡ÎËÚ¸¬ÒÂToolStripMenuItem_Click);
            // 
            // Î‡ÒÚËÍToolStripMenuItem
            // 
            this->Î‡ÒÚËÍToolStripMenuItem->Name = L"Î‡ÒÚËÍToolStripMenuItem";
            this->Î‡ÒÚËÍToolStripMenuItem->Size = System::Drawing::Size(313, 26);
            this->Î‡ÒÚËÍToolStripMenuItem->Text = L"À‡ÒÚËÍ";
            this->Î‡ÒÚËÍToolStripMenuItem->Click += gcnew System::EventHandler(this, &GrForm::Î‡ÒÚËÍToolStripMenuItem_Click);
            // 
            // ‚ÓÒÒÚ‡ÌÓ‚ËÚ¸—ÚÂÚÓÂÀ‡ÒÚËÍÓÏToolStripMenuItem
            // 
            this->‚ÓÒÒÚ‡ÌÓ‚ËÚ¸—ÚÂÚÓÂÀ‡ÒÚËÍÓÏToolStripMenuItem->Name = L"‚ÓÒÒÚ‡ÌÓ‚ËÚ¸—ÚÂÚÓÂÀ‡ÒÚËÍÓÏToolStripMenuItem";
            this->‚ÓÒÒÚ‡ÌÓ‚ËÚ¸—ÚÂÚÓÂÀ‡ÒÚËÍÓÏToolStripMenuItem->Size = System::Drawing::Size(313, 26);
            this->‚ÓÒÒÚ‡ÌÓ‚ËÚ¸—ÚÂÚÓÂÀ‡ÒÚËÍÓÏToolStripMenuItem->Text = L"¬ÓÒÒÚ‡ÌÓ‚ËÚ¸ ÒÚÂÚÓÂ Î‡ÒÚËÍÓÏ";
            this->‚ÓÒÒÚ‡ÌÓ‚ËÚ¸—ÚÂÚÓÂÀ‡ÒÚËÍÓÏToolStripMenuItem->Click += gcnew System::EventHandler(this, &GrForm::‚ÓÒÒÚ‡ÌÓ‚ËÚ¸—ÚÂÚÓÂÀ‡ÒÚËÍÓÏToolStripMenuItem_Click);
            // 
            // ‚˚‰ÂÎËÚ¸2ToolStripMenuItem
            // 
            this->‚˚‰ÂÎËÚ¸2ToolStripMenuItem->Name = L"‚˚‰ÂÎËÚ¸2ToolStripMenuItem";
            this->‚˚‰ÂÎËÚ¸2ToolStripMenuItem->Size = System::Drawing::Size(313, 26);
            this->‚˚‰ÂÎËÚ¸2ToolStripMenuItem->Text = L"¬˚‰ÂÎËÚ¸";
            this->‚˚‰ÂÎËÚ¸2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GrForm::selectToolStripMenuItem_Click);
            // 
            // PÂ‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem
            // 
            this->PÂ‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem->Enabled = false;
            this->PÂ‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem->Name = L"PÂ‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem";
            this->PÂ‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem->Size = System::Drawing::Size(313, 26);
            this->PÂ‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem->Text = L"–Â‰‡ÍÚËÓ‚‡Ú¸";
            this->PÂ‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GrForm::editToolStripMenuItem_Click);
            // 
            // Û‰‡ÎËÚ¸ToolStripMenuItem
            // 
            this->Û‰‡ÎËÚ¸ToolStripMenuItem->Enabled = false;
            this->Û‰‡ÎËÚ¸ToolStripMenuItem->Name = L"Û‰‡ÎËÚ¸ToolStripMenuItem";
            this->Û‰‡ÎËÚ¸ToolStripMenuItem->Size = System::Drawing::Size(313, 26);
            this->Û‰‡ÎËÚ¸ToolStripMenuItem->Text = L"”‰‡ÎËÚ¸";
            this->Û‰‡ÎËÚ¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GrForm::deleteToolStripMenuItem_Click);
            // 
            // Ï‡¯Ú‡·ËÓ‚‡Ú¸ToolStripMenuItem
            // 
            this->Ï‡¯Ú‡·ËÓ‚‡Ú¸ToolStripMenuItem->Enabled = false;
            this->Ï‡¯Ú‡·ËÓ‚‡Ú¸ToolStripMenuItem->Name = L"Ï‡¯Ú‡·ËÓ‚‡Ú¸ToolStripMenuItem";
            this->Ï‡¯Ú‡·ËÓ‚‡Ú¸ToolStripMenuItem->Size = System::Drawing::Size(313, 26);
            this->Ï‡¯Ú‡·ËÓ‚‡Ú¸ToolStripMenuItem->Text = L"Ã‡¯Ú‡·ËÓ‚‡Ú¸";
            this->Ï‡¯Ú‡·ËÓ‚‡Ú¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GrForm::zoomToolStripMenuItem_Click);
            // 
            // menuStrip1
            // 
            this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
                this->Ù‡ÈÎToolStripMenuItem,
                    this->‚Ë‰ToolStripMenuItem, this->Ô‡ÌÂÎ¸›ÂÏÂÌÚÓ‚ToolStripMenuItem, this->˝ÎÂÏÂÌÚ˚ToolStripMenuItem, this->toolStripMenuItem2
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(1425, 30);
            this->menuStrip1->TabIndex = 1;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(13, 594);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(44, 16);
            this->label1->TabIndex = 12;
            this->label1->Text = L"label1";
            // 
            // fontDialog1
            // 
            this->fontDialog1->AllowSimulations = false;
            this->fontDialog1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->fontDialog1->ShowApply = true;
            // 
            // groupBoxText
            // 
            this->groupBoxText->Controls->Add(this->textBoxTx);
            this->groupBoxText->Controls->Add(this->buttonOkText);
            this->groupBoxText->Controls->Add(this->buttonCancelText);
            this->groupBoxText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBoxText->Location = System::Drawing::Point(363, 309);
            this->groupBoxText->Name = L"groupBoxText";
            this->groupBoxText->Size = System::Drawing::Size(260, 255);
            this->groupBoxText->TabIndex = 14;
            this->groupBoxText->TabStop = false;
            this->groupBoxText->Text = L"¬‚Ó‰ ÚÂÍÒÚ‡";
            this->groupBoxText->Visible = false;
            // 
            // textBoxTx
            // 
            this->textBoxTx->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBoxTx->ForeColor = System::Drawing::SystemColors::WindowText;
            this->textBoxTx->Location = System::Drawing::Point(15, 50);
            this->textBoxTx->Multiline = true;
            this->textBoxTx->Name = L"textBoxTx";
            this->textBoxTx->Size = System::Drawing::Size(218, 115);
            this->textBoxTx->TabIndex = 11;
            // 
            // buttonOkText
            // 
            this->buttonOkText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonOkText->Location = System::Drawing::Point(15, 206);
            this->buttonOkText->Name = L"buttonOkText";
            this->buttonOkText->Size = System::Drawing::Size(118, 33);
            this->buttonOkText->TabIndex = 10;
            this->buttonOkText->Text = L"œËÏÂÌËÚ¸";
            this->buttonOkText->UseVisualStyleBackColor = true;
            this->buttonOkText->Click += gcnew System::EventHandler(this, &GrForm::buttonOkText_Click);
            // 
            // buttonCancelText
            // 
            this->buttonCancelText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonCancelText->Location = System::Drawing::Point(139, 206);
            this->buttonCancelText->Name = L"buttonCancelText";
            this->buttonCancelText->Size = System::Drawing::Size(115, 33);
            this->buttonCancelText->TabIndex = 9;
            this->buttonCancelText->Text = L"«‡Í˚Ú¸";
            this->buttonCancelText->UseVisualStyleBackColor = true;
            this->buttonCancelText->Click += gcnew System::EventHandler(this, &GrForm::buttonCancelText_Click);
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Location = System::Drawing::Point(1265, 597);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(51, 16);
            this->label14->TabIndex = 13;
            this->label14->Text = L"label14";
            // 
            // groupBoxSelect2
            // 
            this->groupBoxSelect2->Controls->Add(this->listViewSelect);
            this->groupBoxSelect2->Controls->Add(this->buttonCancelSelect2_Click);
            this->groupBoxSelect2->Controls->Add(this->buttonOkSelect2_Click);
            this->groupBoxSelect2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBoxSelect2->Location = System::Drawing::Point(944, 306);
            this->groupBoxSelect2->Name = L"groupBoxSelect2";
            this->groupBoxSelect2->Size = System::Drawing::Size(431, 285);
            this->groupBoxSelect2->TabIndex = 16;
            this->groupBoxSelect2->TabStop = false;
            this->groupBoxSelect2->Text = L"¬˚‰ÂÎËÚ¸";
            this->groupBoxSelect2->Visible = false;
            // 
            // listViewSelect
            // 
            this->listViewSelect->Activation = System::Windows::Forms::ItemActivation::OneClick;
            this->listViewSelect->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
                this->columnHeaderNum,
                    this->columnHeaderSh, this->columnHeaderCol, this->columnHeaderX0, this->columnHeaderY0, this->columnHeaderX1, this->columnHeaderY1
            });
            this->listViewSelect->FullRowSelect = true;
            this->listViewSelect->GridLines = true;
            this->listViewSelect->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
            this->listViewSelect->HideSelection = false;
            this->listViewSelect->HoverSelection = true;
            this->listViewSelect->Location = System::Drawing::Point(6, 38);
            this->listViewSelect->Name = L"listViewSelect";
            this->listViewSelect->ShowItemToolTips = true;
            this->listViewSelect->Size = System::Drawing::Size(418, 184);
            this->listViewSelect->TabIndex = 18;
            this->listViewSelect->UseCompatibleStateImageBehavior = false;
            this->listViewSelect->View = System::Windows::Forms::View::Details;
            // 
            // columnHeaderNum
            // 
            this->columnHeaderNum->Text = L"π";
            this->columnHeaderNum->Width = 30;
            // 
            // columnHeaderSh
            // 
            this->columnHeaderSh->Text = L"‘Ë„Û‡";
            this->columnHeaderSh->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->columnHeaderSh->Width = 91;
            // 
            // columnHeaderCol
            // 
            this->columnHeaderCol->Text = L"÷‚ÂÚ";
            this->columnHeaderCol->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->columnHeaderCol->Width = 270;
            // 
            // columnHeaderX0
            // 
            this->columnHeaderX0->Text = L"X0";
            this->columnHeaderX0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // columnHeaderY0
            // 
            this->columnHeaderY0->Text = L"Y0";
            this->columnHeaderY0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // columnHeaderX1
            // 
            this->columnHeaderX1->Text = L"X1";
            this->columnHeaderX1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // columnHeaderY1
            // 
            this->columnHeaderY1->Text = L"Y1";
            this->columnHeaderY1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // buttonCancelSelect2_Click
            // 
            this->buttonCancelSelect2_Click->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->buttonCancelSelect2_Click->Location = System::Drawing::Point(274, 246);
            this->buttonCancelSelect2_Click->Name = L"buttonCancelSelect2_Click";
            this->buttonCancelSelect2_Click->Size = System::Drawing::Size(115, 33);
            this->buttonCancelSelect2_Click->TabIndex = 17;
            this->buttonCancelSelect2_Click->Text = L"«‡Í˚Ú¸";
            this->buttonCancelSelect2_Click->UseVisualStyleBackColor = true;
            this->buttonCancelSelect2_Click->Click += gcnew System::EventHandler(this, &GrForm::buttonCancelSelect_2_Click);
            // 
            // buttonOkSelect2_Click
            // 
            this->buttonOkSelect2_Click->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonOkSelect2_Click->Location = System::Drawing::Point(6, 246);
            this->buttonOkSelect2_Click->Name = L"buttonOkSelect2_Click";
            this->buttonOkSelect2_Click->Size = System::Drawing::Size(138, 33);
            this->buttonOkSelect2_Click->TabIndex = 16;
            this->buttonOkSelect2_Click->Text = L"œËÏÂÌËÚ¸";
            this->buttonOkSelect2_Click->UseVisualStyleBackColor = true;
            this->buttonOkSelect2_Click->Click += gcnew System::EventHandler(this, &GrForm::buttonOKSelect_2_Click);
            // 
            // groupBoxZoom
            // 
            this->groupBoxZoom->Controls->Add(this->radioButtonMinus);
            this->groupBoxZoom->Controls->Add(this->radioButtonPlus);
            this->groupBoxZoom->Controls->Add(this->buttonCancelZoom);
            this->groupBoxZoom->Controls->Add(this->buttonOkZoom);
            this->groupBoxZoom->Controls->Add(this->numericUpDownZoom);
            this->groupBoxZoom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBoxZoom->Location = System::Drawing::Point(650, 330);
            this->groupBoxZoom->Name = L"groupBoxZoom";
            this->groupBoxZoom->Size = System::Drawing::Size(263, 132);
            this->groupBoxZoom->TabIndex = 21;
            this->groupBoxZoom->TabStop = false;
            this->groupBoxZoom->Text = L"Ã‡¯Ú‡·ËÓ‚‡ÌËÂ";
            this->groupBoxZoom->Visible = false;
            // 
            // radioButtonMinus
            // 
            this->radioButtonMinus->AutoSize = true;
            this->radioButtonMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->radioButtonMinus->Location = System::Drawing::Point(135, 59);
            this->radioButtonMinus->Name = L"radioButtonMinus";
            this->radioButtonMinus->Size = System::Drawing::Size(104, 24);
            this->radioButtonMinus->TabIndex = 9;
            this->radioButtonMinus->Text = L"ÃÂÌ¸¯Â";
            this->radioButtonMinus->UseVisualStyleBackColor = true;
            // 
            // radioButtonPlus
            // 
            this->radioButtonPlus->AutoSize = true;
            this->radioButtonPlus->Checked = true;
            this->radioButtonPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->radioButtonPlus->Location = System::Drawing::Point(135, 29);
            this->radioButtonPlus->Name = L"radioButtonPlus";
            this->radioButtonPlus->Size = System::Drawing::Size(102, 24);
            this->radioButtonPlus->TabIndex = 8;
            this->radioButtonPlus->TabStop = true;
            this->radioButtonPlus->Text = L"¡ÓÎ¸¯Â";
            this->radioButtonPlus->UseVisualStyleBackColor = true;
            // 
            // buttonCancelZoom
            // 
            this->buttonCancelZoom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonCancelZoom->Location = System::Drawing::Point(138, 85);
            this->buttonCancelZoom->Name = L"buttonCancelZoom";
            this->buttonCancelZoom->Size = System::Drawing::Size(115, 33);
            this->buttonCancelZoom->TabIndex = 7;
            this->buttonCancelZoom->Text = L"«‡Í˚Ú¸";
            this->buttonCancelZoom->UseVisualStyleBackColor = true;
            this->buttonCancelZoom->Click += gcnew System::EventHandler(this, &GrForm::buttonCancelZoom_Click);
            // 
            // buttonOkZoom
            // 
            this->buttonOkZoom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonOkZoom->Location = System::Drawing::Point(-1, 85);
            this->buttonOkZoom->Name = L"buttonOkZoom";
            this->buttonOkZoom->Size = System::Drawing::Size(133, 33);
            this->buttonOkZoom->TabIndex = 6;
            this->buttonOkZoom->Text = L"œËÏÂÌËÚ¸";
            this->buttonOkZoom->UseVisualStyleBackColor = true;
            this->buttonOkZoom->Click += gcnew System::EventHandler(this, &GrForm::buttonOkZoom_Click);
            // 
            // numericUpDownZoom
            // 
            this->numericUpDownZoom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->numericUpDownZoom->Location = System::Drawing::Point(23, 41);
            this->numericUpDownZoom->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
            this->numericUpDownZoom->Name = L"numericUpDownZoom";
            this->numericUpDownZoom->Size = System::Drawing::Size(66, 26);
            this->numericUpDownZoom->TabIndex = 5;
            // 
            // groupBoxSaveEdit
            // 
            this->groupBoxSaveEdit->Controls->Add(this->buttonCancelSaveEdit);
            this->groupBoxSaveEdit->Controls->Add(this->buttonOkSaveEdit);
            this->groupBoxSaveEdit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBoxSaveEdit->Location = System::Drawing::Point(650, 478);
            this->groupBoxSaveEdit->Name = L"groupBoxSaveEdit";
            this->groupBoxSaveEdit->Size = System::Drawing::Size(263, 132);
            this->groupBoxSaveEdit->TabIndex = 22;
            this->groupBoxSaveEdit->TabStop = false;
            this->groupBoxSaveEdit->Text = L"—Óı‡ÌËÚ¸ Â‰‡ÍÚËÓ‚‡ÌÌÓÂ";
            this->groupBoxSaveEdit->Visible = false;
            // 
            // buttonCancelSaveEdit
            // 
            this->buttonCancelSaveEdit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonCancelSaveEdit->Location = System::Drawing::Point(138, 85);
            this->buttonCancelSaveEdit->Name = L"buttonCancelSaveEdit";
            this->buttonCancelSaveEdit->Size = System::Drawing::Size(115, 33);
            this->buttonCancelSaveEdit->TabIndex = 7;
            this->buttonCancelSaveEdit->Text = L"«‡Í˚Ú¸";
            this->buttonCancelSaveEdit->UseVisualStyleBackColor = true;
            this->buttonCancelSaveEdit->Click += gcnew System::EventHandler(this, &GrForm::buttonCancelSaveEdit_Click);
            // 
            // buttonOkSaveEdit
            // 
            this->buttonOkSaveEdit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonOkSaveEdit->Location = System::Drawing::Point(-1, 85);
            this->buttonOkSaveEdit->Name = L"buttonOkSaveEdit";
            this->buttonOkSaveEdit->Size = System::Drawing::Size(133, 33);
            this->buttonOkSaveEdit->TabIndex = 6;
            this->buttonOkSaveEdit->Text = L"œËÏÂÌËÚ¸";
            this->buttonOkSaveEdit->UseVisualStyleBackColor = true;
            this->buttonOkSaveEdit->Click += gcnew System::EventHandler(this, &GrForm::buttonOkSaveEdit_Click);
            // 
            // groupBoxSelect
            // 
            this->groupBoxSelect->Controls->Add(this->radioButtonZoomSel);
            this->groupBoxSelect->Controls->Add(this->buttonOkSel);
            this->groupBoxSelect->Controls->Add(this->buttonCancelSel);
            this->groupBoxSelect->Controls->Add(this->radioButtonEditSel);
            this->groupBoxSelect->Controls->Add(this->radioButtonDelSel);
            this->groupBoxSelect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBoxSelect->Location = System::Drawing::Point(20, 172);
            this->groupBoxSelect->Name = L"groupBoxSelect";
            this->groupBoxSelect->Size = System::Drawing::Size(278, 203);
            this->groupBoxSelect->TabIndex = 23;
            this->groupBoxSelect->TabStop = false;
            this->groupBoxSelect->Text = L"ŒÔÂ‡ˆËË ÔÓÒÎÂ ‚˚‰ÂÎÂÌËˇ";
            this->groupBoxSelect->Visible = false;
            // 
            // radioButtonZoomSel
            // 
            this->radioButtonZoomSel->AutoSize = true;
            this->radioButtonZoomSel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->radioButtonZoomSel->Location = System::Drawing::Point(12, 119);
            this->radioButtonZoomSel->Name = L"radioButtonZoomSel";
            this->radioButtonZoomSel->Size = System::Drawing::Size(192, 24);
            this->radioButtonZoomSel->TabIndex = 11;
            this->radioButtonZoomSel->Text = L"Ã‡¯Ú‡·ËÓ‚‡ÌËÂ";
            this->radioButtonZoomSel->UseVisualStyleBackColor = true;
            // 
            // buttonOkSel
            // 
            this->buttonOkSel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonOkSel->Location = System::Drawing::Point(6, 158);
            this->buttonOkSel->Name = L"buttonOkSel";
            this->buttonOkSel->Size = System::Drawing::Size(121, 33);
            this->buttonOkSel->TabIndex = 10;
            this->buttonOkSel->Text = L"œËÏÂÌËÚ¸";
            this->buttonOkSel->UseVisualStyleBackColor = true;
            this->buttonOkSel->Click += gcnew System::EventHandler(this, &GrForm::buttonOkSel_Click);
            // 
            // buttonCancelSel
            // 
            this->buttonCancelSel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonCancelSel->Location = System::Drawing::Point(144, 158);
            this->buttonCancelSel->Name = L"buttonCancelSel";
            this->buttonCancelSel->Size = System::Drawing::Size(115, 33);
            this->buttonCancelSel->TabIndex = 9;
            this->buttonCancelSel->Text = L"«‡Í˚Ú¸";
            this->buttonCancelSel->UseVisualStyleBackColor = true;
            this->buttonCancelSel->Click += gcnew System::EventHandler(this, &GrForm::buttonCancelSel_Click);
            // 
            // radioButtonEditSel
            // 
            this->radioButtonEditSel->AutoSize = true;
            this->radioButtonEditSel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->radioButtonEditSel->Location = System::Drawing::Point(12, 86);
            this->radioButtonEditSel->Name = L"radioButtonEditSel";
            this->radioButtonEditSel->Size = System::Drawing::Size(186, 24);
            this->radioButtonEditSel->TabIndex = 4;
            this->radioButtonEditSel->Text = L"–Â‰‡ÍÚËÓ‚‡ÌËÂ";
            this->radioButtonEditSel->UseVisualStyleBackColor = true;
            // 
            // radioButtonDelSel
            // 
            this->radioButtonDelSel->AutoSize = true;
            this->radioButtonDelSel->Checked = true;
            this->radioButtonDelSel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->radioButtonDelSel->Location = System::Drawing::Point(12, 56);
            this->radioButtonDelSel->Name = L"radioButtonDelSel";
            this->radioButtonDelSel->Size = System::Drawing::Size(121, 24);
            this->radioButtonDelSel->TabIndex = 3;
            this->radioButtonDelSel->TabStop = true;
            this->radioButtonDelSel->Text = L"”‰‡ÎÂÌËÂ";
            this->radioButtonDelSel->UseVisualStyleBackColor = true;
            // 
            // printDocument1
            // 
            this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &GrForm::printDocument1_PrintPage);
            // 
            // printPreviewDialog1
            // 
            this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
            this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
            this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
            this->printPreviewDialog1->Enabled = true;
            this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
            this->printPreviewDialog1->Name = L"printPreviewDialog1";
            this->printPreviewDialog1->Visible = false;
            // 
            // GrForm
            // 
            this->AllowDrop = true;
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1425, 622);
            this->Controls->Add(this->groupBoxSelect);
            this->Controls->Add(this->groupBoxSaveEdit);
            this->Controls->Add(this->groupBoxZoom);
            this->Controls->Add(this->groupBoxSelect2);
            this->Controls->Add(this->groupBoxText);
            this->Controls->Add(this->label14);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->groupBoxLineW);
            this->Controls->Add(this->groupBoxPolygon);
            this->Controls->Add(this->groupBoxEllipse);
            this->Controls->Add(this->groupBox—ircle);
            this->Controls->Add(this->groupBoxRetangle);
            this->Controls->Add(this->groupBoxQuadrat);
            this->Controls->Add(this->pictureBoxGen);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->Name = L"GrForm";
            this->Text = L"√‡ÙË˜ÂÒÍËÈ Â‰‡ÍÚÓ";
            this->Load += gcnew System::EventHandler(this, &GrForm::GrForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxGen))->EndInit();
            this->groupBoxQuadrat->ResumeLayout(false);
            this->groupBoxQuadrat->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownQuadrat))->EndInit();
            this->groupBoxRetangle->ResumeLayout(false);
            this->groupBoxRetangle->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownRetangleW))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownRetangleH))->EndInit();
            this->groupBox—ircle->ResumeLayout(false);
            this->groupBox—ircle->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown—ircle))->EndInit();
            this->groupBoxEllipse->ResumeLayout(false);
            this->groupBoxEllipse->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEllipseW))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEllipseH))->EndInit();
            this->groupBoxPolygon->ResumeLayout(false);
            this->groupBoxPolygon->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPolygonR))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPolygon))->EndInit();
            this->groupBoxLineW->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLineW))->EndInit();
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->groupBoxText->ResumeLayout(false);
            this->groupBoxText->PerformLayout();
            this->groupBoxSelect2->ResumeLayout(false);
            this->groupBoxZoom->ResumeLayout(false);
            this->groupBoxZoom->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownZoom))->EndInit();
            this->groupBoxSaveEdit->ResumeLayout(false);
            this->groupBoxSelect->ResumeLayout(false);
            this->groupBoxSelect->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	
		private:
		List <Point>^ points;
		Graphics^ gr;//ÔÓÎÓÚÌÓ				
		Pen^ penM;
		Bitmap^ background;//ÙÓÌ
		Brush^ LsBrush; // ËÒÚ¸ ‰Îˇ Î‡ÒÚËÍ‡
		Color color, col;		
		String^ filename;
		Point p;
		bool pressed; //ÙÎ‡ÊÓÍ "ÍÌÓÔÍ‡ Ï˚¯Ë Á‡Ê‡Ú‡"				
		bool isLastic; //‘Î‡ÊÓÍ "ËÒÓ‚‡Ú¸"	
		bool clearAll;
		int ShNum = 0, numStrm = 0, drSt = 0;
		int listNum, dr, stateDraw,statePen;
		int xr1 = 0, xr2 = 0;
		float xm1 = 0, ym1 = 0, xm = 0, ym = 0, xz1 = 0, yz1 = 0, xz2 = 0, yz2 = 0, wsh;
	
private: System::Void ÓÚÍ˚Ú¸ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); 
private: System::Void ÒÓı‡ÌËÚ¸ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ÔÂ˜‡Ú¸ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ‚˚ıÓ‰ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
 private: System::Void ¯ËÙÚToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ÚÓÎ˘ËÌ‡ÀËÌËÈToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Ô‡ÎËÚ‡ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ÎËÌËˇToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Í‚‡‰‡ÚToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ÔˇÏÓÛ„ÓÎ¸ÌËÍToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ÍÛ„ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ˝ÎÎËÔÒToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ÏÌÓ„ÓÛ„ÓÎ¸ÌËÍToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ÚÂÍÒÚStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonOkText_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCancelText_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void selectToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void editToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void deleteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void zoomToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonOkSel_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCancelSel_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonOkSaveEdit_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCancelSaveEdit_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonOkZoom_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCancelZoom_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Û‰‡ÎËÚ¸œÓÒÎÂ‰ÌËÈToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); 
private: System::Void Û‰‡ÎËÚ¸¬ÒÂToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); 
private: System::Void Î‡ÒÚËÍToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonOkQuadrat_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCancelQuadrat_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonOkRetangle_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCancelRetangle_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonOk—ircle_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCacelCircle_Click(System::Object^ sender, System::EventArgs^ e); 
private: System::Void buttonOkEllipse_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCanselEllipse_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonOkPolygone_Click(System::Object^ sender, System::EventArgs^ e); 
private: System::Void buttonCancelPolygone_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonOkLineW_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCancelLineW_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonOKSelect_2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCancelSelect_2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBoxGen_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
private: System::Void pictureBoxGen_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void pictureBoxGen_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void pictureBoxGen_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void GrForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void AddItem(int strNum,String^ text, Color colStr,float xz1, float yz1,float xz2, float yz2, float ws, int col, int stPen);
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e); 
private: System::Void radioButtonMousePolygon_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButtonNumberPolygon_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButtonMouseQuadrat_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButtonNumberQuadrat_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButtonMouseRetangle_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButtonNumberRetangle_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButtonMouse—ircle_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButtonNumber—ircle_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButtonMouseEllipse_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButtonNumberEllipse_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void ‚ÓÒÒÚ‡ÌÓ‚ËÚ¸—ÚÂÚÓÂÀ‡ÒÚËÍÓÏToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
