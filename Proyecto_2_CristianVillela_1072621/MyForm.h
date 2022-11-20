#pragma once
#include "Bodega.h"
#include "Producto.h"

namespace Proyecto2CristianVillela1072621 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}


		Bodega^ BodegaP = gcnew Bodega();
		Bahia^ GuardarInfo;
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cmbopciones;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ gpbahia;
	private: System::Windows::Forms::CheckBox^ cbmaterialconstruccion;
	private: System::Windows::Forms::CheckBox^ cbropa;
	private: System::Windows::Forms::CheckBox^ cbarticulosoficiona;
	private: System::Windows::Forms::TextBox^ txtpesomax;
	private: System::Windows::Forms::TextBox^ txtcolumna;
	private: System::Windows::Forms::TextBox^ txtfila;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ gpalmacenar;
	private: System::Windows::Forms::TextBox^ txtresponsable;

	private: System::Windows::Forms::TextBox^ txtcolumnaalmacenar;

	private: System::Windows::Forms::TextBox^ txtfilaalmacenar;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtcantidaddeunidades;

	private: System::Windows::Forms::TextBox^ txtpesounitario;

	private: System::Windows::Forms::TextBox^ txttipodeproducto;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ gpretirarproducto;



	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ txtcantidadretirar;

	private: System::Windows::Forms::TextBox^ txtidretirarproducto;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ txtbahiaencontrada;

	private: System::Windows::Forms::GroupBox^ gpretirarbahia;
	private: System::Windows::Forms::TextBox^ txtcolumnabahiaretirar;





	private: System::Windows::Forms::TextBox^ txtfilabahiaretirar;


	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ txtifnoproduct;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ txtColumnaretirar;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ txtfilaretirar;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ btagregar;
	private: System::Windows::Forms::Button^ bteliminarproducto;
	private: System::Windows::Forms::Button^ btbuscarproducto;
	private: System::Windows::Forms::Button^ bteliminarbahia;
	private: System::Windows::Forms::Button^ btbuscarbahia;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ btagregarproducto;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->cmbopciones = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gpbahia = (gcnew System::Windows::Forms::GroupBox());
			this->cbmaterialconstruccion = (gcnew System::Windows::Forms::CheckBox());
			this->cbropa = (gcnew System::Windows::Forms::CheckBox());
			this->cbarticulosoficiona = (gcnew System::Windows::Forms::CheckBox());
			this->txtpesomax = (gcnew System::Windows::Forms::TextBox());
			this->btagregar = (gcnew System::Windows::Forms::Button());
			this->txtcolumna = (gcnew System::Windows::Forms::TextBox());
			this->txtfila = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->gpalmacenar = (gcnew System::Windows::Forms::GroupBox());
			this->btagregarproducto = (gcnew System::Windows::Forms::Button());
			this->txtresponsable = (gcnew System::Windows::Forms::TextBox());
			this->txtcolumnaalmacenar = (gcnew System::Windows::Forms::TextBox());
			this->txtfilaalmacenar = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtcantidaddeunidades = (gcnew System::Windows::Forms::TextBox());
			this->txtpesounitario = (gcnew System::Windows::Forms::TextBox());
			this->txttipodeproducto = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->gpretirarproducto = (gcnew System::Windows::Forms::GroupBox());
			this->bteliminarbahia = (gcnew System::Windows::Forms::Button());
			this->btbuscarbahia = (gcnew System::Windows::Forms::Button());
			this->txtColumnaretirar = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->txtfilaretirar = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->txtcantidadretirar = (gcnew System::Windows::Forms::TextBox());
			this->txtidretirarproducto = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->bteliminarproducto = (gcnew System::Windows::Forms::Button());
			this->btbuscarproducto = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->txtbahiaencontrada = (gcnew System::Windows::Forms::TextBox());
			this->gpretirarbahia = (gcnew System::Windows::Forms::GroupBox());
			this->txtcolumnabahiaretirar = (gcnew System::Windows::Forms::TextBox());
			this->txtfilabahiaretirar = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txtifnoproduct = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->gpbahia->SuspendLayout();
			this->gpalmacenar->SuspendLayout();
			this->gpretirarproducto->SuspendLayout();
			this->gpretirarbahia->SuspendLayout();
			this->SuspendLayout();
			// 
			// cmbopciones
			// 
			this->cmbopciones->FormattingEnabled = true;
			this->cmbopciones->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Agregar Bahía", L"Agregar  Producto" });
			this->cmbopciones->Location = System::Drawing::Point(329, 12);
			this->cmbopciones->Name = L"cmbopciones";
			this->cmbopciones->Size = System::Drawing::Size(148, 21);
			this->cmbopciones->TabIndex = 0;
			this->cmbopciones->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cmbopciones_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(268, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Opciones";
			// 
			// gpbahia
			// 
			this->gpbahia->Controls->Add(this->cbmaterialconstruccion);
			this->gpbahia->Controls->Add(this->cbropa);
			this->gpbahia->Controls->Add(this->cbarticulosoficiona);
			this->gpbahia->Controls->Add(this->txtpesomax);
			this->gpbahia->Controls->Add(this->btagregar);
			this->gpbahia->Controls->Add(this->txtcolumna);
			this->gpbahia->Controls->Add(this->txtfila);
			this->gpbahia->Controls->Add(this->label4);
			this->gpbahia->Controls->Add(this->label3);
			this->gpbahia->Controls->Add(this->label2);
			this->gpbahia->Enabled = false;
			this->gpbahia->Location = System::Drawing::Point(20, 47);
			this->gpbahia->Name = L"gpbahia";
			this->gpbahia->Size = System::Drawing::Size(317, 152);
			this->gpbahia->TabIndex = 2;
			this->gpbahia->TabStop = false;
			this->gpbahia->Text = L"Crear Bahía";
			// 
			// cbmaterialconstruccion
			// 
			this->cbmaterialconstruccion->AutoSize = true;
			this->cbmaterialconstruccion->Location = System::Drawing::Point(166, 86);
			this->cbmaterialconstruccion->Name = L"cbmaterialconstruccion";
			this->cbmaterialconstruccion->Size = System::Drawing::Size(143, 17);
			this->cbmaterialconstruccion->TabIndex = 8;
			this->cbmaterialconstruccion->Text = L"Material de Construccion\r\n";
			this->cbmaterialconstruccion->UseVisualStyleBackColor = true;
			// 
			// cbropa
			// 
			this->cbropa->AutoSize = true;
			this->cbropa->Location = System::Drawing::Point(166, 63);
			this->cbropa->Name = L"cbropa";
			this->cbropa->Size = System::Drawing::Size(52, 17);
			this->cbropa->TabIndex = 7;
			this->cbropa->Text = L"Ropa";
			this->cbropa->UseVisualStyleBackColor = true;
			// 
			// cbarticulosoficiona
			// 
			this->cbarticulosoficiona->AutoSize = true;
			this->cbarticulosoficiona->Location = System::Drawing::Point(166, 40);
			this->cbarticulosoficiona->Name = L"cbarticulosoficiona";
			this->cbarticulosoficiona->Size = System::Drawing::Size(124, 17);
			this->cbarticulosoficiona->TabIndex = 6;
			this->cbarticulosoficiona->Text = L"Material Para Oficina";
			this->cbarticulosoficiona->UseVisualStyleBackColor = true;
			// 
			// txtpesomax
			// 
			this->txtpesomax->Location = System::Drawing::Point(9, 118);
			this->txtpesomax->Name = L"txtpesomax";
			this->txtpesomax->Size = System::Drawing::Size(120, 20);
			this->txtpesomax->TabIndex = 5;
			// 
			// btagregar
			// 
			this->btagregar->Location = System::Drawing::Point(187, 112);
			this->btagregar->Name = L"btagregar";
			this->btagregar->Size = System::Drawing::Size(81, 34);
			this->btagregar->TabIndex = 14;
			this->btagregar->Text = L"Agregar";
			this->btagregar->UseVisualStyleBackColor = true;
			this->btagregar->Click += gcnew System::EventHandler(this, &MyForm::btagregar_Click);
			// 
			// txtcolumna
			// 
			this->txtcolumna->Location = System::Drawing::Point(9, 79);
			this->txtcolumna->Name = L"txtcolumna";
			this->txtcolumna->Size = System::Drawing::Size(120, 20);
			this->txtcolumna->TabIndex = 4;
			// 
			// txtfila
			// 
			this->txtfila->Location = System::Drawing::Point(9, 40);
			this->txtfila->Name = L"txtfila";
			this->txtfila->Size = System::Drawing::Size(120, 20);
			this->txtfila->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 102);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Peso Maximo de la Bahia";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Columna";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Fila ";
			// 
			// gpalmacenar
			// 
			this->gpalmacenar->Controls->Add(this->btagregarproducto);
			this->gpalmacenar->Controls->Add(this->txtresponsable);
			this->gpalmacenar->Controls->Add(this->txtcolumnaalmacenar);
			this->gpalmacenar->Controls->Add(this->txtfilaalmacenar);
			this->gpalmacenar->Controls->Add(this->label8);
			this->gpalmacenar->Controls->Add(this->label9);
			this->gpalmacenar->Controls->Add(this->label10);
			this->gpalmacenar->Controls->Add(this->txtcantidaddeunidades);
			this->gpalmacenar->Controls->Add(this->txtpesounitario);
			this->gpalmacenar->Controls->Add(this->txttipodeproducto);
			this->gpalmacenar->Controls->Add(this->label5);
			this->gpalmacenar->Controls->Add(this->label6);
			this->gpalmacenar->Controls->Add(this->label7);
			this->gpalmacenar->Enabled = false;
			this->gpalmacenar->Location = System::Drawing::Point(467, 47);
			this->gpalmacenar->Name = L"gpalmacenar";
			this->gpalmacenar->Size = System::Drawing::Size(346, 152);
			this->gpalmacenar->TabIndex = 9;
			this->gpalmacenar->TabStop = false;
			this->gpalmacenar->Text = L"Almacenar Producto";
			this->gpalmacenar->Enter += gcnew System::EventHandler(this, &MyForm::gpalmacenar_Enter);
			// 
			// btagregarproducto
			// 
			this->btagregarproducto->Location = System::Drawing::Point(278, 81);
			this->btagregarproducto->Name = L"btagregarproducto";
			this->btagregarproducto->Size = System::Drawing::Size(64, 57);
			this->btagregarproducto->TabIndex = 15;
			this->btagregarproducto->Text = L"Agregar";
			this->btagregarproducto->UseVisualStyleBackColor = true;
			this->btagregarproducto->Click += gcnew System::EventHandler(this, &MyForm::btagregarproducto_Click);
			// 
			// txtresponsable
			// 
			this->txtresponsable->Location = System::Drawing::Point(149, 118);
			this->txtresponsable->Name = L"txtresponsable";
			this->txtresponsable->Size = System::Drawing::Size(120, 20);
			this->txtresponsable->TabIndex = 11;
			this->txtresponsable->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// txtcolumnaalmacenar
			// 
			this->txtcolumnaalmacenar->Location = System::Drawing::Point(149, 79);
			this->txtcolumnaalmacenar->Name = L"txtcolumnaalmacenar";
			this->txtcolumnaalmacenar->Size = System::Drawing::Size(120, 20);
			this->txtcolumnaalmacenar->TabIndex = 10;
			this->txtcolumnaalmacenar->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// txtfilaalmacenar
			// 
			this->txtfilaalmacenar->Location = System::Drawing::Point(149, 40);
			this->txtfilaalmacenar->Name = L"txtfilaalmacenar";
			this->txtfilaalmacenar->Size = System::Drawing::Size(120, 20);
			this->txtfilaalmacenar->TabIndex = 9;
			this->txtfilaalmacenar->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(146, 102);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(126, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Nombre del Responsable";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(146, 63);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(48, 13);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Columna";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(146, 26);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(23, 13);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Fila";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// txtcantidaddeunidades
			// 
			this->txtcantidaddeunidades->Location = System::Drawing::Point(9, 118);
			this->txtcantidaddeunidades->Name = L"txtcantidaddeunidades";
			this->txtcantidaddeunidades->Size = System::Drawing::Size(120, 20);
			this->txtcantidaddeunidades->TabIndex = 5;
			// 
			// txtpesounitario
			// 
			this->txtpesounitario->Location = System::Drawing::Point(9, 79);
			this->txtpesounitario->Name = L"txtpesounitario";
			this->txtpesounitario->Size = System::Drawing::Size(120, 20);
			this->txtpesounitario->TabIndex = 4;
			// 
			// txttipodeproducto
			// 
			this->txttipodeproducto->Location = System::Drawing::Point(9, 40);
			this->txttipodeproducto->Name = L"txttipodeproducto";
			this->txttipodeproducto->Size = System::Drawing::Size(120, 20);
			this->txttipodeproducto->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Cantidad de Unidades";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 63);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Peso Unitario";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 26);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(88, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"ID\'s del Producto";
			// 
			// gpretirarproducto
			// 
			this->gpretirarproducto->Controls->Add(this->bteliminarbahia);
			this->gpretirarproducto->Controls->Add(this->txtColumnaretirar);
			this->gpretirarproducto->Controls->Add(this->btbuscarproducto);
			this->gpretirarproducto->Controls->Add(this->label21);
			this->gpretirarproducto->Controls->Add(this->txtfilaretirar);
			this->gpretirarproducto->Controls->Add(this->label13);
			this->gpretirarproducto->Controls->Add(this->label20);
			this->gpretirarproducto->Controls->Add(this->textBox1);
			this->gpretirarproducto->Controls->Add(this->txtcantidadretirar);
			this->gpretirarproducto->Controls->Add(this->txtidretirarproducto);
			this->gpretirarproducto->Controls->Add(this->label11);
			this->gpretirarproducto->Controls->Add(this->label12);
			this->gpretirarproducto->Enabled = false;
			this->gpretirarproducto->Location = System::Drawing::Point(456, 436);
			this->gpretirarproducto->Name = L"gpretirarproducto";
			this->gpretirarproducto->Size = System::Drawing::Size(317, 162);
			this->gpretirarproducto->TabIndex = 9;
			this->gpretirarproducto->TabStop = false;
			this->gpretirarproducto->Text = L"Retirar Producto";
			// 
			// bteliminarbahia
			// 
			this->bteliminarbahia->Location = System::Drawing::Point(166, 128);
			this->bteliminarbahia->Name = L"bteliminarbahia";
			this->bteliminarbahia->Size = System::Drawing::Size(120, 23);
			this->bteliminarbahia->TabIndex = 22;
			this->bteliminarbahia->Text = L"Eliminar";
			this->bteliminarbahia->UseVisualStyleBackColor = true;
			this->bteliminarbahia->Click += gcnew System::EventHandler(this, &MyForm::bteliminarbahia_Click);
			// 
			// btbuscarbahia
			// 
			this->btbuscarbahia->Location = System::Drawing::Point(177, 40);
			this->btbuscarbahia->Name = L"btbuscarbahia";
			this->btbuscarbahia->Size = System::Drawing::Size(120, 23);
			this->btbuscarbahia->TabIndex = 21;
			this->btbuscarbahia->Text = L"Buscar";
			this->btbuscarbahia->UseVisualStyleBackColor = true;
			this->btbuscarbahia->Click += gcnew System::EventHandler(this, &MyForm::btbuscarbahia_Click);
			// 
			// txtColumnaretirar
			// 
			this->txtColumnaretirar->Location = System::Drawing::Point(166, 79);
			this->txtColumnaretirar->Name = L"txtColumnaretirar";
			this->txtColumnaretirar->Size = System::Drawing::Size(120, 20);
			this->txtColumnaretirar->TabIndex = 12;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(163, 65);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(48, 13);
			this->label21->TabIndex = 11;
			this->label21->Text = L"Columna";
			// 
			// txtfilaretirar
			// 
			this->txtfilaretirar->Location = System::Drawing::Point(166, 40);
			this->txtfilaretirar->Name = L"txtfilaretirar";
			this->txtfilaretirar->Size = System::Drawing::Size(120, 20);
			this->txtfilaretirar->TabIndex = 10;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(163, 26);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(26, 13);
			this->label13->TabIndex = 9;
			this->label13->Text = L"Fila ";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(6, 24);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(88, 13);
			this->label20->TabIndex = 9;
			this->label20->Text = L"ID\'s del Producto";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(9, 118);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 20);
			this->textBox1->TabIndex = 5;
			// 
			// txtcantidadretirar
			// 
			this->txtcantidadretirar->Location = System::Drawing::Point(9, 79);
			this->txtcantidadretirar->Name = L"txtcantidadretirar";
			this->txtcantidadretirar->Size = System::Drawing::Size(120, 20);
			this->txtcantidadretirar->TabIndex = 4;
			// 
			// txtidretirarproducto
			// 
			this->txtidretirarproducto->Location = System::Drawing::Point(9, 40);
			this->txtidretirarproducto->Name = L"txtidretirarproducto";
			this->txtidretirarproducto->Size = System::Drawing::Size(120, 20);
			this->txtidretirarproducto->TabIndex = 3;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 102);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(126, 13);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Nombre del Responsable";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 63);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(92, 13);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Cantidad a Retirar";
			// 
			// bteliminarproducto
			// 
			this->bteliminarproducto->Location = System::Drawing::Point(177, 118);
			this->bteliminarproducto->Name = L"bteliminarproducto";
			this->bteliminarproducto->Size = System::Drawing::Size(120, 23);
			this->bteliminarproducto->TabIndex = 20;
			this->bteliminarproducto->Text = L"Eliminar";
			this->bteliminarproducto->UseVisualStyleBackColor = true;
			this->bteliminarproducto->Click += gcnew System::EventHandler(this, &MyForm::bteliminarproducto_Click);
			// 
			// btbuscarproducto
			// 
			this->btbuscarproducto->Location = System::Drawing::Point(166, 97);
			this->btbuscarproducto->Name = L"btbuscarproducto";
			this->btbuscarproducto->Size = System::Drawing::Size(120, 23);
			this->btbuscarproducto->TabIndex = 19;
			this->btbuscarproducto->Text = L"Buscar";
			this->btbuscarproducto->UseVisualStyleBackColor = true;
			this->btbuscarproducto->Click += gcnew System::EventHandler(this, &MyForm::btbuscarproducto_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(20, 224);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(170, 182);
			this->textBox4->TabIndex = 10;
			// 
			// txtbahiaencontrada
			// 
			this->txtbahiaencontrada->Location = System::Drawing::Point(18, 616);
			this->txtbahiaencontrada->Multiline = true;
			this->txtbahiaencontrada->Name = L"txtbahiaencontrada";
			this->txtbahiaencontrada->Size = System::Drawing::Size(170, 182);
			this->txtbahiaencontrada->TabIndex = 11;
			// 
			// gpretirarbahia
			// 
			this->gpretirarbahia->Controls->Add(this->bteliminarproducto);
			this->gpretirarbahia->Controls->Add(this->btbuscarbahia);
			this->gpretirarbahia->Controls->Add(this->txtcolumnabahiaretirar);
			this->gpretirarbahia->Controls->Add(this->txtfilabahiaretirar);
			this->gpretirarbahia->Controls->Add(this->label15);
			this->gpretirarbahia->Controls->Add(this->label16);
			this->gpretirarbahia->Enabled = false;
			this->gpretirarbahia->Location = System::Drawing::Point(20, 446);
			this->gpretirarbahia->Name = L"gpretirarbahia";
			this->gpretirarbahia->Size = System::Drawing::Size(317, 152);
			this->gpretirarbahia->TabIndex = 10;
			this->gpretirarbahia->TabStop = false;
			this->gpretirarbahia->Text = L"Retirar Bahía";
			// 
			// txtcolumnabahiaretirar
			// 
			this->txtcolumnabahiaretirar->Location = System::Drawing::Point(9, 118);
			this->txtcolumnabahiaretirar->Name = L"txtcolumnabahiaretirar";
			this->txtcolumnabahiaretirar->Size = System::Drawing::Size(120, 20);
			this->txtcolumnabahiaretirar->TabIndex = 4;
			// 
			// txtfilabahiaretirar
			// 
			this->txtfilabahiaretirar->Location = System::Drawing::Point(9, 40);
			this->txtfilabahiaretirar->Name = L"txtfilabahiaretirar";
			this->txtfilabahiaretirar->Size = System::Drawing::Size(120, 20);
			this->txtfilabahiaretirar->TabIndex = 3;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 102);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(48, 13);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Columna";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 26);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(26, 13);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Fila ";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(603, 616);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(170, 182);
			this->textBox9->TabIndex = 12;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(42, 208);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(120, 13);
			this->label17->TabIndex = 9;
			this->label17->Text = L"Informacion de la Bahía";
			// 
			// txtifnoproduct
			// 
			this->txtifnoproduct->Location = System::Drawing::Point(207, 616);
			this->txtifnoproduct->Multiline = true;
			this->txtifnoproduct->Name = L"txtifnoproduct";
			this->txtifnoproduct->Size = System::Drawing::Size(170, 182);
			this->txtifnoproduct->TabIndex = 13;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(550, 293);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 13);
			this->label18->TabIndex = 9;
			this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(291, 345);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(0, 13);
			this->label19->TabIndex = 12;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(42, 601);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(120, 13);
			this->label14->TabIndex = 15;
			this->label14->Text = L"Informacion de la Bahía";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(216, 601);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(144, 13);
			this->label22->TabIndex = 16;
			this->label22->Text = L"Informacion de los Productos\r\n";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(624, 601);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(125, 13);
			this->label23->TabIndex = 17;
			this->label23->Text = L"Informacion del Producto\r\n";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(603, 225);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(170, 182);
			this->textBox2->TabIndex = 18;
			this->textBox2->Text = L"          \r\n\r\n         ID\'s de lo Productos\r\n\r\n\r\n1. Material para Oficina\r\n2. Rop"
				L"a\r\n3. Material de Construccion\r\n";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(841, 835);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->txtifnoproduct);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->gpretirarbahia);
			this->Controls->Add(this->txtbahiaencontrada);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->gpretirarproducto);
			this->Controls->Add(this->gpalmacenar);
			this->Controls->Add(this->gpbahia);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmbopciones);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->gpbahia->ResumeLayout(false);
			this->gpbahia->PerformLayout();
			this->gpalmacenar->ResumeLayout(false);
			this->gpalmacenar->PerformLayout();
			this->gpretirarproducto->ResumeLayout(false);
			this->gpretirarproducto->PerformLayout();
			this->gpretirarbahia->ResumeLayout(false);
			this->gpretirarbahia->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void gpalmacenar_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void btagregar_Click(System::Object^ sender, System::EventArgs^ e) 

{
	int cantMax, IdB,columnaB;
	char FilaB;
	gpretirarbahia->Enabled = true;
	FilaB = Convert::ToChar(txtfila->Text);
	columnaB = Convert::ToInt16(txtcolumna->Text);
	Bahia^ Ba = BodegaP->busquedaP(FilaB, columnaB);
	cantMax = Convert::ToInt16(txtpesomax->Text);
	if (cbarticulosoficiona->Checked && cbropa->Checked && cbmaterialconstruccion->Checked) {
		IdB = 4;
	}
	else if (cbarticulosoficiona->Checked && cbropa->Checked) {
		IdB = 5;
	}
	else if (cbropa->Checked && cbmaterialconstruccion->Checked) {
		IdB = 6;
	}
	else if (cbarticulosoficiona->Checked && cbmaterialconstruccion->Checked) {
		IdB = 7;
	}
	else if (cbarticulosoficiona->Checked)
		IdB = 1;
	else if (cbropa->Checked)
		IdB = 2;
	else if (cbmaterialconstruccion->Checked)
		IdB = 3;
	else {
		IdB = 4;
		MessageBox::Show("Al no seleccionar ninguna opcion la bahia aceptara todas");
	}
	if (Ba = nullptr)
	{
		BodegaP->AgregarB(cantMax, IdB, FilaB, columnaB);
		MessageBox::Show("Bahia Creada");
	}
	else
	{
		MessageBox::Show("La bahia ya existe");
	}
}
private: System::Void cmbopciones_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (cmbopciones->SelectedIndex == 0)
	{
		gpbahia->Enabled = true;
		gpalmacenar->Enabled = false;
	}
	else if ( cmbopciones->SelectedIndex == 1)
	{
		gpbahia->Enabled = false;
		gpalmacenar->Enabled = true;
	}
}
private: System::Void btagregarproducto_Click(System::Object^ sender, System::EventArgs^ e)
{
	gpretirarproducto->Enabled = true;
	DateTime dia;
		if (txtcantidaddeunidades->Text != "") {
			int cantiP = Convert::ToInt16(txtcantidaddeunidades->Text);
			if (txtfilaalmacenar->Text == "" || txtcolumnaalmacenar->Text == "") {
				Bahia^ BP = BodegaP->busquedaP(Convert::ToInt16(txttipodeproducto->Text), Convert::ToInt16(txtpesounitario->Text));
				for (int i = 0; i < cantiP; i++)
				{
					dia = DateTime::Now;
					Producto^ P1 = gcnew Producto(Convert::ToInt16(txttipodeproducto->Text), Convert::ToInt16(txtpesounitario->Text), txtresponsable->Text, Convert::ToString(dia));
					if (!BP->MeterProdu(P1)) {
						BP = BodegaP->busquedaP(Convert::ToInt16(txttipodeproducto->Text), Convert::ToInt16(txtpesounitario->Text));
						if (BP == nullptr) {
							MessageBox::Show("Se ingresaron " + i );
							break;
						}
						BP->MeterProdu(P1);
					}
				}
			}
			else {
				Bahia^ B1 = BodegaP->busquedaP(Convert::ToChar(txtfilaalmacenar->Text), Convert::ToInt16(txtcolumnaalmacenar->Text));
				for (int i = 1; i <= cantiP; i++)
				{
					dia = DateTime::Now;
					Producto^ P1 = gcnew Producto(Convert::ToInt16(txttipodeproducto->Text), Convert::ToInt16(txtpesounitario->Text), txtresponsable->Text, Convert::ToString(dia));
					if (!B1->MeterProdu(P1)) {
						B1 = BodegaP->busquedaP(Convert::ToInt16(txttipodeproducto->Text), Convert::ToInt16(txtpesounitario->Text));
						if (B1 == nullptr) {
							MessageBox::Show("Se pudieron ingrsar " + (i - 1) );
							break;
						}
						B1->MeterProdu(P1);
						Bahia^ B1 = BodegaP->busquedaP(Convert::ToChar(txtfilaalmacenar->Text), Convert::ToInt16(txtcolumnaalmacenar->Text));
					}
				}
			}
		}
		else {
			if (txtfilaalmacenar->Text == "" || txtcolumnaalmacenar->Text == "") {
				Bahia^ BP = BodegaP->busquedaP(Convert::ToInt16(txttipodeproducto->Text), Convert::ToInt16(txtpesounitario->Text));
				Producto^ PP = gcnew Producto(Convert::ToInt16(txttipodeproducto->Text), Convert::ToInt16(txtpesounitario->Text), txtresponsable->Text, Convert::ToString(dia));
				if (!BP->MeterProdu(PP)) {
					BP = BodegaP->busquedaP(Convert::ToInt16(txttipodeproducto->Text), Convert::ToInt16(txtpesounitario->Text));
					if (BP == nullptr) {
						MessageBox::Show("No se pudieron ingrsar Por falta de Bahias de este tipo");
					}
					else {
						BP->MeterProdu(PP);
					}
				}
				else if (BP == nullptr) {
					MessageBox::Show("No se pudieron ingrsar Por falta de Bahias de este tipo");
				}
			}
			else {
				Bahia^ BP = BodegaP->busquedaP(Convert::ToChar(txtfilaalmacenar->Text), Convert::ToInt16(txtcolumnaalmacenar->Text));
				Producto^ PP = gcnew Producto(Convert::ToInt16(txttipodeproducto->Text), Convert::ToInt16(txtpesounitario->Text), txtresponsable->Text, Convert::ToString(dia));
				if (!BP->MeterProdu(PP)) {
					BP = BodegaP->busquedaP(Convert::ToInt16(txttipodeproducto->Text), Convert::ToInt16(txtpesounitario->Text));
					if (BP == nullptr) {
						MessageBox::Show("No se pudo ingrsar.\nBahias sin espacio para este articulo");
					}
					else {
						BP->MeterProdu(PP);
					}
				}
			}
		}
	






}
private: System::Void btbuscarbahia_Click(System::Object^ sender, System::EventArgs^ e) {

	if (GuardarInfo != nullptr)
	{
		GuardarInfo = nullptr;
	}
	char Filp;
	int ColumnaP;

		Filp = Convert::ToChar(txtfilabahiaretirar->Text);
		ColumnaP = Convert::ToInt16(txtcolumnabahiaretirar->Text);
	
	
	
	if (Filp != NULL && ColumnaP != NULL)
	{
		GuardarInfo = BodegaP->busquedaP(Filp, ColumnaP);
		if (GuardarInfo != nullptr) {
			String^ contenido = GuardarInfo->retornarContenido();
			txtbahiaencontrada->Text = contenido;
			contenido = GuardarInfo->retornarProductoInfo();
			txtifnoproduct->Text = contenido;
		}
		else {
			MessageBox::Show("la bahia que busca no se encuentra en el sistema.");
		}


	}


}
private: System::Void bteliminarproducto_Click(System::Object^ sender, System::EventArgs^ e) 
{

	
		if (GuardarInfo->Bactiva.Cabeza != nullptr) {
			int contPro = GuardarInfo->CantProducots();
			for (int i = 0; i < contPro; i++) {
				Producto^ Mover = GuardarInfo->RetornarPrimerPro();
				
			}
			if (GuardarInfo->Bactiva.Cabeza == nullptr) {
				BodegaP->eliminarB(GuardarInfo);
				MessageBox::Show("se elimino la bahia  " + Convert::ToString(GuardarInfo->RetornarubiColumna()) + "," + Convert::ToString(GuardarInfo->RetornarUbiFila()) );
			}
		
		else {
			BodegaP->eliminarB(GuardarInfo);
			MessageBox::Show("Bahia " + Convert::ToString(GuardarInfo->RetornarubiColumna()) + "," + Convert::ToString(GuardarInfo->RetornarUbiFila()) );
		}
	}
}//elimina bahia




private: System::Void bteliminarbahia_Click(System::Object^ sender, System::EventArgs^ e) {

	int idb;
	int cantu = Convert::ToInt16(txtcantidadretirar->Text);
	char filaBP = Convert::ToChar(txtfilaretirar->Text);
	int columnaBP = Convert::ToInt16(txtColumnaretirar->Text);
	idb = Convert::ToInt16(txtidretirarproducto->Text);

	if ("" != txtfilaretirar->Text && txtColumnaretirar->Text != "") {
		filaBP = Convert::ToChar(txtfilaretirar->Text);
		columnaBP = Convert::ToInt16(txtColumnaretirar->Text);
		GuardarInfo = BodegaP->busquedaP(filaBP, columnaBP);
	}
	else {
		GuardarInfo = BodegaP->busquedaP(idb, 65);
	}
	try {

		textBox9->Text = GuardarInfo->retornarinfoproduc(idb);
	}
	catch (...) {

	}
	for (int i = 0; i < cantu; i++)
	{
		GuardarInfo->quitarunproducto(idb);
	}

}
private: System::Void btbuscarproducto_Click(System::Object^ sender, System::EventArgs^ e) {
	int idb;
	int cantu = Convert::ToInt16(txtcantidadretirar->Text);
	char filaBP = Convert::ToChar(txtfilaretirar->Text);
	int columnaBP = Convert::ToInt16(txtColumnaretirar->Text);
	idb = Convert::ToInt16(txtidretirarproducto->Text);

	GuardarInfo = BodegaP->busquedaid(columnaBP, filaBP);
	textBox9->Text = GuardarInfo->retornarinfoproduc(idb);



}
};
}
