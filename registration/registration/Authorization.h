#include"Registration.h";
#include"Dashboard.h";
#include"Users.h";

namespace oncechat {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for Authorization
	/// </summary>
	public ref class Authorization : public System::Windows::Forms::Form
	{
	public:
		User^ user;
		Authorization(void)
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
		~Authorization()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Title;
	private: System::Windows::Forms::Label^ sub_Title;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ email_value;
	private: System::Windows::Forms::TextBox^ password_value;





	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Button^ start_btn;
	private: System::Windows::Forms::Button^ clear_btn;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ registration_btn;



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
			this->email_value = (gcnew System::Windows::Forms::TextBox());
			this->password_value = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->start_btn = (gcnew System::Windows::Forms::Button());
			this->clear_btn = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->registration_btn = (gcnew System::Windows::Forms::Button());
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
			this->label1->Size = System::Drawing::Size(39, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Email";
			this->label1->Click += gcnew System::EventHandler(this, &Authorization::label1_Click);
			// 
			// email_value
			// 
			this->email_value->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->email_value->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_value->Location = System::Drawing::Point(21, 113);
			this->email_value->Name = L"email_value";
			this->email_value->Size = System::Drawing::Size(566, 27);
			this->email_value->TabIndex = 3;
			// 
			// password_value
			// 
			this->password_value->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->password_value->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_value->Location = System::Drawing::Point(21, 176);
			this->password_value->Name = L"password_value";
			this->password_value->Size = System::Drawing::Size(566, 27);
			this->password_value->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 15);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password";
			this->label2->UseMnemonic = false;
			this->label2->Click += gcnew System::EventHandler(this, &Authorization::label2_Click);
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
			this->start_btn->Size = System::Drawing::Size(116, 30);
			this->start_btn->TabIndex = 8;
			this->start_btn->Text = L"Start Talk";
			this->start_btn->UseVisualStyleBackColor = false;
			this->start_btn->Click += gcnew System::EventHandler(this, &Authorization::start_btn_Click);
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
			this->clear_btn->Size = System::Drawing::Size(116, 30);
			this->clear_btn->TabIndex = 9;
			this->clear_btn->Text = L"Clear Values";
			this->clear_btn->UseVisualStyleBackColor = false;
			this->clear_btn->Click += gcnew System::EventHandler(this, &Authorization::clear_btn_Click);
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(343, 239);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(244, 36);
			this->tableLayoutPanel1->TabIndex = 10;
			// 
			// registration_btn
			// 
			this->registration_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->registration_btn->AutoSize = true;
			this->registration_btn->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->registration_btn->BackColor = System::Drawing::Color::Coral;
			this->registration_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->registration_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->registration_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->registration_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registration_btn->ForeColor = System::Drawing::Color::Transparent;
			this->registration_btn->Location = System::Drawing::Point(23, 239);
			this->registration_btn->Name = L"registration_btn";
			this->registration_btn->Size = System::Drawing::Size(98, 30);
			this->registration_btn->TabIndex = 10;
			this->registration_btn->Text = L"registration";
			this->registration_btn->UseVisualStyleBackColor = false;
			this->registration_btn->Click += gcnew System::EventHandler(this, &Authorization::registration_btn_Click);
			// 
			// Authorization
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(609, 332);
			this->Controls->Add(this->registration_btn);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->password_value);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->email_value);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->sub_Title);
			this->Controls->Add(this->Title);
			this->Name = L"Authorization";
			this->Text = L"Authorization";
			this->Load += gcnew System::EventHandler(this, &Authorization::MyForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void start_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = this->email_value->Text;
	String^ password = this->password_value->Text;

	if (String::IsNullOrEmpty(email) || String::IsNullOrEmpty(password)) {
		MessageBox::Show("Please Fill All Fields!", "Warning");
		return;
	}

	//	1) connection of database
	String^ connString = L"Data Source=localhost\\sqlexpress;Initial Catalog=chatonce;Integrated Security=True;";
	SqlConnection conn(connString);
	conn.Open();

	String^ query = L"SELECT * FROM users WHERE email = @email";

	try {
		SqlCommand command(query, % conn);

		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@password", password);

		SqlDataReader^ reader = command.ExecuteReader();

		if (reader->Read()) {
			user = gcnew User;
			user->id = reader->GetInt32(0);
			user->userName = reader->GetString(1);
			user->email = reader->GetString(2);
			user->country = reader->GetString(3);
			user->gender = reader->GetString(4);
			user->password = reader->GetString(5);

			// check user 
			if (user == nullptr || (user->email != email && user->password != password)) {
				MessageBox::Show("Please enter correct values", "Warning");
				return;
			}

			// open dashboard if everything okay
			Dashboard^ dashForm = gcnew Dashboard();
			this->Close();
			dashForm->Show();
		}

	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message, "warning!");
	}

}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void clear_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->email_value->Text = "";
	this->password_value->Text = "";
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void registration_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	Registration^ regForm = gcnew Registration();
	this->Hide();
	regForm->Show();
}
};
}
