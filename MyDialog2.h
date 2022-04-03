#pragma once

namespace Lab6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyDialog
	/// </summary>
	public ref class MyDialog : public System::Windows::Forms::Form
	{
	public:
		MyDialog(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnOK;
	private: System::Windows::Forms::TextBox^ tbFio;
	private: System::Windows::Forms::TextBox^ tbAge;
	private: System::Windows::Forms::Button^ BrnCancel;
	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->BtnOK = (gcnew System::Windows::Forms::Button());
			this->tbFio = (gcnew System::Windows::Forms::TextBox());
			this->tbAge = (gcnew System::Windows::Forms::TextBox());
			this->BrnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// BtnOK
			// 
			this->BtnOK->Location = System::Drawing::Point(42, 183);
			this->BtnOK->Name = L"BtnOK";
			this->BtnOK->Size = System::Drawing::Size(92, 31);
			this->BtnOK->TabIndex = 0;
			this->BtnOK->Text = L"Принять";
			this->BtnOK->UseVisualStyleBackColor = true;
			this->BtnOK->Click += gcnew System::EventHandler(this, &MyDialog::BtnOK_Click);
			// 
			// tbFio
			// 
			this->tbFio->Location = System::Drawing::Point(72, 64);
			this->tbFio->Name = L"tbFio";
			this->tbFio->Size = System::Drawing::Size(100, 26);
			this->tbFio->TabIndex = 1;
			// 
			// tbAge
			// 
			this->tbAge->Location = System::Drawing::Point(72, 96);
			this->tbAge->Name = L"tbAge";
			this->tbAge->Size = System::Drawing::Size(100, 26);
			this->tbAge->TabIndex = 2;
			// 
			// BrnCancel
			// 
			this->BrnCancel->Location = System::Drawing::Point(140, 183);
			this->BrnCancel->Name = L"BrnCancel";
			this->BrnCancel->Size = System::Drawing::Size(92, 31);
			this->BrnCancel->TabIndex = 3;
			this->BrnCancel->Text = L"Отмена";
			this->BrnCancel->UseVisualStyleBackColor = true;
			// 
			// MyDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(280, 246);
			this->Controls->Add(this->BrnCancel);
			this->Controls->Add(this->tbAge);
			this->Controls->Add(this->tbFio);
			this->Controls->Add(this->BtnOK);
			this->Name = L"MyDialog";
			this->Text = L"MyDialog";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ getfio()
	{
		return tbFio->Text;
	}
	public: String^ getage()
	{
		return tbAge->Text;
	}
	public: void setfio(String^ fio)
	{
		tbFio->Text = fio;
	}
	public: void setage(String^ age)
	{
		tbAge->Text = age;
	}
	private: System::Void BtnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		getfio();
	}
};
}
