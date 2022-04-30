#pragma once

namespace DerechoProyecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Bienvenida;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ Curso;
	private: System::Windows::Forms::Button^ Horario;

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
			this->Bienvenida = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Curso = (gcnew System::Windows::Forms::Button());
			this->Horario = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Bienvenida
			// 
			this->Bienvenida->AutoSize = true;
			this->Bienvenida->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bienvenida->Location = System::Drawing::Point(12, 23);
			this->Bienvenida->Name = L"Bienvenida";
			this->Bienvenida->Size = System::Drawing::Size(355, 29);
			this->Bienvenida->TabIndex = 0;
			this->Bienvenida->Text = L"Bienvenido a la plataforma";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(33, 121);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 29);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Calificaciones";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Curso
			// 
			this->Curso->Location = System::Drawing::Point(144, 121);
			this->Curso->Name = L"Curso";
			this->Curso->Size = System::Drawing::Size(80, 29);
			this->Curso->TabIndex = 2;
			this->Curso->Text = L"Cursos";
			this->Curso->UseVisualStyleBackColor = true;
			// 
			// Horario
			// 
			this->Horario->Location = System::Drawing::Point(262, 121);
			this->Horario->Name = L"Horario";
			this->Horario->Size = System::Drawing::Size(80, 29);
			this->Horario->TabIndex = 3;
			this->Horario->Text = L"Horarios";
			this->Horario->UseVisualStyleBackColor = true;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 311);
			this->Controls->Add(this->Horario);
			this->Controls->Add(this->Curso);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Bienvenida);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
