#pragma once
#include "Grid.h"

namespace SEGUNDOPROYECTOAnaPaola1084120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Grid* myGrid;
		MyForm(void)
		{
			InitializeComponent();
			myGrid = new Grid();
			myGrid->contador = 0;
			myGrid->inicio = nullptr;
			myGrid->fin = nullptr;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

    private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ TXTinsertarposicion;
	private: System::Windows::Forms::TextBox^ TXTinsertarpesomaximo;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ COMBOinsertartipoproducto;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ COMBOtipoproductoalmacenar;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ TXTpeso_unidad;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ TXTposicionalmacenar;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ TXTcantidadunidades;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ TXTnombreresponsable;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ COMBOdia;
	private: System::Windows::Forms::ComboBox^ COMBOmes;
	private: System::Windows::Forms::ComboBox^ COMBOaño;



	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label27;

	private: System::Windows::Forms::Label^ label11;
	protected:
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TXTinsertarposicion = (gcnew System::Windows::Forms::TextBox());
			this->TXTinsertarpesomaximo = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->COMBOinsertartipoproducto = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->COMBOtipoproductoalmacenar = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TXTpeso_unidad = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TXTposicionalmacenar = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->TXTcantidadunidades = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->TXTnombreresponsable = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->COMBOdia = (gcnew System::Windows::Forms::ComboBox());
			this->COMBOmes = (gcnew System::Windows::Forms::ComboBox());
			this->COMBOaño = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(566, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Posicion a insertar";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// TXTinsertarposicion
			// 
			this->TXTinsertarposicion->Location = System::Drawing::Point(709, 43);
			this->TXTinsertarposicion->Name = L"TXTinsertarposicion";
			this->TXTinsertarposicion->Size = System::Drawing::Size(132, 20);
			this->TXTinsertarposicion->TabIndex = 1;
			// 
			// TXTinsertarpesomaximo
			// 
			this->TXTinsertarpesomaximo->Location = System::Drawing::Point(709, 69);
			this->TXTinsertarpesomaximo->Name = L"TXTinsertarpesomaximo";
			this->TXTinsertarpesomaximo->Size = System::Drawing::Size(132, 20);
			this->TXTinsertarpesomaximo->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(602, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Peso maximo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(576, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Tipo de producto";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(638, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(147, 24);
			this->label4->TabIndex = 6;
			this->label4->Text = L"CREAR BAHIA";
			// 
			// COMBOinsertartipoproducto
			// 
			this->COMBOinsertartipoproducto->FormattingEnabled = true;
			this->COMBOinsertartipoproducto->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ID1", L"ID2", L"ID3" });
			this->COMBOinsertartipoproducto->Location = System::Drawing::Point(709, 96);
			this->COMBOinsertartipoproducto->Name = L"COMBOinsertartipoproducto";
			this->COMBOinsertartipoproducto->Size = System::Drawing::Size(132, 21);
			this->COMBOinsertartipoproducto->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(681, 133);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 26);
			this->button1->TabIndex = 8;
			this->button1->Text = L"INSERTAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 97);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(498, 504);
			this->dataGridView1->TabIndex = 9;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(681, 385);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 26);
			this->button2->TabIndex = 17;
			this->button2->Text = L"INSERTAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// COMBOtipoproductoalmacenar
			// 
			this->COMBOtipoproductoalmacenar->FormattingEnabled = true;
			this->COMBOtipoproductoalmacenar->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ID1", L"ID2", L"ID3" });
			this->COMBOtipoproductoalmacenar->Location = System::Drawing::Point(709, 265);
			this->COMBOtipoproductoalmacenar->Name = L"COMBOtipoproductoalmacenar";
			this->COMBOtipoproductoalmacenar->Size = System::Drawing::Size(132, 21);
			this->COMBOtipoproductoalmacenar->TabIndex = 16;
			this->COMBOtipoproductoalmacenar->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(584, 175);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(257, 24);
			this->label5->TabIndex = 15;
			this->label5->Text = L"ALMACENAR PRODUCTO";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(576, 266);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(127, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Tipo de producto";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// TXTpeso_unidad
			// 
			this->TXTpeso_unidad->Location = System::Drawing::Point(709, 238);
			this->TXTpeso_unidad->Name = L"TXTpeso_unidad";
			this->TXTpeso_unidad->Size = System::Drawing::Size(132, 20);
			this->TXTpeso_unidad->TabIndex = 13;
			this->TXTpeso_unidad->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(581, 239);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(122, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Peso por unidad";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// TXTposicionalmacenar
			// 
			this->TXTposicionalmacenar->Location = System::Drawing::Point(709, 212);
			this->TXTposicionalmacenar->Name = L"TXTposicionalmacenar";
			this->TXTposicionalmacenar->Size = System::Drawing::Size(132, 20);
			this->TXTposicionalmacenar->TabIndex = 11;
			this->TXTposicionalmacenar->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(566, 213);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(137, 16);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Posicion a insertar";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// TXTcantidadunidades
			// 
			this->TXTcantidadunidades->Location = System::Drawing::Point(709, 292);
			this->TXTcantidadunidades->Name = L"TXTcantidadunidades";
			this->TXTcantidadunidades->Size = System::Drawing::Size(132, 20);
			this->TXTcantidadunidades->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(566, 293);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(138, 16);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Cantidad unidades";
			// 
			// TXTnombreresponsable
			// 
			this->TXTnombreresponsable->Location = System::Drawing::Point(709, 318);
			this->TXTnombreresponsable->Name = L"TXTnombreresponsable";
			this->TXTnombreresponsable->Size = System::Drawing::Size(132, 20);
			this->TXTnombreresponsable->TabIndex = 21;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(523, 318);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(180, 16);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Nombre del responsable";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(546, 357);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(136, 16);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Fecha almacenaje";
			// 
			// COMBOdia
			// 
			this->COMBOdia->FormattingEnabled = true;
			this->COMBOdia->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->COMBOdia->Location = System::Drawing::Point(689, 357);
			this->COMBOdia->Name = L"COMBOdia";
			this->COMBOdia->Size = System::Drawing::Size(57, 21);
			this->COMBOdia->TabIndex = 24;
			// 
			// COMBOmes
			// 
			this->COMBOmes->FormattingEnabled = true;
			this->COMBOmes->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->COMBOmes->Location = System::Drawing::Point(752, 357);
			this->COMBOmes->Name = L"COMBOmes";
			this->COMBOmes->Size = System::Drawing::Size(57, 21);
			this->COMBOmes->TabIndex = 25;
			// 
			// COMBOaño
			// 
			this->COMBOaño->FormattingEnabled = true;
			this->COMBOaño->Items->AddRange(gcnew cli::array< System::Object^  >(26) {
				L"2000", L"2001", L"2002", L"2003", L"2004", L"2005",
					L"2006", L"2007", L"2008", L"2009", L"2010", L"2011", L"2012", L"2013", L"2014", L"2015", L"2016", L"2017", L"2018", L"2019",
					L"2020", L"2021", L"2022", L"2023", L"2024", L"2025"
			});
			this->COMBOaño->Location = System::Drawing::Point(815, 357);
			this->COMBOaño->Name = L"COMBOaño";
			this->COMBOaño->Size = System::Drawing::Size(57, 21);
			this->COMBOaño->TabIndex = 26;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(706, 341);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(23, 13);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Dia";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(762, 341);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(27, 13);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Mes";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(830, 341);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(26, 13);
			this->label14->TabIndex = 29;
			this->label14->Text = L"Año";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(113, 8);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(290, 86);
			this->label15->TabIndex = 30;
			this->label15->Text = L"BODEGA";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(610, 429);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(218, 24);
			this->label16->TabIndex = 31;
			this->label16->Text = L"RETIRAR PRODUCTO";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(830, 453);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(26, 13);
			this->label17->TabIndex = 39;
			this->label17->Text = L"Año";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(762, 453);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(27, 13);
			this->label18->TabIndex = 38;
			this->label18->Text = L"Mes";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(706, 453);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(23, 13);
			this->label19->TabIndex = 37;
			this->label19->Text = L"Dia";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(26) {
				L"2000", L"2001", L"2002", L"2003", L"2004", L"2005",
					L"2006", L"2007", L"2008", L"2009", L"2010", L"2011", L"2012", L"2013", L"2014", L"2015", L"2016", L"2017", L"2018", L"2019",
					L"2020", L"2021", L"2022", L"2023", L"2024", L"2025"
			});
			this->comboBox1->Location = System::Drawing::Point(815, 469);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(57, 21);
			this->comboBox1->TabIndex = 36;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->comboBox2->Location = System::Drawing::Point(752, 469);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(57, 21);
			this->comboBox2->TabIndex = 35;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->comboBox3->Location = System::Drawing::Point(689, 469);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(57, 21);
			this->comboBox3->TabIndex = 34;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(566, 474);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(113, 16);
			this->label20->TabIndex = 33;
			this->label20->Text = L"Fecha de retiro";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(681, 575);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 26);
			this->button3->TabIndex = 32;
			this->button3->Text = L"RETIRAR";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ID1", L"ID2", L"ID3" });
			this->comboBox4->Location = System::Drawing::Point(709, 496);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(132, 21);
			this->comboBox4->TabIndex = 41;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(576, 497);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(127, 16);
			this->label21->TabIndex = 40;
			this->label21->Text = L"Tipo de producto";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(709, 523);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 20);
			this->textBox1->TabIndex = 43;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(566, 524);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(138, 16);
			this->label22->TabIndex = 42;
			this->label22->Text = L"Cantidad unidades";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(709, 549);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 20);
			this->textBox2->TabIndex = 45;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(523, 549);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(180, 16);
			this->label23->TabIndex = 44;
			this->label23->Text = L"Nombre del responsable";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(626, 618);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(172, 24);
			this->label24->TabIndex = 46;
			this->label24->Text = L"ELIMINAR BAHIA";
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ID1", L"ID2", L"ID3" });
			this->comboBox5->Location = System::Drawing::Point(709, 645);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(132, 21);
			this->comboBox5->TabIndex = 48;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(576, 646);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(127, 16);
			this->label25->TabIndex = 47;
			this->label25->Text = L"Tipo de producto";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(8, 638);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(240, 24);
			this->label26->TabIndex = 49;
			this->label26->Text = L"OBTENER INVENTARIO";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(76, 676);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 26);
			this->button4->TabIndex = 50;
			this->button4->Text = L"INVENTARIO";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(681, 678);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(85, 26);
			this->button5->TabIndex = 51;
			this->button5->Text = L"ELIMINAR";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(371, 676);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 26);
			this->button6->TabIndex = 53;
			this->button6->Text = L"REGISTRO";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(268, 638);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(299, 24);
			this->label27->TabIndex = 52;
			this->label27->Text = L"REGISTRO DE MOVIMIENTOS";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(878, 749);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->COMBOaño);
			this->Controls->Add(this->COMBOmes);
			this->Controls->Add(this->COMBOdia);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->TXTnombreresponsable);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->TXTcantidadunidades);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->COMBOtipoproductoalmacenar);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->TXTpeso_unidad);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->TXTposicionalmacenar);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->COMBOinsertartipoproducto);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TXTinsertarpesomaximo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TXTinsertarposicion);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			String^ posicion1 = TXTinsertarposicion->Text;//posicion a insertar
			String^ posicionletra = posicion1->Substring(0, 1);
			int posicionnumero = Convert::ToInt32(posicion1->Substring(1, 2));
			int peso_maximo = Convert::ToInt32(TXTinsertarpesomaximo->Text);//dato de peso maximo (bahia)
			int pos = COMBOinsertartipoproducto->SelectedIndex;//posicion del ComboBox que se selecciono
			String^ ID = Convert::ToString(COMBOinsertartipoproducto->Items[pos]);
			Cambio_datos(posicionletra, peso_maximo, ID, posicionnumero);
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Por favor ingresar los dato correctamente, llenando cada uno de los espacios solicitados \nEn posicion ingresar tanto letra como el numero (A01) \nEn peso maximo unicamente numeros \nEn tipo de producto, escoger una de las opciones"
				, "ERROR EN INGRESO DE DATOS"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Error);
		}
	}

	void Cambio_datos(String^ posicion, int peso, String^ ID, int posicionnumero)
    {
		int nueva_posicion;
		int IDnumero;
		//Dependiendo de la posicion llamaremos al ingreso de los datos
		if (posicion == "A" || posicion == "a")
		{
			nueva_posicion = 0;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "B" || posicion == "b")
		{
			nueva_posicion = 1;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "C" || posicion == "c")
		{
			nueva_posicion = 2;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "D" || posicion == "d")
		{
			nueva_posicion = 3;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "E" || posicion == "e")
		{
			nueva_posicion = 4;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "F" || posicion == "f")
		{
			nueva_posicion = 5;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "G" || posicion == "g")
		{
			nueva_posicion = 6;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "H" || posicion == "h")
		{
			nueva_posicion = 7;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "I" || posicion == "i")
		{
			nueva_posicion = 8;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "J" || posicion == "j")
		{
			nueva_posicion = 9;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "K" || posicion == "k")
		{
			nueva_posicion = 10;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "L" || posicion == "l")
		{
			nueva_posicion = 11;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "M" || posicion == "m")
		{
			nueva_posicion = 12;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "N" || posicion == "n")
		{
			nueva_posicion = 13;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "Ñ" || posicion == "ñ")
		{
			nueva_posicion = 14;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "O" || posicion == "o")
		{
			nueva_posicion = 15;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "P" || posicion->Substring(0, 1) == "p")
		{
			nueva_posicion = 16;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "Q" || posicion == "q")
		{
			nueva_posicion = 17;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "R" || posicion == "r")
		{
			nueva_posicion = 18;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "S" || posicion == "s")
		{
			nueva_posicion = 19;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "T" || posicion == "t")
		{
			nueva_posicion = 20;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "U" || posicion == "u")
		{
			nueva_posicion = 21;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "V" || posicion == "v")
		{
			nueva_posicion = 22;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "W" || posicion == "w")
		{
			nueva_posicion = 23;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "X" || posicion == "x")
		{
			nueva_posicion = 24;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "Y" || posicion == "y")
		{
			nueva_posicion = 25;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else if (posicion == "Z" || posicion == "z")
		{
			nueva_posicion = 26;
			if (ID == "ID1")
			{
				IDnumero = 1;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID2")
			{
				IDnumero = 2;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
			else if (ID == "ID3")
			{
				IDnumero = 3;
				Ingreso_datos(nueva_posicion, posicionnumero, peso, IDnumero);
			}
		}
		else 
		{
		 MessageBox::Show("La primera letra de nuestra posicion debe ser unicamente una letra, no numero, ni mas de una letra"
			, "ERROR EN INGRESO DE DATOS"
			, MessageBoxButtons::OK
			, MessageBoxIcon::Error);
		}
		if (posicionnumero > 100)
		{
			MessageBox::Show("La segunda letra de nuestra posicion debe ser unicamente un numero, no letra, ni mayor de 100"
				, "ERROR EN INGRESO DE DATOS"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Error);
		}
	}

	void Ingreso_datos(int numero_letra, int numero_numero, int peso, int ID)
	{
		int peso_unidad = 0;
		String^ nombre = "";
		int cantidad = 0;
		int dia = 0;
		int mes = 0;
		int año = 0;

		if (numero_letra < myGrid->contador)
		{
			myGrid->Elnodo(numero_letra)->nueva_lista->Insertar_al_final(ID, peso, peso_unidad, cantidad, dia, mes, año, nombre);
		}
		else if (numero_letra == 0)
		{
			myGrid->Elnodo(numero_letra)->nueva_lista->Insertar_al_inicio(ID, peso, peso_unidad, cantidad, dia, mes, año, nombre);
		}
		else
		{
			myGrid->Elnodo(numero_letra)->nueva_lista->Insertar_en_posicion(ID, peso, peso_unidad, cantidad, dia, mes, año, nombre, numero_numero);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ posicion = TXTposicionalmacenar->Text;
		String^ letras = posicion->Substring(0, 1);
		int numero_numero = Convert::ToInt32(posicion->Substring(1, 2));
		int numero_letras;
		int index = COMBOtipoproductoalmacenar->SelectedIndex;
		int peso_unidad = Convert::ToInt32(TXTpeso_unidad->Text);
		int cantidad = Convert::ToInt32(TXTcantidadunidades->Text);
		int posiciondia = COMBOdia->SelectedIndex;
		String^ stdia = Convert::ToString(COMBOdia->Items[posiciondia]);
		int posicionmes = COMBOmes->SelectedIndex;
		String^ stmes = Convert::ToString(COMBOdia->Items[posicionmes]);
		int posicionesan = COMBOaño->SelectedIndex;
		String^ stan = Convert::ToString(COMBOdia->Items[posicionesan]);
		String^ nombre = TXTnombreresponsable->Text;
		String^ tipo = Convert::ToString(COMBOtipoproductoalmacenar->Items[index]);
		int tipo_producto;
		//
		int dia = Convert::ToInt32(stdia);
		int mes = Convert::ToInt32(stmes);
		int año = Convert::ToInt32(stan);
		if (letras == "A" || letras == "a")
		{
			numero_letras = 0;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "B"|| letras == "b")
		{
			numero_letras = 1;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "C" || letras == "c")
		{
			numero_letras = 2;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "D" || letras == "d")
		{
			numero_letras = 3;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "E" || letras == "e")
		{
			numero_letras = 4;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "F" || letras == "f")
		{
			numero_letras = 5;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "G" || letras == "g")
		{
			numero_letras = 6;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "H" || letras == "h")
		{
			numero_letras = 7;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "I" || letras == "i")
		{
			numero_letras = 8;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "J" || letras == "j")
		{
			numero_letras = 9;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "K" || letras == "k")
		{
			numero_letras = 10;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "L" || letras == "l")
		{
			numero_letras = 11;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "M" || letras == "m")
		{
			numero_letras = 12;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "N" || letras == "n")
		{
			numero_letras = 13;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "Ñ" || letras == "n")
		{
			numero_letras = 14;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "O" || letras == "o")
		{
			numero_letras = 15;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "P" || letras == "p")
		{
			numero_letras = 16;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "Q" || letras == "q")
		{
			numero_letras = 17;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "R" || letras == "r")
		{
			numero_letras = 18;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "S" || letras == "s")
		{
			numero_letras = 19;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "T" || letras == "t")
		{
			numero_letras = 20;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "U" || letras == "u")
		{
			numero_letras = 21;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "V" || letras == "v")
		{
			numero_letras = 22;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "W" || letras == "w")
		{
			numero_letras = 23;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "X" || letras == "x")
		{
			numero_letras = 24;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "Y" || letras == "y")
		{
			numero_letras = 25;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
		else if (letras == "Z" || letras == "z")
		{
		    numero_letras = 26;
			if (tipo == "ID1")
			{
				tipo_producto = 1;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID2")
			{
				tipo_producto = 2;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
			else if (tipo == "ID3")
			{
				tipo_producto = 3;
				Almacenar_datos(peso_unidad, cantidad, dia, mes, año, nombre, tipo_producto, numero_numero, numero_letras);
			}
		}
	}
	
    void Almacenar_datos(int peso_unidad,int cantidad,int dia,int mes,int año,String^ nombre,int tipo_producto, int numero_numero, int numero_letra)
    {
		if (tipo_producto == 1)
		{
			if (numero_letra == 0)
			{
				myGrid->Elnodo(numero_letra)->nueva_lista->Insertar_al_inicio(tipo_producto, peso, peso_unidad, cantidad, dia, mes, año, nombre);
			}
		}
		else if (tipo_producto == 2)
		{
			if (numero_letra < myGrid->contador)
			{
				myGrid->Elnodo(numero_letra)->nueva_lista->Insertar_en_posicion(tipo_producto, peso, peso_unidad, cantidad, dia, mes, año, nombre, numero_numero);
			}
		}
		else if (tipo_producto == 3)
		{
			if (numero_letra < myGrid->contador)
			{
				myGrid->Elnodo(numero_letra)->nueva_lista->Insertar_al_final(tipo_producto, peso, peso_unidad, cantidad, dia, mes, año, nombre);
			}
		}
	}

private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
