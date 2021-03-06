#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace EEV_Sim {

	/// <summary>
	/// Summary for Abt
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Abt : public System::Windows::Forms::Form
	{
	public:
		Abt(void)
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
		~Abt()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::LinkLabel^  linkLabel3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::LinkLabel^  linkLabel4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::LinkLabel^  linkLabel5;
	private: System::Windows::Forms::LinkLabel^  linkLabel6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Abt::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel5 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel6 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->label1->ForeColor = System::Drawing::Color::SteelBlue;
			this->label1->Location = System::Drawing::Point(90, 166);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(287, 92);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ACIT-SIM V 4.0 \r\nAIR CONDITIONER INVERTER\r\nTHERMAL CYCLE \r\nSIMULATOR AND EMULATOR" 
				L"";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(154, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(154, 128);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->label2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label2->Location = System::Drawing::Point(90, 291);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(221, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Author  :   ilker yagci";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(524, 328);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(285, 44);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Author   :   ilker yagci\r\nContact  :  ilkerya@gmail.com";
			this->label3->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(580, 24);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(154, 128);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Firebrick;
			this->label4->Location = System::Drawing::Point(500, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(338, 132);
			this->label4->TabIndex = 5;
			this->label4->Text = L"ACIT-SIM V 3.1\r\nAIR CONDITIONER INVERTER\r\nTHERMAL  LIBRARY\r\nSIMULATOR ENVIRONMENT" 
				L" \r\nAll Rights Reserved To :\r\nArçelik-LG Klima San. Ve Ticaret AŞ";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Visible = false;
			// 
			// linkLabel1
			// 
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(162)));
			this->linkLabel1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->linkLabel1->LinkColor = System::Drawing::Color::RoyalBlue;
			this->linkLabel1->Location = System::Drawing::Point(89, 384);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(361, 27);
			this->linkLabel1->TabIndex = 4;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Tag = L"";
			this->linkLabel1->Text = L"www.linkedin.com/in/ilkeryagci";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Abt::linkLabel1_LinkClicked_1);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel2->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->linkLabel2->Location = System::Drawing::Point(574, 403);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(209, 31);
			this->linkLabel2->TabIndex = 8;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"www.Arcelik-LG";
			this->linkLabel2->Visible = false;
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Abt::linkLabel2_LinkClicked);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(42, 377);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(41, 34);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// linkLabel3
			// 
			this->linkLabel3->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel3->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Italic));
			this->linkLabel3->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->linkLabel3->LinkColor = System::Drawing::Color::RoyalBlue;
			this->linkLabel3->Location = System::Drawing::Point(89, 419);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(302, 27);
			this->linkLabel3->TabIndex = 10;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Tag = L"";
			this->linkLabel3->Text = L"www.facebook.com/ilkerya";
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Abt::linkLabel3_LinkClicked);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(42, 419);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(41, 34);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 11;
			this->pictureBox4->TabStop = false;
			// 
			// linkLabel4
			// 
			this->linkLabel4->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel4->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Italic));
			this->linkLabel4->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->linkLabel4->LinkColor = System::Drawing::Color::RoyalBlue;
			this->linkLabel4->Location = System::Drawing::Point(89, 459);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(302, 27);
			this->linkLabel4->TabIndex = 12;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Tag = L"";
			this->linkLabel4->Text = L"https://twitter.com/ilkerya";
			this->linkLabel4->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Abt::linkLabel4_LinkClicked);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(42, 459);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(41, 34);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 13;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(42, 337);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(41, 34);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 14;
			this->pictureBox6->TabStop = false;
			// 
			// linkLabel5
			// 
			this->linkLabel5->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel5->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(162)));
			this->linkLabel5->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->linkLabel5->LinkColor = System::Drawing::Color::RoyalBlue;
			this->linkLabel5->Location = System::Drawing::Point(89, 344);
			this->linkLabel5->Name = L"linkLabel5";
			this->linkLabel5->Size = System::Drawing::Size(317, 27);
			this->linkLabel5->TabIndex = 15;
			this->linkLabel5->TabStop = true;
			this->linkLabel5->Tag = L"";
			this->linkLabel5->Text = L"ilkerya@gmail.com";
			this->linkLabel5->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Abt::linkLabel5_LinkClicked);
			// 
			// linkLabel6
			// 
			this->linkLabel6->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel6->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Italic));
			this->linkLabel6->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->linkLabel6->LinkColor = System::Drawing::Color::RoyalBlue;
			this->linkLabel6->Location = System::Drawing::Point(89, 499);
			this->linkLabel6->Name = L"linkLabel6";
			this->linkLabel6->Size = System::Drawing::Size(383, 27);
			this->linkLabel6->TabIndex = 16;
			this->linkLabel6->TabStop = true;
			this->linkLabel6->Tag = L"";
			this->linkLabel6->Text = L"https://plus.google.com/+İlkerYağcımankurt";
			this->linkLabel6->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Abt::linkLabel6_LinkClicked);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(12, 496);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(71, 42);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 17;
			this->pictureBox7->TabStop = false;
			// 
			// Abt
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(484, 562);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->linkLabel6);
			this->Controls->Add(this->linkLabel5);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->linkLabel4);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->linkLabel3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Abt";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {

//}
	private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
      this->linkLabel2->Links[ linkLabel2->Links->IndexOf( e->Link ) ]->Visited = true;
		this->linkLabel2->Links[ 0 ]->LinkData = "www.arcelik-lg.com";
      // Display the appropriate link based on the value of the
      // LinkData property of the Link Object*.
      String^ target = dynamic_cast<String^>(e->Link->LinkData);

      // If the value looks like a URL, navigate to it.
      // Otherwise, display it in a message box.
      if ( nullptr != target && target->StartsWith( "www" ) )
      {
         System::Diagnostics::Process::Start( target );
      }
      else
      {
         MessageBox::Show( "Item clicked: {0}", target );
      }
			 }

private: System::Void linkLabel1_LinkClicked_1(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
					      // Determine which link was clicked within the LinkLabel.
      this->linkLabel1->Links[ linkLabel1->Links->IndexOf( e->Link ) ]->Visited = true;
		this->linkLabel1->Links[ 0 ]->LinkData = "www.linkedin.com/in/ilkeryagci";
    //	this->linkLabel1->Links[ 0 ]->LinkData = "www.arcelik-lg.com";
      // Display the appropriate link based on the value of the
      // LinkData property of the Link Object*.
      String^ target = dynamic_cast<String^>(e->Link->LinkData);

      // If the value looks like a URL, navigate to it.
      // Otherwise, display it in a message box.
      if ( nullptr != target && target->StartsWith( "www" ) )
      {
         System::Diagnostics::Process::Start( target );
      }
      else
      {
         MessageBox::Show( "Item clicked: {0}", target );
      }


		 }
private: System::Void linkLabel3_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
//https://www.facebook.com/ilkerya
      this->linkLabel3->Links[ linkLabel3->Links->IndexOf( e->Link ) ]->Visited = true;
		this->linkLabel3->Links[ 0 ]->LinkData = "www.facebook.com/ilkerya";
    //	this->linkLabel1->Links[ 0 ]->LinkData = "www.arcelik-lg.com";
      // Display the appropriate link based on the value of the
      // LinkData property of the Link Object*.
      String^ target = dynamic_cast<String^>(e->Link->LinkData);

      // If the value looks like a URL, navigate to it.
      // Otherwise, display it in a message box.
      if ( nullptr != target && target->StartsWith( "www" ) )
      {
         System::Diagnostics::Process::Start( target );
      }
      else
      {
         MessageBox::Show( "Item clicked: {0}", target );
      }

		 }
private: System::Void linkLabel4_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
//https://twitter.com/ilkerya
      this->linkLabel4->Links[ linkLabel4->Links->IndexOf( e->Link ) ]->Visited = true;
		this->linkLabel4->Links[ 0 ]->LinkData = "https://twitter.com/ilkerya";
    //	this->linkLabel1->Links[ 0 ]->LinkData = "www.arcelik-lg.com";
      // Display the appropriate link based on the value of the
      // LinkData property of the Link Object*.



      String^ target = dynamic_cast<String^>(e->Link->LinkData);
	  System::Diagnostics::Process::Start( target );
/*
      // If the value looks like a URL, navigate to it.
      // Otherwise, display it in a message box.
      if ( nullptr != target && target->StartsWith( "www" ) )
      {
         System::Diagnostics::Process::Start( target );
      }
      else
      {
         MessageBox::Show( "Item clicked: {0}", target );
      }
*/
		 }
private: System::Void linkLabel5_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			//	System.Diagnostics.Process.Start("outlook")
	//		 System::Diagnostics::Process::Start("outlook");
	//		System.Diagnostics.Process.Start("mailto:ilkerya@gmail.com");
	//		 System::Diagnostics::Process::Start("mailto:ilkerya@gmail.com@subject=HelloWorld");

		 }
private: System::Void linkLabel6_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
      this->linkLabel6->Links[ linkLabel6->Links->IndexOf( e->Link ) ]->Visited = true;
		this->linkLabel6->Links[ 0 ]->LinkData = "https://plus.google.com/u/0/+ilkerYagcimankurt";
    //	this->linkLabel1->Links[ 0 ]->LinkData = "www.arcelik-lg.com";
      // Display the appropriate link based on the value of the
      // LinkData property of the Link Object*.

      String^ target = dynamic_cast<String^>(e->Link->LinkData);
	  System::Diagnostics::Process::Start( target );


		 }
};
}
