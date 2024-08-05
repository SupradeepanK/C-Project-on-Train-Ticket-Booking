#pragma once

namespace TrainTicketBooking {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			const double kilburn = 23.9;
			const double Ekilburn = 28.90;
			const double FSkilburn =38.99;
			const double Oxford = 67.23;
			const double EOxford = 72.23;
			const double FSOxford =77.23;
			const double Preston = 78;
			const double EPreston = 83;
			const double FSPreston =88;
			const double Brixton = 56;
			const double EBrixton = 61;
			const double FSBrixton =66;
			const double Leeds = 76;
			const double ELeeds = 71; 
			const double FSLeeds = 76;
			const double Tax = 19.75;
			double TotalCost;


			cmbcc->Text = "Choose One...";
			cmbcc->Items->Add("Europe");
			cmbcc->Items->Add("USA");
			cmbcc->Items->Add("Nigeria");
			cmbcc->Items->Add("Canada");
			cmbcc->Items->Add("India");
			cmbcc->Items->Add("Brazil");
			cmbcc->Items->Add("Philippine");
			cmbcc->Items->Add("Kenya");


			timer1->Start();


			cmbdestination->Items->Add("kilburn");

			cmbdestination->Items->Add("Oxford");

			cmbdestination->Items->Add("Preston");

			cmbdestination->Items->Add("Leeds");

			cmbdestination->Items->Add("Brixton");
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Label^ R;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ rbstandard;

	private: System::Windows::Forms::Label^ lblsub;

	private: System::Windows::Forms::Label^ lbltotal;


	private: System::Windows::Forms::Label^ label1222;
	private: System::Windows::Forms::Label^ lbltax;


	private: System::Windows::Forms::Label^ lblta;
	private: System::Windows::Forms::Label^ lblsubtotal;
	private: System::Windows::Forms::CheckBox^ rbfirstclass;




	private: System::Windows::Forms::CheckBox^ rbeconomy;

	private: System::Windows::Forms::ComboBox^ cmbdestination;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::CheckBox^ rbchild;

	private: System::Windows::Forms::CheckBox^ rbadult;

	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::CheckBox^ rbsingle;
private: System::Windows::Forms::CheckBox^ rbreturn;


	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ lbladult;

	private: System::Windows::Forms::Label^ lbldate;

	private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ lblprice;

private: System::Windows::Forms::Label^ lblto;

private: System::Windows::Forms::Label^ lblfrom;

	private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ lblchild;
private: System::Windows::Forms::Label^ lblroute;


	private: System::Windows::Forms::Label^ label36;



	private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ lblticket;

	private: System::Windows::Forms::Label^ lbltime;

	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ lblclass;
private: System::Windows::Forms::Label^ lblrefno;


	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::TextBox^ txtcc;






	private: System::Windows::Forms::ComboBox^ cmbcc;
	private: System::Windows::Forms::Label^ lblcc;
	private: System::Windows::Forms::Button^ btnconvert;
private: System::Windows::Forms::Button^ btnexit;





private: System::Windows::Forms::Button^ btnclear;

private: System::Windows::Forms::Button^ btnreset;

private: System::Windows::Forms::Button^ btntotal;

	private: System::Windows::Forms::Button^ btncc;
	private: System::Windows::Forms::Button^ btnclose;
private: System::Windows::Forms::Timer^ timer1;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::RichTextBox^ rtbreceipt;

private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label8;


private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;











































	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->R = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->rbfirstclass = (gcnew System::Windows::Forms::CheckBox());
			this->rbeconomy = (gcnew System::Windows::Forms::CheckBox());
			this->rbstandard = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->cmbdestination = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->rbchild = (gcnew System::Windows::Forms::CheckBox());
			this->rbadult = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->btncc = (gcnew System::Windows::Forms::Button());
			this->txtcc = (gcnew System::Windows::Forms::TextBox());
			this->cmbcc = (gcnew System::Windows::Forms::ComboBox());
			this->lbltotal = (gcnew System::Windows::Forms::Label());
			this->btnclose = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->btnconvert = (gcnew System::Windows::Forms::Button());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->label1222 = (gcnew System::Windows::Forms::Label());
			this->lbltax = (gcnew System::Windows::Forms::Label());
			this->lblta = (gcnew System::Windows::Forms::Label());
			this->lblcc = (gcnew System::Windows::Forms::Label());
			this->lblsubtotal = (gcnew System::Windows::Forms::Label());
			this->lblsub = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->rbsingle = (gcnew System::Windows::Forms::CheckBox());
			this->rbreturn = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->btnexit = (gcnew System::Windows::Forms::Button());
			this->btnclear = (gcnew System::Windows::Forms::Button());
			this->btnreset = (gcnew System::Windows::Forms::Button());
			this->btntotal = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->lbladult = (gcnew System::Windows::Forms::Label());
			this->lbldate = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->lblprice = (gcnew System::Windows::Forms::Label());
			this->lblto = (gcnew System::Windows::Forms::Label());
			this->lblfrom = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->lblchild = (gcnew System::Windows::Forms::Label());
			this->lblroute = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->lblticket = (gcnew System::Windows::Forms::Label());
			this->lbltime = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->lblclass = (gcnew System::Windows::Forms::Label());
			this->lblrefno = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->rtbreceipt = (gcnew System::Windows::Forms::RichTextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Controls->Add(this->R);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1328, 100);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// R
			// 
			this->R->AutoSize = true;
			this->R->Font = (gcnew System::Drawing::Font(L"Webdings", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->R->Location = System::Drawing::Point(1189, 0);
			this->R->Name = L"R";
			this->R->Size = System::Drawing::Size(139, 97);
			this->R->TabIndex = 0;
			this->R->Text = L"R";
			this->R->Click += gcnew System::EventHandler(this, &MainForm::R_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(155, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(759, 91);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Train Ticket System";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->rbfirstclass);
			this->groupBox2->Controls->Add(this->rbeconomy);
			this->groupBox2->Controls->Add(this->rbstandard);
			this->groupBox2->Location = System::Drawing::Point(12, 118);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(174, 284);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(46, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 31);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Class";
			// 
			// rbfirstclass
			// 
			this->rbfirstclass->AutoSize = true;
			this->rbfirstclass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbfirstclass->Location = System::Drawing::Point(28, 195);
			this->rbfirstclass->Name = L"rbfirstclass";
			this->rbfirstclass->Size = System::Drawing::Size(144, 29);
			this->rbfirstclass->TabIndex = 0;
			this->rbfirstclass->Text = L"First Class";
			this->rbfirstclass->UseVisualStyleBackColor = true;
			// 
			// rbeconomy
			// 
			this->rbeconomy->AutoSize = true;
			this->rbeconomy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbeconomy->Location = System::Drawing::Point(28, 136);
			this->rbeconomy->Name = L"rbeconomy";
			this->rbeconomy->Size = System::Drawing::Size(127, 29);
			this->rbeconomy->TabIndex = 0;
			this->rbeconomy->Text = L"Economy";
			this->rbeconomy->UseVisualStyleBackColor = true;
			// 
			// rbstandard
			// 
			this->rbstandard->AutoSize = true;
			this->rbstandard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbstandard->Location = System::Drawing::Point(28, 75);
			this->rbstandard->Name = L"rbstandard";
			this->rbstandard->Size = System::Drawing::Size(126, 29);
			this->rbstandard->TabIndex = 0;
			this->rbstandard->Text = L"Standard";
			this->rbstandard->UseVisualStyleBackColor = true;
			this->rbstandard->CheckedChanged += gcnew System::EventHandler(this, &MainForm::rbstandard_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox3->Controls->Add(this->cmbdestination);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->rbchild);
			this->groupBox3->Controls->Add(this->rbadult);
			this->groupBox3->Location = System::Drawing::Point(192, 118);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(313, 284);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			// 
			// cmbdestination
			// 
			this->cmbdestination->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbdestination->FormattingEnabled = true;
			this->cmbdestination->Location = System::Drawing::Point(50, 75);
			this->cmbdestination->Name = L"cmbdestination";
			this->cmbdestination->Size = System::Drawing::Size(201, 33);
			this->cmbdestination->TabIndex = 1;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(45, 195);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(66, 25);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Child";
			this->label12->Click += gcnew System::EventHandler(this, &MainForm::label11_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(45, 136);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(66, 25);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Adult";
			this->label11->Click += gcnew System::EventHandler(this, &MainForm::label11_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(73, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 31);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Destination";
			// 
			// rbchild
			// 
			this->rbchild->AutoSize = true;
			this->rbchild->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbchild->Location = System::Drawing::Point(174, 195);
			this->rbchild->Name = L"rbchild";
			this->rbchild->Size = System::Drawing::Size(64, 28);
			this->rbchild->TabIndex = 0;
			this->rbchild->Text = L"Yes";
			this->rbchild->UseVisualStyleBackColor = true;
			// 
			// rbadult
			// 
			this->rbadult->AutoSize = true;
			this->rbadult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbadult->Location = System::Drawing::Point(174, 136);
			this->rbadult->Name = L"rbadult";
			this->rbadult->Size = System::Drawing::Size(64, 28);
			this->rbadult->TabIndex = 0;
			this->rbadult->Text = L"Yes";
			this->rbadult->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox4->Controls->Add(this->btncc);
			this->groupBox4->Controls->Add(this->txtcc);
			this->groupBox4->Controls->Add(this->cmbcc);
			this->groupBox4->Controls->Add(this->lbltotal);
			this->groupBox4->Controls->Add(this->btnclose);
			this->groupBox4->Controls->Add(this->button6);
			this->groupBox4->Controls->Add(this->btnconvert);
			this->groupBox4->Controls->Add(this->checkBox4);
			this->groupBox4->Controls->Add(this->label1222);
			this->groupBox4->Controls->Add(this->lbltax);
			this->groupBox4->Controls->Add(this->lblta);
			this->groupBox4->Controls->Add(this->lblcc);
			this->groupBox4->Controls->Add(this->lblsubtotal);
			this->groupBox4->Controls->Add(this->lblsub);
			this->groupBox4->Location = System::Drawing::Point(12, 408);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(678, 271);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			this->groupBox4->Enter += gcnew System::EventHandler(this, &MainForm::groupBox4_Enter);
			// 
			// btncc
			// 
			this->btncc->BackColor = System::Drawing::Color::Black;
			this->btncc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncc->ForeColor = System::Drawing::Color::White;
			this->btncc->Location = System::Drawing::Point(344, 19);
			this->btncc->Name = L"btncc";
			this->btncc->Size = System::Drawing::Size(274, 231);
			this->btncc->TabIndex = 3;
			this->btncc->Text = L"Currency Converter";
			this->btncc->UseVisualStyleBackColor = false;
			this->btncc->Click += gcnew System::EventHandler(this, &MainForm::btncc_Click);
			// 
			// txtcc
			// 
			this->txtcc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtcc->Location = System::Drawing::Point(344, 83);
			this->txtcc->Multiline = true;
			this->txtcc->Name = L"txtcc";
			this->txtcc->Size = System::Drawing::Size(269, 40);
			this->txtcc->TabIndex = 2;
			this->txtcc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// cmbcc
			// 
			this->cmbcc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbcc->FormattingEnabled = true;
			this->cmbcc->Location = System::Drawing::Point(344, 39);
			this->cmbcc->Name = L"cmbcc";
			this->cmbcc->Size = System::Drawing::Size(269, 28);
			this->cmbcc->TabIndex = 1;
			// 
			// lbltotal
			// 
			this->lbltotal->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbltotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbltotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbltotal->Location = System::Drawing::Point(195, 193);
			this->lbltotal->Name = L"lbltotal";
			this->lbltotal->Size = System::Drawing::Size(117, 31);
			this->lbltotal->TabIndex = 1;
			// 
			// btnclose
			// 
			this->btnclose->BackColor = System::Drawing::Color::Black;
			this->btnclose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnclose->ForeColor = System::Drawing::Color::White;
			this->btnclose->Location = System::Drawing::Point(531, 193);
			this->btnclose->Name = L"btnclose";
			this->btnclose->Size = System::Drawing::Size(82, 44);
			this->btnclose->TabIndex = 3;
			this->btnclose->Text = L"Close";
			this->btnclose->UseVisualStyleBackColor = false;
			this->btnclose->Click += gcnew System::EventHandler(this, &MainForm::btnclose_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Black;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(447, 193);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(84, 44);
			this->button6->TabIndex = 3;
			this->button6->Text = L"Reset";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// btnconvert
			// 
			this->btnconvert->BackColor = System::Drawing::Color::Black;
			this->btnconvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnconvert->ForeColor = System::Drawing::Color::White;
			this->btnconvert->Location = System::Drawing::Point(344, 193);
			this->btnconvert->Name = L"btnconvert";
			this->btnconvert->Size = System::Drawing::Size(105, 44);
			this->btnconvert->TabIndex = 3;
			this->btnconvert->Text = L"Convert";
			this->btnconvert->UseVisualStyleBackColor = false;
			this->btnconvert->Click += gcnew System::EventHandler(this, &MainForm::btnconvert_Click);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox4->Location = System::Drawing::Point(29, 19);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(159, 28);
			this->checkBox4->TabIndex = 0;
			this->checkBox4->Text = L"Other Options";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// label1222
			// 
			this->label1222->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1222->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1222->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1222->Location = System::Drawing::Point(29, 193);
			this->label1222->Name = L"label1222";
			this->label1222->Size = System::Drawing::Size(117, 31);
			this->label1222->TabIndex = 1;
			this->label1222->Text = L"Total";
			// 
			// lbltax
			// 
			this->lbltax->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbltax->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbltax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbltax->Location = System::Drawing::Point(195, 134);
			this->lbltax->Name = L"lbltax";
			this->lbltax->Size = System::Drawing::Size(117, 31);
			this->lbltax->TabIndex = 1;
			// 
			// lblta
			// 
			this->lblta->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblta->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblta->Location = System::Drawing::Point(29, 134);
			this->lblta->Name = L"lblta";
			this->lblta->Size = System::Drawing::Size(117, 31);
			this->lblta->TabIndex = 1;
			this->lblta->Text = L"Tax";
			// 
			// lblcc
			// 
			this->lblcc->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblcc->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblcc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblcc->Location = System::Drawing::Point(344, 136);
			this->lblcc->Name = L"lblcc";
			this->lblcc->Size = System::Drawing::Size(269, 44);
			this->lblcc->TabIndex = 1;
			// 
			// lblsubtotal
			// 
			this->lblsubtotal->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblsubtotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblsubtotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblsubtotal->Location = System::Drawing::Point(195, 75);
			this->lblsubtotal->Name = L"lblsubtotal";
			this->lblsubtotal->Size = System::Drawing::Size(117, 31);
			this->lblsubtotal->TabIndex = 1;
			// 
			// lblsub
			// 
			this->lblsub->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblsub->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblsub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblsub->Location = System::Drawing::Point(29, 75);
			this->lblsub->Name = L"lblsub";
			this->lblsub->Size = System::Drawing::Size(117, 31);
			this->lblsub->TabIndex = 1;
			this->lblsub->Text = L"Sub Total";
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox5->Controls->Add(this->label4);
			this->groupBox5->Controls->Add(this->rbsingle);
			this->groupBox5->Controls->Add(this->rbreturn);
			this->groupBox5->Location = System::Drawing::Point(511, 118);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(179, 284);
			this->groupBox5->TabIndex = 0;
			this->groupBox5->TabStop = false;
			this->groupBox5->Enter += gcnew System::EventHandler(this, &MainForm::groupBox5_Enter);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(6, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(167, 31);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Ticket Type";
			// 
			// rbsingle
			// 
			this->rbsingle->AutoSize = true;
			this->rbsingle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbsingle->Location = System::Drawing::Point(55, 98);
			this->rbsingle->Name = L"rbsingle";
			this->rbsingle->Size = System::Drawing::Size(88, 28);
			this->rbsingle->TabIndex = 0;
			this->rbsingle->Text = L"Single";
			this->rbsingle->UseVisualStyleBackColor = true;
			// 
			// rbreturn
			// 
			this->rbreturn->AutoSize = true;
			this->rbreturn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbreturn->Location = System::Drawing::Point(55, 174);
			this->rbreturn->Name = L"rbreturn";
			this->rbreturn->Size = System::Drawing::Size(91, 28);
			this->rbreturn->TabIndex = 0;
			this->rbreturn->Text = L"Return";
			this->rbreturn->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox6->Controls->Add(this->tabControl1);
			this->groupBox6->Location = System::Drawing::Point(696, 118);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(644, 561);
			this->groupBox6->TabIndex = 0;
			this->groupBox6->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(20, 16);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(605, 539);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->btnexit);
			this->tabPage1->Controls->Add(this->btnclear);
			this->tabPage1->Controls->Add(this->btnreset);
			this->tabPage1->Controls->Add(this->btntotal);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label21);
			this->tabPage1->Controls->Add(this->lbladult);
			this->tabPage1->Controls->Add(this->lbldate);
			this->tabPage1->Controls->Add(this->label37);
			this->tabPage1->Controls->Add(this->lblprice);
			this->tabPage1->Controls->Add(this->lblto);
			this->tabPage1->Controls->Add(this->lblfrom);
			this->tabPage1->Controls->Add(this->label20);
			this->tabPage1->Controls->Add(this->lblchild);
			this->tabPage1->Controls->Add(this->lblroute);
			this->tabPage1->Controls->Add(this->label36);
			this->tabPage1->Controls->Add(this->label19);
			this->tabPage1->Controls->Add(this->lblticket);
			this->tabPage1->Controls->Add(this->lbltime);
			this->tabPage1->Controls->Add(this->label35);
			this->tabPage1->Controls->Add(this->label31);
			this->tabPage1->Controls->Add(this->label27);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->label18);
			this->tabPage1->Controls->Add(this->lblclass);
			this->tabPage1->Controls->Add(this->lblrefno);
			this->tabPage1->Controls->Add(this->label34);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(597, 513);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Booking";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MainForm::tabPage1_Click);
			// 
			// btnexit
			// 
			this->btnexit->BackColor = System::Drawing::Color::Black;
			this->btnexit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnexit->ForeColor = System::Drawing::Color::White;
			this->btnexit->Location = System::Drawing::Point(444, 458);
			this->btnexit->Name = L"btnexit";
			this->btnexit->Size = System::Drawing::Size(140, 48);
			this->btnexit->TabIndex = 3;
			this->btnexit->Text = L"Exit";
			this->btnexit->UseVisualStyleBackColor = false;
			this->btnexit->Click += gcnew System::EventHandler(this, &MainForm::btnexit_Click);
			// 
			// btnclear
			// 
			this->btnclear->BackColor = System::Drawing::Color::Black;
			this->btnclear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnclear->ForeColor = System::Drawing::Color::White;
			this->btnclear->Location = System::Drawing::Point(298, 458);
			this->btnclear->Name = L"btnclear";
			this->btnclear->Size = System::Drawing::Size(140, 48);
			this->btnclear->TabIndex = 3;
			this->btnclear->Text = L"Clear";
			this->btnclear->UseVisualStyleBackColor = false;
			this->btnclear->Click += gcnew System::EventHandler(this, &MainForm::btnclear_Click);
			// 
			// btnreset
			// 
			this->btnreset->BackColor = System::Drawing::Color::Black;
			this->btnreset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnreset->ForeColor = System::Drawing::Color::White;
			this->btnreset->Location = System::Drawing::Point(152, 458);
			this->btnreset->Name = L"btnreset";
			this->btnreset->Size = System::Drawing::Size(140, 48);
			this->btnreset->TabIndex = 3;
			this->btnreset->Text = L"Print";
			this->btnreset->UseVisualStyleBackColor = false;
			this->btnreset->Click += gcnew System::EventHandler(this, &MainForm::btnreset_Click);
			// 
			// btntotal
			// 
			this->btntotal->BackColor = System::Drawing::Color::Black;
			this->btntotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btntotal->ForeColor = System::Drawing::Color::White;
			this->btntotal->Location = System::Drawing::Point(6, 458);
			this->btntotal->Name = L"btntotal";
			this->btntotal->Size = System::Drawing::Size(140, 48);
			this->btntotal->TabIndex = 3;
			this->btntotal->Text = L"Total";
			this->btntotal->UseVisualStyleBackColor = false;
			this->btntotal->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(6, 6);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(578, 54);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Travelling Ticket";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(298, 68);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(140, 48);
			this->label21->TabIndex = 1;
			this->label21->Text = L"Adult";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbladult
			// 
			this->lbladult->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbladult->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbladult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbladult->Location = System::Drawing::Point(298, 125);
			this->lbladult->Name = L"lbladult";
			this->lbladult->Size = System::Drawing::Size(140, 48);
			this->lbladult->TabIndex = 1;
			this->lbladult->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbldate
			// 
			this->lbldate->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbldate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbldate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbldate->Location = System::Drawing::Point(298, 402);
			this->lbldate->Name = L"lbldate";
			this->lbldate->Size = System::Drawing::Size(140, 48);
			this->lbldate->TabIndex = 1;
			this->lbldate->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label37
			// 
			this->label37->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(298, 346);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(140, 48);
			this->label37->TabIndex = 1;
			this->label37->Text = L"Date";
			this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblprice
			// 
			this->lblprice->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblprice->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblprice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblprice->Location = System::Drawing::Point(298, 291);
			this->lblprice->Name = L"lblprice";
			this->lblprice->Size = System::Drawing::Size(140, 48);
			this->lblprice->TabIndex = 1;
			this->lblprice->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblto
			// 
			this->lblto->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblto->Location = System::Drawing::Point(298, 236);
			this->lblto->Name = L"lblto";
			this->lblto->Size = System::Drawing::Size(140, 48);
			this->lblto->TabIndex = 1;
			this->lblto->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblfrom
			// 
			this->lblfrom->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblfrom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblfrom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblfrom->Location = System::Drawing::Point(298, 183);
			this->lblfrom->Name = L"lblfrom";
			this->lblfrom->Size = System::Drawing::Size(140, 48);
			this->lblfrom->TabIndex = 1;
			this->lblfrom->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(444, 68);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(140, 48);
			this->label20->TabIndex = 1;
			this->label20->Text = L"Child";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblchild
			// 
			this->lblchild->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblchild->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblchild->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblchild->Location = System::Drawing::Point(444, 125);
			this->lblchild->Name = L"lblchild";
			this->lblchild->Size = System::Drawing::Size(140, 48);
			this->lblchild->TabIndex = 1;
			this->lblchild->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblroute
			// 
			this->lblroute->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblroute->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblroute->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblroute->Location = System::Drawing::Point(444, 402);
			this->lblroute->Name = L"lblroute";
			this->lblroute->Size = System::Drawing::Size(140, 48);
			this->lblroute->TabIndex = 1;
			this->lblroute->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label36
			// 
			this->label36->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label36->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(444, 346);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(140, 48);
			this->label36->TabIndex = 1;
			this->label36->Text = L"Route";
			this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(152, 68);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(140, 48);
			this->label19->TabIndex = 1;
			this->label19->Text = L"Ticket";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblticket
			// 
			this->lblticket->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblticket->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblticket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblticket->Location = System::Drawing::Point(152, 125);
			this->lblticket->Name = L"lblticket";
			this->lblticket->Size = System::Drawing::Size(140, 48);
			this->lblticket->TabIndex = 1;
			this->lblticket->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbltime
			// 
			this->lbltime->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbltime->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbltime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbltime->Location = System::Drawing::Point(152, 402);
			this->lbltime->Name = L"lbltime";
			this->lbltime->Size = System::Drawing::Size(140, 48);
			this->lbltime->TabIndex = 1;
			this->lbltime->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label35
			// 
			this->label35->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(152, 346);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(140, 48);
			this->label35->TabIndex = 1;
			this->label35->Text = L"Time";
			this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label31
			// 
			this->label31->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(152, 291);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(140, 48);
			this->label31->TabIndex = 1;
			this->label31->Text = L"Price";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label27
			// 
			this->label27->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(152, 236);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(140, 48);
			this->label27->TabIndex = 1;
			this->label27->Text = L" To";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(152, 183);
			this->label15->Name = L"label15";
			this->label15->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label15->Size = System::Drawing::Size(140, 48);
			this->label15->TabIndex = 1;
			this->label15->Text = L"From";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(6, 68);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(140, 48);
			this->label18->TabIndex = 1;
			this->label18->Text = L"Class";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblclass
			// 
			this->lblclass->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblclass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblclass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblclass->Location = System::Drawing::Point(6, 125);
			this->lblclass->Name = L"lblclass";
			this->lblclass->Size = System::Drawing::Size(140, 48);
			this->lblclass->TabIndex = 1;
			this->lblclass->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblrefno
			// 
			this->lblrefno->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblrefno->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblrefno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblrefno->Location = System::Drawing::Point(6, 402);
			this->lblrefno->Name = L"lblrefno";
			this->lblrefno->Size = System::Drawing::Size(140, 48);
			this->lblrefno->TabIndex = 1;
			this->lblrefno->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label34
			// 
			this->label34->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(6, 346);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(140, 48);
			this->label34->TabIndex = 1;
			this->label34->Text = L"Ref No";
			this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label24);
			this->tabPage2->Controls->Add(this->label23);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->rtbreceipt);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(597, 513);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Receipt";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::Transparent;
			this->label24->Location = System::Drawing::Point(459, 404);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(106, 37);
			this->label24->TabIndex = 12;
			this->label24->Text = L"Route";
			this->label24->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::Transparent;
			this->label23->Location = System::Drawing::Point(332, 404);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(88, 37);
			this->label23->TabIndex = 11;
			this->label23->Text = L"Date";
			this->label23->Visible = false;
			this->label23->Click += gcnew System::EventHandler(this, &MainForm::label23_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::Transparent;
			this->label22->Location = System::Drawing::Point(198, 404);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(92, 37);
			this->label22->TabIndex = 10;
			this->label22->Text = L"Time";
			this->label22->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Transparent;
			this->label17->Location = System::Drawing::Point(58, 404);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(122, 37);
			this->label17->TabIndex = 9;
			this->label17->Text = L"Ref.No";
			this->label17->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Transparent;
			this->label16->Location = System::Drawing::Point(171, 327);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(94, 37);
			this->label16->TabIndex = 8;
			this->label16->Text = L"Price";
			this->label16->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Transparent;
			this->label14->Location = System::Drawing::Point(167, 271);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(57, 37);
			this->label14->TabIndex = 7;
			this->label14->Text = L"To";
			this->label14->Visible = false;
			this->label14->Click += gcnew System::EventHandler(this, &MainForm::label14_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Transparent;
			this->label10->Location = System::Drawing::Point(163, 211);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 37);
			this->label10->TabIndex = 6;
			this->label10->Text = L"From";
			this->label10->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Transparent;
			this->label9->Location = System::Drawing::Point(455, 130);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(95, 37);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Child";
			this->label9->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(328, 130);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(96, 37);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Adult";
			this->label8->Visible = false;
			this->label8->Click += gcnew System::EventHandler(this, &MainForm::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(194, 130);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(108, 37);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Ticket";
			this->label7->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(54, 127);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 39);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Class";
			this->label6->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(156, 33);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(285, 55);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Train Ticket";
			this->label5->Visible = false;
			this->label5->Click += gcnew System::EventHandler(this, &MainForm::label5_Click_1);
			// 
			// rtbreceipt
			// 
			this->rtbreceipt->Location = System::Drawing::Point(11, 9);
			this->rtbreceipt->Name = L"rtbreceipt";
			this->rtbreceipt->Size = System::Drawing::Size(574, 498);
			this->rtbreceipt->TabIndex = 0;
			this->rtbreceipt->Text = L"";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1352, 691);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		double Nigerian_Naira;
		double US_Dollar;
		double Kenyan_Shilling;
		double Brazilian_Real;
		double Canadian_Dollar;
		double Indian_Rupee;
		double Philippine_Peso;
		double Euro;
	private: System::Void R_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox5_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox4_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btncc_Click(System::Object^ sender, System::EventArgs^ e) {
	btncc->Visible = false;

}
private: System::Void btnclose_Click(System::Object^ sender, System::EventArgs^ e) {
	btncc->Visible = true;
	cmbcc->Text = "Choose One...";
	txtcc->Text = "";
	lblcc->Text = "";
}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	DateTime iDate = DateTime::Now;
	lbldate->Text = iDate.ToLongDateString();
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	DateTime iTime = DateTime::Now;
	lbltime->Text = iTime.ToLongTimeString();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	cmbcc->Text = "Choose One...";
	txtcc->Text = "";
	lblcc->Text = "";
}
private: System::Void btnconvert_Click(System::Object^ sender, System::EventArgs^ e) {
	 Nigerian_Naira = 291.19;
	 US_Dollar = 1.46;
	 Kenyan_Shilling =147.33;
	 Brazilian_Real =5.28 ;
	 Canadian_Dollar = 1.90;
	 Indian_Rupee = 98.02;
	 Philippine_Peso = 68.31;
	 Euro= 1.32;
	 double British_Pounds = Convert::ToInt32(txtcc->Text);
	 if (cmbcc->Text == "Nigeria")
	 {
		 lblcc->Text = "N" + System::Convert::ToString(British_Pounds *Nigerian_Naira);
	 }
	 if (cmbcc->Text == "USA")
	 {
		 lblcc->Text = "$" + System::Convert::ToString(British_Pounds * US_Dollar);
	 }
	 if (cmbcc->Text == "Kenya")
	 {
		 lblcc->Text = "KEN" + System::Convert::ToString(British_Pounds * Kenyan_Shilling);
	 }
	 if (cmbcc->Text == "Brazil")
	 {
		 lblcc->Text = "BRA" + System::Convert::ToString(British_Pounds * Brazilian_Real);
	 }
	 if (cmbcc->Text == "canada")
	 {
		 lblcc->Text = "C$" + System::Convert::ToString(British_Pounds * Canadian_Dollar);
	 }
	 if (cmbcc->Text == "India")
	 {
		 lblcc->Text = "Rupee" + System::Convert::ToString(British_Pounds * Indian_Rupee);
	 }
	 if (cmbcc->Text == "Philippine")
	 {
		 lblcc->Text = "Peso" + System::Convert::ToString(British_Pounds * Philippine_Peso);
	 }
	 if (cmbcc->Text == "Euro")
	 {
		 lblcc->Text = "E" + System::Convert::ToString(British_Pounds * Euro);
	 }
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	const double kilburn = 23.9;
	const double Ekilburn = 28.90;
	const double FSkilburn = 38.99;
	const double Oxford = 67.23;
	const double EOxford = 72.23;
	const double FSOxford = 77.23;
	const double Preston = 78;
	const double EPreston = 83;
	const double FSPreston = 88;
	const double Brixton = 56;
	const double EBrixton = 61;
	const double FSBrixton = 66;
	const double Leeds = 76;
	const double ELeeds = 71;
	const double FSLeeds = 76;
	const double Tax = 19.75;
	double TotalCost;

	Random^ random_1 = gcnew Random;
	int iRand = random_1->Next(20371, 45990);
	lblrefno->Text = Convert::ToString(iRand);

	if ((cmbdestination->Text == "kilburn") && (rbstandard->Checked) && (rbsingle->Checked) && (rbadult->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (kilburn));
		TotalCost = (kilburn * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (kilburn + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	if ((cmbdestination->Text == "Leeds") && (rbstandard->Checked) && (rbsingle->Checked) && (rbadult->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (Leeds));
		TotalCost = (Leeds * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (Leeds + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	if ((cmbdestination->Text == "Oxford") && (rbstandard->Checked) && (rbsingle->Checked) && (rbadult->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (Oxford));
		TotalCost = (Oxford * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (Oxford + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	if ((cmbdestination->Text == "Preston") && (rbstandard->Checked) && (rbsingle->Checked) && (rbadult->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (Preston));
		TotalCost = (Preston * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (Preston + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	if ((cmbdestination->Text == "Brixton") && (rbstandard->Checked) && (rbsingle->Checked) && (rbadult->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (Brixton));
		TotalCost = (Brixton * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (Brixton + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	else if ((cmbdestination->Text == "kilburn") && (rbstandard->Checked) && (rbsingle->Checked) && (rbchild->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (kilburn));
		TotalCost = (kilburn * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (kilburn + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	else if ((cmbdestination->Text == "Leeds") && (rbstandard->Checked) && (rbsingle->Checked) && (rbchild->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (Leeds));
		TotalCost = (Leeds * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (Leeds + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	else if ((cmbdestination->Text == "Oxford") && (rbstandard->Checked) && (rbsingle->Checked) && (rbchild->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (Oxford));
		TotalCost = (Oxford * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (Oxford + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	else if ((cmbdestination->Text == "Preston") && (rbstandard->Checked) && (rbsingle->Checked) && (rbchild->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (Preston));
		TotalCost = (Preston * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (Preston + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	else if ((cmbdestination->Text == "Brixton") && (rbstandard->Checked) && (rbsingle->Checked) && (rbchild->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (Brixton));
		TotalCost = (Brixton * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (Brixton + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	if ((cmbdestination->Text == "Ekilburn") && (rbeconomy->Checked) && (rbsingle->Checked) && (rbadult->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (Ekilburn));
		TotalCost = (Ekilburn * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (Ekilburn + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	if ((cmbdestination->Text == "ELeeds") && (rbeconomy->Checked) && (rbsingle->Checked) && (rbadult->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (ELeeds));
		TotalCost = (ELeeds * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (ELeeds + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	if ((cmbdestination->Text == "EOxford") && (rbeconomy->Checked) && (rbsingle->Checked) && (rbadult->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (EOxford));
		TotalCost = (EOxford * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (EOxford + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	if ((cmbdestination->Text == "EPreston") && (rbeconomy->Checked) && (rbsingle->Checked) && (rbadult->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (EPreston));
		TotalCost = (EPreston * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (EPreston + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	if ((cmbdestination->Text == "EBrixton") && (rbeconomy->Checked) && (rbsingle->Checked) && (rbadult->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (EBrixton));
		TotalCost = (EBrixton * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (EBrixton + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	else if ((cmbdestination->Text == "Ekilburn") && (rbeconomy->Checked) && (rbsingle->Checked) && (rbchild->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (Ekilburn));
		TotalCost = (Ekilburn * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (Ekilburn + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	else if ((cmbdestination->Text == "ELeeds") && (rbeconomy->Checked) && (rbsingle->Checked) && (rbchild->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (ELeeds));
		TotalCost = (ELeeds * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (ELeeds + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	else if ((cmbdestination->Text == "EOxford") && (rbeconomy->Checked) && (rbsingle->Checked) && (rbchild->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (EOxford));
		TotalCost = (EOxford * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (EOxford + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	else if ((cmbdestination->Text == "EPreston") && (rbeconomy->Checked) && (rbsingle->Checked) && (rbchild->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (EPreston));
		TotalCost = (EPreston * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (EPreston + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	else if ((cmbdestination->Text == "EBrixton") && (rbeconomy->Checked) && (rbsingle->Checked) && (rbchild->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (EBrixton));
		TotalCost = (EBrixton * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (EBrixton + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	if ((cmbdestination->Text == "FSkilburn") && (rbfirstclass->Checked) && (rbsingle->Checked) && (rbadult->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (FSkilburn));
		TotalCost = (FSkilburn * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (FSkilburn + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	if ((cmbdestination->Text == "FSLeeds") && (rbfirstclass->Checked) && (rbsingle->Checked) && (rbadult->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (FSLeeds));
		TotalCost = (FSLeeds * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (FSLeeds + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	if ((cmbdestination->Text == "FSOxford") && (rbfirstclass->Checked) && (rbsingle->Checked) && (rbadult->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (FSOxford));
		TotalCost = (FSOxford * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (FSOxford + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	if ((cmbdestination->Text == "FSPreston") && (rbfirstclass->Checked) && (rbsingle->Checked) && (rbadult->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (FSPreston));
		TotalCost = (FSPreston * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (FSPreston + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	if ((cmbdestination->Text == "FSBrixton") && (rbfirstclass->Checked) && (rbsingle->Checked) && (rbadult->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (FSBrixton));
		TotalCost = (FSBrixton * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (FSBrixton + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	else if ((cmbdestination->Text == "FSkilburn") && (rbfirstclass->Checked) && (rbsingle->Checked) && (rbchild->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (FSkilburn));
		TotalCost = (FSkilburn * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (FSkilburn + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	else if ((cmbdestination->Text == "FSLeeds") && (rbfirstclass->Checked) && (rbsingle->Checked) && (rbchild->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (FSLeeds));
		TotalCost = (FSLeeds * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (FSLeeds + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	else if ((cmbdestination->Text == "FSOxford") && (rbfirstclass->Checked) && (rbsingle->Checked) && (rbchild->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (FSOxford));
		TotalCost = (FSOxford * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (FSOxford + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	else if ((cmbdestination->Text == "FSPreston") && (rbfirstclass->Checked) && (rbsingle->Checked) && (rbchild->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (FSPreston));
		TotalCost = (FSPreston * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (FSPreston + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";
	}
	else if ((cmbdestination->Text == "FSBrixton") && (rbfirstclass->Checked) && (rbsingle->Checked) && (rbchild->Checked)) {
		lblsubtotal->Text = String::Format("{0:C2}", (FSBrixton));
		TotalCost = (FSBrixton * Tax) / 100;
		lbltax->Text = String::Format("{0:C2}", (TotalCost));
		lbltotal->Text = String::Format("{0:C2}", (FSBrixton + TotalCost));
		lblprice->Text = lbltotal->Text;
		lblfrom->Text = "London";
		lblto->Text = (cmbdestination->Text);
		lblclass->Text = rbstandard->Text;
		lblticket->Text = rbsingle->Text;
		lbladult->Text = rbadult->Text;
		lblroute->Text = "ANY";


	}


	rtbreceipt->Text = "";
	rtbreceipt->AppendText("\t\t\t\t" + label5->Text + Environment::NewLine);
	rtbreceipt->AppendText("============================================================================== "+ Environment::NewLine);
	rtbreceipt->AppendText("\n" + label6->Text + "\t\t\t" + label7->Text + "\t\t\t" + label8->Text + "\t\t\t" + label9->Text + Environment::NewLine);
	rtbreceipt->AppendText("\n" + lblclass->Text + "\t\t\t" + lblticket->Text + "\t\t\t" + lbladult->Text + "\t\t\t" + lblchild->Text + Environment::NewLine);
	rtbreceipt->AppendText("============================================================================= " + Environment::NewLine); 
	rtbreceipt->AppendText("\t\t" + label10->Text + "\t\t" + lblfrom->Text + Environment::NewLine);
	rtbreceipt->AppendText("\t\t" + label14->Text + "\t\t" + lblto->Text + Environment::NewLine);
	rtbreceipt->AppendText("\t\t" + label16->Text + "\t\t" + lblprice->Text + Environment::NewLine);
	rtbreceipt->AppendText("============================================================================== " + Environment::NewLine);
	rtbreceipt->AppendText("\n" + label17->Text + "\t\t\t" + label22->Text + "\t\t" + label23->Text + "\t\t\t" + label24->Text + Environment::NewLine);
	rtbreceipt->AppendText("\n" + lblrefno->Text + "\t\t\t" + lbltime->Text + "\t\t" + lbldate->Text + "\t\t" + lblroute->Text + Environment::NewLine);
	rtbreceipt->AppendText("============================================================================== " + Environment::NewLine);

}



private: System::Void btnreset_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void rbstandard_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnclear_Click(System::Object^ sender, System::EventArgs^ e) {
	lblrefno->Text = "";
	lblprice->Text = "";
	lblcc->Text = "";
	lbladult->Text = "";
	lblchild->Text = "";
	lblclass->Text = "";
	lblfrom->Text = "";
	lblto->Text = "";
	lbltotal->Text = "";
	lblroute->Text = "";
	lblsubtotal->Text = "";
	lbltax->Text = "";
	lblticket->Text = "";
}
private: System::Void btnexit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}