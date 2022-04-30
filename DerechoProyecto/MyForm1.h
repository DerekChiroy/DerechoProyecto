#pragma once
#include "MyForm2.h"
namespace DerechoProyecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ U;
	private: System::Windows::Forms::TextBox^ IngresoUsuario;
	private: System::Windows::Forms::TextBox^ IngresoCorreo;
	private: System::Windows::Forms::TextBox^ IngresoContra;
	private: System::Windows::Forms::Label^ Solicitud;
	private: System::Windows::Forms::Label^ Usuario;
	private: System::Windows::Forms::Label^ Correo;
	private: System::Windows::Forms::Label^ Contraseña;
	private: System::Windows::Forms::Button^ Ingreso;



	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->U = (gcnew System::Windows::Forms::Label());
			this->IngresoUsuario = (gcnew System::Windows::Forms::TextBox());
			this->IngresoCorreo = (gcnew System::Windows::Forms::TextBox());
			this->IngresoContra = (gcnew System::Windows::Forms::TextBox());
			this->Solicitud = (gcnew System::Windows::Forms::Label());
			this->Usuario = (gcnew System::Windows::Forms::Label());
			this->Correo = (gcnew System::Windows::Forms::Label());
			this->Contraseña = (gcnew System::Windows::Forms::Label());
			this->Ingreso = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// U
			// 
			this->U->AutoSize = true;
			this->U->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->U->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->U->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->U->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->U->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->U->Location = System::Drawing::Point(130, 48);
			this->U->Name = L"U";
			this->U->Size = System::Drawing::Size(207, 30);
			this->U->TabIndex = 0;
			this->U->Text = L"Universidad Acceso";
			this->U->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// IngresoUsuario
			// 
			this->IngresoUsuario->Location = System::Drawing::Point(150, 145);
			this->IngresoUsuario->Name = L"IngresoUsuario";
			this->IngresoUsuario->Size = System::Drawing::Size(167, 20);
			this->IngresoUsuario->TabIndex = 1;
			this->IngresoUsuario->TextChanged += gcnew System::EventHandler(this, &MyForm1::IngresoUsuario_TextChanged);
			// 
			// IngresoCorreo
			// 
			this->IngresoCorreo->Location = System::Drawing::Point(150, 210);
			this->IngresoCorreo->Name = L"IngresoCorreo";
			this->IngresoCorreo->Size = System::Drawing::Size(167, 20);
			this->IngresoCorreo->TabIndex = 2;
			// 
			// IngresoContra
			// 
			this->IngresoContra->Location = System::Drawing::Point(150, 284);
			this->IngresoContra->Name = L"IngresoContra";
			this->IngresoContra->Size = System::Drawing::Size(167, 20);
			this->IngresoContra->TabIndex = 3;
			// 
			// Solicitud
			// 
			this->Solicitud->AutoSize = true;
			this->Solicitud->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Solicitud->ForeColor = System::Drawing::Color::White;
			this->Solicitud->Location = System::Drawing::Point(183, 93);
			this->Solicitud->Name = L"Solicitud";
			this->Solicitud->Size = System::Drawing::Size(105, 13);
			this->Solicitud->TabIndex = 4;
			this->Solicitud->Text = L"Por favor Ingrese su:";
			// 
			// Usuario
			// 
			this->Usuario->AutoSize = true;
			this->Usuario->Location = System::Drawing::Point(211, 168);
			this->Usuario->Name = L"Usuario";
			this->Usuario->Size = System::Drawing::Size(43, 13);
			this->Usuario->TabIndex = 5;
			this->Usuario->Text = L"Usuario";
			// 
			// Correo
			// 
			this->Correo->AutoSize = true;
			this->Correo->Location = System::Drawing::Point(194, 233);
			this->Correo->Name = L"Correo";
			this->Correo->Size = System::Drawing::Size(94, 13);
			this->Correo->TabIndex = 6;
			this->Correo->Text = L"Correo Electronico";
			// 
			// Contraseña
			// 
			this->Contraseña->AutoSize = true;
			this->Contraseña->Location = System::Drawing::Point(211, 307);
			this->Contraseña->Name = L"Contraseña";
			this->Contraseña->Size = System::Drawing::Size(61, 13);
			this->Contraseña->TabIndex = 7;
			this->Contraseña->Text = L"Contraseña";
			// 
			// Ingreso
			// 
			this->Ingreso->BackColor = System::Drawing::Color::Red;
			this->Ingreso->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Ingreso->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ingreso->Location = System::Drawing::Point(186, 350);
			this->Ingreso->Name = L"Ingreso";
			this->Ingreso->Size = System::Drawing::Size(122, 35);
			this->Ingreso->TabIndex = 8;
			this->Ingreso->Text = L"Ingresar";
			this->Ingreso->UseVisualStyleBackColor = false;
			this->Ingreso->Click += gcnew System::EventHandler(this, &MyForm1::Ingreso_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(486, 498);
			this->Controls->Add(this->Ingreso);
			this->Controls->Add(this->Contraseña);
			this->Controls->Add(this->Correo);
			this->Controls->Add(this->Usuario);
			this->Controls->Add(this->Solicitud);
			this->Controls->Add(this->IngresoContra);
			this->Controls->Add(this->IngresoCorreo);
			this->Controls->Add(this->IngresoUsuario);
			this->Controls->Add(this->U);
			this->ImeMode = System::Windows::Forms::ImeMode::Katakana;
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void IngresoUsuario_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Ingreso_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Ha Ingresado Correctamente");
	DerechoProyecto::MyForm2^ MyForm2 = gcnew DerechoProyecto::MyForm2();
	MyForm2->Show();
}
};
}
