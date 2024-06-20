#include"Users.h";

namespace oncechat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(int userId)
		{
			bindingSource1 = gcnew System::Windows::Forms::BindingSource();

			InitializeComponent();
			LoadData(userId);

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: void LoadData(int userId) {
		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=chatonce;Integrated Security=True;";
			String^ query = "SELECT name, phoneNumber, country, address FROM phoneBook WHERE user_id = @userId";

			SqlConnection^ conn = gcnew SqlConnection(connString);
			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, conn);

			dataAdapter->SelectCommand->Parameters->AddWithValue("@userId", userId);

			DataTable^ table = gcnew DataTable();
			dataAdapter->Fill(table);

			if (bindingSource1 != nullptr) {
				bindingSource1->DataSource = table;
				numbers_grid->DataSource = bindingSource1;
			}
			else {
				MessageBox::Show("BindingSource1 is null", "Error");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error");
		}
	}
	private: System::Windows::Forms::Label^ welcoming_text;
	private: System::Windows::Forms::Button^ logout_btn;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ person_name;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ phone_number;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ person_country;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ person_address;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ addNumber_btn;
	private: System::Windows::Forms::DataGridView^ numbers_grid;




	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Data::SqlClient::SqlDataAdapter^ dataAdapter;
	private: System::Data::DataTable^ dataTable;








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
			this->welcoming_text = (gcnew System::Windows::Forms::Label());
			this->logout_btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->person_name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->phone_number = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->person_country = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->person_address = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->addNumber_btn = (gcnew System::Windows::Forms::Button());
			this->numbers_grid = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numbers_grid))->BeginInit();
			this->SuspendLayout();
			// 
			// welcoming_text
			// 
			this->welcoming_text->AutoSize = true;
			this->welcoming_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcoming_text->ForeColor = System::Drawing::Color::OrangeRed;
			this->welcoming_text->Location = System::Drawing::Point(13, 13);
			this->welcoming_text->Name = L"welcoming_text";
			this->welcoming_text->Size = System::Drawing::Size(163, 25);
			this->welcoming_text->TabIndex = 0;
			this->welcoming_text->Text = L"Welcome David";
			this->welcoming_text->Click += gcnew System::EventHandler(this, &Dashboard::welcoming_text_Click);
			// 
			// logout_btn
			// 
			this->logout_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->logout_btn->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->logout_btn->Location = System::Drawing::Point(758, 17);
			this->logout_btn->Name = L"logout_btn";
			this->logout_btn->Size = System::Drawing::Size(72, 23);
			this->logout_btn->TabIndex = 1;
			this->logout_btn->Text = L"log out";
			this->logout_btn->UseVisualStyleBackColor = true;
			this->logout_btn->Click += gcnew System::EventHandler(this, &Dashboard::logout_btn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::DarkRed;
			this->label1->Location = System::Drawing::Point(18, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"save phone numbers";
			// 
			// person_name
			// 
			this->person_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->person_name->Location = System::Drawing::Point(21, 106);
			this->person_name->Margin = System::Windows::Forms::Padding(0, 0, 0, 0);
			this->person_name->Name = L"person_name";
			this->person_name->Size = System::Drawing::Size(293, 27);
			this->person_name->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 15);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Person Name";
			// 
			// phone_number
			// 
			this->phone_number->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone_number->Location = System::Drawing::Point(21, 165);
			this->phone_number->Margin = System::Windows::Forms::Padding(0, 0, 0, 0);
			this->phone_number->Name = L"phone_number";
			this->phone_number->Size = System::Drawing::Size(297, 27);
			this->phone_number->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 15);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Phone Number";
			// 
			// person_country
			// 
			this->person_country->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->person_country->Location = System::Drawing::Point(21, 227);
			this->person_country->Margin = System::Windows::Forms::Padding(0, 0, 0, 0);
			this->person_country->Name = L"person_country";
			this->person_country->Size = System::Drawing::Size(297, 27);
			this->person_country->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(20, 204);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 15);
			this->label4->TabIndex = 8;
			this->label4->Text = L"country";
			// 
			// person_address
			// 
			this->person_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->person_address->Location = System::Drawing::Point(23, 293);
			this->person_address->Margin = System::Windows::Forms::Padding(0, 0, 0, 0);
			this->person_address->Name = L"person_address";
			this->person_address->Size = System::Drawing::Size(295, 27);
			this->person_address->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(22, 270);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 15);
			this->label5->TabIndex = 10;
			this->label5->Text = L"address";
			// 
			// addNumber_btn
			// 
			this->addNumber_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addNumber_btn->AutoSize = true;
			this->addNumber_btn->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->addNumber_btn->BackColor = System::Drawing::Color::Coral;
			this->addNumber_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->addNumber_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addNumber_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->addNumber_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addNumber_btn->ForeColor = System::Drawing::Color::Transparent;
			this->addNumber_btn->Location = System::Drawing::Point(241, 334);
			this->addNumber_btn->Name = L"addNumber_btn";
			this->addNumber_btn->Size = System::Drawing::Size(73, 23);
			this->addNumber_btn->TabIndex = 12;
			this->addNumber_btn->Text = L"add number";
			this->addNumber_btn->UseVisualStyleBackColor = false;
			this->addNumber_btn->Click += gcnew System::EventHandler(this, &Dashboard::addNumber_btn_Click);
			// 
			// numbers_grid
			// 
			this->numbers_grid->AllowUserToAddRows = false;
			this->numbers_grid->AllowUserToDeleteRows = false;
			this->numbers_grid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->numbers_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->numbers_grid->Location = System::Drawing::Point(346, 104);
			this->numbers_grid->Name = L"numbers_grid";
			this->numbers_grid->ReadOnly = true;
			this->numbers_grid->Size = System::Drawing::Size(493, 216);
			this->numbers_grid->TabIndex = 13;
			this->numbers_grid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Dashboard::numbers_grid_CellContentClick);
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(851, 369);
			this->Controls->Add(this->numbers_grid);
			this->Controls->Add(this->addNumber_btn);
			this->Controls->Add(this->person_address);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->person_country);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->phone_number);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->person_name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->logout_btn);
			this->Controls->Add(this->welcoming_text);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numbers_grid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void GetData(String^ selectCommand) {
			try {
				String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=chatonce;Integrated Security=True;";

				dataAdapter = gcnew SqlDataAdapter(selectCommand, connectionString);

				SqlCommandBuilder^ commandBuilder = gcnew SqlCommandBuilder(dataAdapter);

				dataTable = gcnew DataTable();
				dataAdapter->Fill(dataTable);
				bindingSource1->DataSource = dataTable;
		
				numbers_grid->DataSource = bindingSource1;

				numbers_grid->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader);
			}
			catch (SqlException^) {
				MessageBox::Show("To run this example, replace the value of the connectionString variable with a connection string that is valid for your system.");
			}
		}
	private: System::Void welcoming_text_Click(System::Object^ sender, System::EventArgs^ e) {
		User^ user = User::Instance;
		
		String^ welcomingText = "Welcome " + user->userName;

		this->welcoming_text->Text = welcomingText;
		
	}
	private: System::Void addNumber_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		User^ user = User::Instance;

		String^ personName = this->person_name->Text;
		String^ personNumber = this->phone_number->Text;
		String^ personCountry = this->person_country->Text;
		String^ personAddress = this->person_address->Text;

		if (String::IsNullOrEmpty(personName) || String::IsNullOrEmpty(personNumber)) {
			MessageBox::Show("Name and Number is important fields!", "warning");
			return;
		}

		//	1) connection of database
		String^ connString = L"Data Source=localhost\\sqlexpress;Initial Catalog=chatonce;Integrated Security=True;";
		SqlConnection conn(connString);
		conn.Open();

		String^ query = "INSERT INTO phoneBook(name, phoneNumber, country, address, user_id) VALUES(@personName, @personNumber, @personCountry, @personAddress, @user_id)";

		try {
			SqlCommand^ command = gcnew SqlCommand(query, % conn);

			command->Parameters->AddWithValue("@personName", personName);
			command->Parameters->AddWithValue("@personNumber", personNumber);
			command->Parameters->AddWithValue("@personCountry", personCountry);
			command->Parameters->AddWithValue("@personAddress", personAddress);
			command->Parameters->AddWithValue("@user_id", user->id);

			int result = command->ExecuteNonQuery();

			if (result > 0) {
				MessageBox::Show("new number was added succesfuly", "success");

				LoadData(user->id);
				return;
			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "error");
		}
		finally {
			conn.Close();
		}

	}
private: System::Void numbers_grid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void logout_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	User^ user = User::Instance;

	if (user->id) {
		user->ClearUserData();
	}

	this->Close();
}
};
}
