#pragma once
#include "MyDialog2.h"

namespace Lab6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			InputDialog = gcnew MyDialog(); //Добавили переменную импутдайлог. Будет использоваться для работы с формой
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BrnAdd;
	protected:
	private: System::Windows::Forms::ListBox^ lbFio;
	private: System::Windows::Forms::ListBox^ lbAge;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

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
			this->BrnAdd = (gcnew System::Windows::Forms::Button());
			this->lbFio = (gcnew System::Windows::Forms::ListBox());
			this->lbAge = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// BrnAdd
			// 
			this->BrnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.08392F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BrnAdd->Location = System::Drawing::Point(30, 292);
			this->BrnAdd->Name = L"BrnAdd";
			this->BrnAdd->Size = System::Drawing::Size(150, 41);
			this->BrnAdd->TabIndex = 0;
			this->BrnAdd->Text = L"Добавить";
			this->BrnAdd->UseVisualStyleBackColor = true;
			this->BrnAdd->Click += gcnew System::EventHandler(this, &MyForm::BrnAdd_Click);
			// 
			// lbFio
			// 
			this->lbFio->FormattingEnabled = true;
			this->lbFio->ItemHeight = 20;
			this->lbFio->Location = System::Drawing::Point(30, 107);
			this->lbFio->Name = L"lbFio";
			this->lbFio->Size = System::Drawing::Size(255, 164);
			this->lbFio->TabIndex = 1;
			// 
			// lbAge
			// 
			this->lbAge->FormattingEnabled = true;
			this->lbAge->ItemHeight = 20;
			this->lbAge->Location = System::Drawing::Point(312, 107);
			this->lbAge->Name = L"lbAge";
			this->lbAge->Size = System::Drawing::Size(255, 164);
			this->lbAge->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"ФИО";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(308, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Возраст";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(677, 360);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbAge);
			this->Controls->Add(this->lbFio);
			this->Controls->Add(this->BrnAdd);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		MyDialog^ InputDialog;//Создать новую форму класса MyDialog
	private: System::Void BrnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lbFio->SelectedIndex >= 0)
		{
			int n = lbFio->SelectedIndex;
			InputDialog->setfio(lbFio->Items[n]->ToString());
			InputDialog->setage(lbAge->Items[n]->ToString());
		}
		if (InputDialog->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			lbFio->Items->Add(InputDialog->getfio());
			lbAge->Items->Add(InputDialog->getage());
		}
	}
};
}

/*
ImportDialog->Show() - параллельная работа с несколькими окнами, но после закрытия форма удаляется полностью. надо заново создавать
Добавление: Выделяется строка - открывается окно, в него вводится название, автор, продолжительность.
Редактирование: Выделяется строка, открывается окно - в нем есть данные выделенной ячейки. Редактируется, сохраняется.
Вставка - открывается окно, вводятся данные, производится вставка.
*/