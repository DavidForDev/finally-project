namespace oncechat {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Registration
	/// </summary>
	public ref class Registration : public System::Windows::Forms::Form
	{
	public:
		Registration(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Registration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ authorization_btn;
	protected:

	private: System::Windows::Forms::TextBox^ email_value;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ username_value;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ sub_Title;
	private: System::Windows::Forms::Label^ Title;
	private: System::Windows::Forms::Button^ start_btn;
	private: System::Windows::Forms::Button^ clear_btn;
	private: System::Windows::Forms::TextBox^ Country_value;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ password_value;

	private: System::Windows::Forms::Label^ password_text;
	private: System::Windows::Forms::RadioButton^ male_value;
	private: System::Windows::Forms::RadioButton^ famale_value;
	private: System::Windows::Forms::TextBox^ repeat_password_value;

	private: System::Windows::Forms::Label^ label4;



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
			this->authorization_btn = (gcnew System::Windows::Forms::Button());
			this->email_value = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->username_value = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->sub_Title = (gcnew System::Windows::Forms::Label());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->start_btn = (gcnew System::Windows::Forms::Button());
			this->clear_btn = (gcnew System::Windows::Forms::Button());
			this->Country_value = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->password_value = (gcnew System::Windows::Forms::TextBox());
			this->password_text = (gcnew System::Windows::Forms::Label());
			this->male_value = (gcnew System::Windows::Forms::RadioButton());
			this->famale_value = (gcnew System::Windows::Forms::RadioButton());
			this->repeat_password_value = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// authorization_btn
			// 
			this->authorization_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->authorization_btn->AutoSize = true;
			this->authorization_btn->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->authorization_btn->BackColor = System::Drawing::Color::Coral;
			this->authorization_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->authorization_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->authorization_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->authorization_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->authorization_btn->ForeColor = System::Drawing::Color::Transparent;
			this->authorization_btn->Location = System::Drawing::Point(9, 464);
			this->authorization_btn->Name = L"authorization_btn";
			this->authorization_btn->Size = System::Drawing::Size(113, 30);
			this->authorization_btn->TabIndex = 19;
			this->authorization_btn->Text = L"Authorization";
			this->authorization_btn->UseVisualStyleBackColor = false;
			this->authorization_btn->Click += gcnew System::EventHandler(this, &Registration::authorization_btn_Click);
			// 
			// email_value
			// 
			this->email_value->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->email_value->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_value->Location = System::Drawing::Point(8, 157);
			this->email_value->Name = L"email_value";
			this->email_value->Size = System::Drawing::Size(634, 27);
			this->email_value->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(7, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 15);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Email";
			this->label2->UseMnemonic = false;
			// 
			// username_value
			// 
			this->username_value->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->username_value->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_value->Location = System::Drawing::Point(8, 94);
			this->username_value->Name = L"username_value";
			this->username_value->Size = System::Drawing::Size(634, 27);
			this->username_value->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(7, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 15);
			this->label1->TabIndex = 13;
			this->label1->Text = L"userName";
			// 
			// sub_Title
			// 
			this->sub_Title->AutoSize = true;
			this->sub_Title->ForeColor = System::Drawing::Color::DarkRed;
			this->sub_Title->Location = System::Drawing::Point(8, 42);
			this->sub_Title->Name = L"sub_Title";
			this->sub_Title->Size = System::Drawing::Size(166, 13);
			this->sub_Title->TabIndex = 12;
			this->sub_Title->Text = L"connect to people in an easy way";
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->ForeColor = System::Drawing::Color::OrangeRed;
			this->Title->Location = System::Drawing::Point(3, 9);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(506, 29);
			this->Title->TabIndex = 11;
			this->Title->Text = L"Welcome to onceTalk, Start Registration";
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
			this->start_btn->Location = System::Drawing::Point(554, 464);
			this->start_btn->Name = L"start_btn";
			this->start_btn->Size = System::Drawing::Size(87, 30);
			this->start_btn->TabIndex = 17;
			this->start_btn->Text = L"Start Talk";
			this->start_btn->UseVisualStyleBackColor = false;
			this->start_btn->Click += gcnew System::EventHandler(this, &Registration::start_btn_Click);
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
			this->clear_btn->Location = System::Drawing::Point(432, 464);
			this->clear_btn->Name = L"clear_btn";
			this->clear_btn->Size = System::Drawing::Size(109, 30);
			this->clear_btn->TabIndex = 18;
			this->clear_btn->Text = L"Clear Values";
			this->clear_btn->UseVisualStyleBackColor = false;
			this->clear_btn->Click += gcnew System::EventHandler(this, &Registration::clear_btn_Click);
			// 
			// Country_value
			// 
			this->Country_value->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Country_value->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Country_value->Location = System::Drawing::Point(8, 225);
			this->Country_value->Name = L"Country_value";
			this->Country_value->Size = System::Drawing::Size(634, 27);
			this->Country_value->TabIndex = 21;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(7, 202);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 15);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Country";
			this->label3->UseMnemonic = false;
			// 
			// password_value
			// 
			this->password_value->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->password_value->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_value->Location = System::Drawing::Point(8, 293);
			this->password_value->Name = L"password_value";
			this->password_value->Size = System::Drawing::Size(634, 27);
			this->password_value->TabIndex = 23;
			// 
			// password_text
			// 
			this->password_text->AutoSize = true;
			this->password_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_text->Location = System::Drawing::Point(7, 270);
			this->password_text->Name = L"password_text";
			this->password_text->Size = System::Drawing::Size(61, 15);
			this->password_text->TabIndex = 22;
			this->password_text->Text = L"Password";
			this->password_text->UseMnemonic = false;
			// 
			// male_value
			// 
			this->male_value->AutoSize = true;
			this->male_value->Location = System::Drawing::Point(9, 414);
			this->male_value->Name = L"male_value";
			this->male_value->Size = System::Drawing::Size(47, 17);
			this->male_value->TabIndex = 24;
			this->male_value->TabStop = true;
			this->male_value->Text = L"male";
			this->male_value->UseVisualStyleBackColor = true;
			this->male_value->CheckedChanged += gcnew System::EventHandler(this, &Registration::male_value_CheckedChanged);
			// 
			// famale_value
			// 
			this->famale_value->AutoSize = true;
			this->famale_value->Location = System::Drawing::Point(62, 414);
			this->famale_value->Name = L"famale_value";
			this->famale_value->Size = System::Drawing::Size(56, 17);
			this->famale_value->TabIndex = 25;
			this->famale_value->TabStop = true;
			this->famale_value->Text = L"famale";
			this->famale_value->UseVisualStyleBackColor = true;
			this->famale_value->CheckedChanged += gcnew System::EventHandler(this, &Registration::famale_value_CheckedChanged);
			// 
			// repeat_password_value
			// 
			this->repeat_password_value->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->repeat_password_value->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->repeat_password_value->Location = System::Drawing::Point(7, 359);
			this->repeat_password_value->Name = L"repeat_password_value";
			this->repeat_password_value->Size = System::Drawing::Size(634, 27);
			this->repeat_password_value->TabIndex = 27;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(6, 336);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 15);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Repeat password";
			this->label4->UseMnemonic = false;
			this->label4->Click += gcnew System::EventHandler(this, &Registration::label4_Click);
			// 
			// Registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(654, 545);
			this->Controls->Add(this->repeat_password_value);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->famale_value);
			this->Controls->Add(this->male_value);
			this->Controls->Add(this->password_value);
			this->Controls->Add(this->password_text);
			this->Controls->Add(this->Country_value);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->authorization_btn);
			this->Controls->Add(this->email_value);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->username_value);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->sub_Title);
			this->Controls->Add(this->Title);
			this->Controls->Add(this->start_btn);
			this->Controls->Add(this->clear_btn);
			this->Name = L"Registration";
			this->Text = L"Registration";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void clear_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->username_value->Text = "";
		this->Country_value->Text = "";
		this->male_value->Checked = false;
		this->famale_value->Checked = false;

	}
private: System::Void start_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ userName = this->username_value->Text;
	String^ country = this->Country_value->Text;
	String^ email = this->email_value->Text;
	String^ password = this->password_value->Text;
	String^ repeatedPassword = this->repeat_password_value->Text;
	bool male = this->male_value->Checked;
	bool female = this->famale_value->Checked;

	String^ CheckGender = "male";

	// ===================== check all fields;

	if (String::IsNullOrEmpty(userName) || String::IsNullOrEmpty(country) || String::IsNullOrEmpty(password) || String::IsNullOrEmpty(repeatedPassword) || (!male && !female)) {
		MessageBox::Show("Please Fill All Fields!", "Warning");
		return;
	}

	if (password->Length <= 8) {
		MessageBox::Show("password symbol length should be more than 8!", "password warning");
		return;
	}

	if (password != repeatedPassword) {
		MessageBox::Show("Passwords do not match!", "password warning");
		return;
	}


	// ======================= Inert into database;

	//	1) connection of database
	String^ connString = L"Data Source=localhost\\sqlexpress;Initial Catalog=chatonce;Integrated Security=True;";
	SqlConnection conn(connString);
	conn.Open();

	//  2) Inesert Data
	String^ query = L"INSERT INTO users(userName, email, country, gender, password) VALUES(@userName, @email, @country, 'male', @password)";

	// 3) send request / query
	
	try {
		SqlCommand command(query, % conn);
		
		command.Parameters->AddWithValue("@userName", userName);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@country", country);
		command.Parameters->AddWithValue("@password", password);
		SqlDataReader^ reader = command.ExecuteReader();

		if (reader->Read()) {
			this->Close();
		}

		MessageBox::Show("Registration Succesfully!", "Succesful Message");
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error!");
	}


}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void male_value_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void famale_value_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void authorization_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->Hide();
}
};
}
