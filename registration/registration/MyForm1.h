#pragma once

namespace registration {

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
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		};
		String^ newLines(int quantity) {
			String^ result = "";

			for (int i = 0; i < quantity; i++) {
				result += Environment::NewLine;
			}

			return result;
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
	private: System::Windows::Forms::Label^ Title;
	private: System::Windows::Forms::Label^ sub_Title;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ fullName_value;
	private: System::Windows::Forms::TextBox^ country_value;

	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Button^ start_btn;
	private: System::Windows::Forms::Button^ clear_btn;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::RadioButton^ Male_radio;
	private: System::Windows::Forms::RadioButton^ Famale_radio;

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Title = (gcnew System::Windows::Forms::Label());
			this->sub_Title = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->fullName_value = (gcnew System::Windows::Forms::TextBox());
			this->country_value = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->start_btn = (gcnew System::Windows::Forms::Button());
			this->clear_btn = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Male_radio = (gcnew System::Windows::Forms::RadioButton());
			this->Famale_radio = (gcnew System::Windows::Forms::RadioButton());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->ForeColor = System::Drawing::Color::OrangeRed;
			this->Title->Location = System::Drawing::Point(13, 13);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(277, 29);
			this->Title->TabIndex = 0;
			this->Title->Text = L"Welcome to onceTalk";
			// 
			// sub_Title
			// 
			this->sub_Title->AutoSize = true;
			this->sub_Title->ForeColor = System::Drawing::Color::DarkRed;
			this->sub_Title->Location = System::Drawing::Point(18, 46);
			this->sub_Title->Name = L"sub_Title";
			this->sub_Title->Size = System::Drawing::Size(166, 13);
			this->sub_Title->TabIndex = 1;
			this->sub_Title->Text = L"connect to people in an easy way";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(20, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Full Name";
			// 
			// fullName_value
			// 
			this->fullName_value->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->fullName_value->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fullName_value->Location = System::Drawing::Point(21, 113);
			this->fullName_value->Name = L"fullName_value";
			this->fullName_value->Size = System::Drawing::Size(566, 27);
			this->fullName_value->TabIndex = 3;
			// 
			// country_value
			// 
			this->country_value->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->country_value->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->country_value->Location = System::Drawing::Point(21, 176);
			this->country_value->Name = L"country_value";
			this->country_value->Size = System::Drawing::Size(566, 27);
			this->country_value->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 15);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Country";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// start_btn
			// 
			this->start_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->start_btn->AutoSize = true;
			this->start_btn->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->start_btn->BackColor = System::Drawing::Color::Coral;
			this->start_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->start_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->start_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->start_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->start_btn->ForeColor = System::Drawing::Color::Transparent;
			this->start_btn->Location = System::Drawing::Point(125, 3);
			this->start_btn->Name = L"start_btn";
			this->start_btn->Size = System::Drawing::Size(116, 27);
			this->start_btn->TabIndex = 8;
			this->start_btn->Text = L"Start Talk";
			this->start_btn->UseVisualStyleBackColor = false;
			this->start_btn->Click += gcnew System::EventHandler(this, &MyForm::start_btn_Click);
			// 
			// clear_btn
			// 
			this->clear_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->clear_btn->AutoSize = true;
			this->clear_btn->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->clear_btn->BackColor = System::Drawing::Color::Coral;
			this->clear_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->clear_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->clear_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->clear_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear_btn->ForeColor = System::Drawing::Color::Transparent;
			this->clear_btn->Location = System::Drawing::Point(3, 3);
			this->clear_btn->Name = L"clear_btn";
			this->clear_btn->Size = System::Drawing::Size(116, 27);
			this->clear_btn->TabIndex = 9;
			this->clear_btn->Text = L"Clear Values";
			this->clear_btn->UseVisualStyleBackColor = false;
			this->clear_btn->Click += gcnew System::EventHandler(this, &MyForm::clear_btn_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->start_btn, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->clear_btn, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(343, 290);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(244, 33);
			this->tableLayoutPanel1->TabIndex = 10;
			// 
			// Male_radio
			// 
			this->Male_radio->AutoSize = true;
			this->Male_radio->Location = System::Drawing::Point(23, 227);
			this->Male_radio->Name = L"Male_radio";
			this->Male_radio->Size = System::Drawing::Size(48, 17);
			this->Male_radio->TabIndex = 11;
			this->Male_radio->TabStop = true;
			this->Male_radio->Text = L"Male";
			this->Male_radio->UseVisualStyleBackColor = true;
			// 
			// Famale_radio
			// 
			this->Famale_radio->AutoSize = true;
			this->Famale_radio->Location = System::Drawing::Point(77, 227);
			this->Famale_radio->Name = L"Famale_radio";
			this->Famale_radio->Size = System::Drawing::Size(59, 17);
			this->Famale_radio->TabIndex = 12;
			this->Famale_radio->TabStop = true;
			this->Famale_radio->Text = L"Famale";
			this->Famale_radio->UseVisualStyleBackColor = true;
			this->Famale_radio->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(609, 332);
			this->Controls->Add(this->Famale_radio);
			this->Controls->Add(this->Male_radio);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->country_value);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->fullName_value);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->sub_Title);
			this->Controls->Add(this->Title);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void start_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fullName = this->fullName_value->Text;
	String^ country = this->country_value->Text;
	bool male = this->Male_radio->Checked;
	bool female = this->Famale_radio->Checked;

	String^ CheckGender = male ? "male" : "female";

	if (String::IsNullOrEmpty(fullName) || String::IsNullOrEmpty(country) || (!male && !female)) {
		MessageBox::Show("Please Fill All Fields!", "Warning");
		return;
	}

	String^ userObjString = "FullName: " + fullName + newLines(1) + "country: " + country + newLines(1) + "Gender: " + CheckGender;
	String^ welcomingText = "Welcome " + fullName + newLines(1) + "we love your country, " + country + "!" + newLines(3) + "your Data: " + newLines(2) + userObjString;

	MessageBox::Show(welcomingText, "Welcome To OnceTalk");
	Close();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void clear_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->fullName_value->Text = "";
	this->country_value->Text = "";
	this->Male_radio->Checked = false;
	this->Famale_radio->Checked = false;
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
