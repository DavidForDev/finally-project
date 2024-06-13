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
		Dashboard(User ^user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			this->welcoming_text->Text = "welcome: " + user->userName;
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
	private: System::Windows::Forms::Label^ welcoming_text;
	private: System::Windows::Forms::Button^ logout_btn;
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
			this->SuspendLayout();
			// 
			// welcoming_text
			// 
			this->welcoming_text->AutoSize = true;
			this->welcoming_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcoming_text->Location = System::Drawing::Point(13, 13);
			this->welcoming_text->Name = L"welcoming_text";
			this->welcoming_text->Size = System::Drawing::Size(163, 25);
			this->welcoming_text->TabIndex = 0;
			this->welcoming_text->Text = L"Welcome David";
			this->welcoming_text->Click += gcnew System::EventHandler(this, &Dashboard::welcoming_text_Click);
			// 
			// logout_btn
			// 
			this->logout_btn->Location = System::Drawing::Point(18, 334);
			this->logout_btn->Name = L"logout_btn";
			this->logout_btn->Size = System::Drawing::Size(75, 23);
			this->logout_btn->TabIndex = 1;
			this->logout_btn->Text = L"log out";
			this->logout_btn->UseVisualStyleBackColor = true;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(619, 369);
			this->Controls->Add(this->logout_btn);
			this->Controls->Add(this->welcoming_text);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void welcoming_text_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
