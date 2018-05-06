#pragma once

namespace Project6 {

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

	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::ComponentModel::IContainer^  components;

	private: System::Windows::Forms::Panel^  panelSteps;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownSteps;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  buttonBack;
	private: System::Windows::Forms::Button^  buttonForward;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  labelRpm;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::CheckBox^  checkBoxAf;
	private: System::Windows::Forms::Button^  buttonShutter;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  buttonConnect;













	private: System::String^ line = "...";
	protected:

	protected:

	private:
		


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->panelSteps = (gcnew System::Windows::Forms::Panel());
			this->numericUpDownSteps = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->buttonForward = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->buttonConnect = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->labelRpm = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->checkBoxAf = (gcnew System::Windows::Forms::CheckBox());
			this->buttonShutter = (gcnew System::Windows::Forms::Button());
			this->panelSteps->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSteps))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// serialPort1
			// 
			this->serialPort1->PortName = L"COM12";
			// 
			// panelSteps
			// 
			this->panelSteps->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panelSteps->AutoSize = true;
			this->panelSteps->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panelSteps->Controls->Add(this->numericUpDownSteps);
			this->panelSteps->Controls->Add(this->label1);
			this->panelSteps->Controls->Add(this->buttonBack);
			this->panelSteps->Controls->Add(this->buttonForward);
			this->panelSteps->Location = System::Drawing::Point(3, 37);
			this->panelSteps->Name = L"panelSteps";
			this->panelSteps->Size = System::Drawing::Size(169, 44);
			this->panelSteps->TabIndex = 1;
			// 
			// numericUpDownSteps
			// 
			this->numericUpDownSteps->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDownSteps->Location = System::Drawing::Point(47, 21);
			this->numericUpDownSteps->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000, 0, 0, 0 });
			this->numericUpDownSteps->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownSteps->Name = L"numericUpDownSteps";
			this->numericUpDownSteps->Size = System::Drawing::Size(75, 20);
			this->numericUpDownSteps->TabIndex = 2;
			this->numericUpDownSteps->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDownSteps->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Liczba kroków";
			// 
			// buttonBack
			// 
			this->buttonBack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonBack->Location = System::Drawing::Point(3, 3);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(38, 38);
			this->buttonBack->TabIndex = 1;
			this->buttonBack->Text = L"↓";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Click += gcnew System::EventHandler(this, &MyForm::buttonBack_Click);
			// 
			// buttonForward
			// 
			this->buttonForward->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonForward->Location = System::Drawing::Point(128, 3);
			this->buttonForward->Name = L"buttonForward";
			this->buttonForward->Size = System::Drawing::Size(38, 38);
			this->buttonForward->TabIndex = 0;
			this->buttonForward->Text = L"↑";
			this->buttonForward->UseVisualStyleBackColor = true;
			this->buttonForward->Click += gcnew System::EventHandler(this, &MyForm::buttonForward_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoSize = true;
			this->flowLayoutPanel1->Controls->Add(this->panel1);
			this->flowLayoutPanel1->Controls->Add(this->panelSteps);
			this->flowLayoutPanel1->Controls->Add(this->panel2);
			this->flowLayoutPanel1->Controls->Add(this->panel3);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(178, 213);
			this->flowLayoutPanel1->TabIndex = 4;
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->AutoSize = true;
			this->panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel1->Controls->Add(this->buttonConnect);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(169, 28);
			this->panel1->TabIndex = 5;
			// 
			// buttonConnect
			// 
			this->buttonConnect->Location = System::Drawing::Point(110, 2);
			this->buttonConnect->Name = L"buttonConnect";
			this->buttonConnect->Size = System::Drawing::Size(56, 23);
			this->buttonConnect->TabIndex = 2;
			this->buttonConnect->Text = L"Połącz";
			this->buttonConnect->UseVisualStyleBackColor = true;
			this->buttonConnect->Click += gcnew System::EventHandler(this, &MyForm::buttonConnect_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Port";
			// 
			// comboBox1
			// 
			this->comboBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->comboBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(35, 3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(69, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->DropDown += gcnew System::EventHandler(this, &MyForm::comboBox1_DropDown);
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			this->comboBox1->SelectionChangeCommitted += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectionChangeCommitted);
			// 
			// panel2
			// 
			this->panel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel2->Controls->Add(this->labelRpm);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->trackBar1);
			this->panel2->Location = System::Drawing::Point(3, 87);
			this->panel2->Name = L"panel2";
			this->panel2->Padding = System::Windows::Forms::Padding(3);
			this->panel2->Size = System::Drawing::Size(170, 70);
			this->panel2->TabIndex = 5;
			// 
			// labelRpm
			// 
			this->labelRpm->AutoSize = true;
			this->labelRpm->Dock = System::Windows::Forms::DockStyle::Right;
			this->labelRpm->Location = System::Drawing::Point(151, 3);
			this->labelRpm->Margin = System::Windows::Forms::Padding(3, 3, 3, 0);
			this->labelRpm->Name = L"labelRpm";
			this->labelRpm->Size = System::Drawing::Size(16, 13);
			this->labelRpm->TabIndex = 2;
			this->labelRpm->Text = L"...";
			this->labelRpm->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 5);
			this->label3->Margin = System::Windows::Forms::Padding(3, 3, 3, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Szybkość";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// trackBar1
			// 
			this->trackBar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->trackBar1->LargeChange = 20;
			this->trackBar1->Location = System::Drawing::Point(9, 21);
			this->trackBar1->Maximum = 200;
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(155, 45);
			this->trackBar1->SmallChange = 10;
			this->trackBar1->TabIndex = 0;
			this->trackBar1->TickFrequency = 20;
			this->trackBar1->Value = 1;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->checkBoxAf);
			this->panel3->Controls->Add(this->buttonShutter);
			this->panel3->Location = System::Drawing::Point(3, 163);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(170, 47);
			this->panel3->TabIndex = 6;
			// 
			// checkBoxAf
			// 
			this->checkBoxAf->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBoxAf->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBoxAf->Location = System::Drawing::Point(3, 3);
			this->checkBoxAf->Name = L"checkBoxAf";
			this->checkBoxAf->Size = System::Drawing::Size(38, 38);
			this->checkBoxAf->TabIndex = 1;
			this->checkBoxAf->Text = L"AF";
			this->checkBoxAf->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBoxAf->UseVisualStyleBackColor = true;
			this->checkBoxAf->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxAf_CheckedChanged);
			// 
			// buttonShutter
			// 
			this->buttonShutter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonShutter->Location = System::Drawing::Point(47, 3);
			this->buttonShutter->Name = L"buttonShutter";
			this->buttonShutter->Size = System::Drawing::Size(120, 38);
			this->buttonShutter->TabIndex = 0;
			this->buttonShutter->Text = L"Migawka";
			this->buttonShutter->UseVisualStyleBackColor = true;
			this->buttonShutter->Click += gcnew System::EventHandler(this, &MyForm::buttonShutter_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(178, 213);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"MyForm";
			this->Text = L"Zdalne sterowanie";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panelSteps->ResumeLayout(false);
			this->panelSteps->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSteps))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	
		comboBox1->DataSource = serialPort1->GetPortNames();
		comboBox1->Text = serialPort1->PortName;
		serialPort1->NewLine = "\n";
		serialPort1->Open();

	}
	
	private: System::Void comboBox1_SelectionChangeCommitted(System::Object^  sender, System::EventArgs^  e) {
		
		
	}
	private: System::Void comboBox1_DropDown(System::Object^  sender, System::EventArgs^  e) {
		comboBox1->DataSource = serialPort1->GetPortNames();
	}

private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
	System::String^ rpm = System::Convert::ToString(trackBar1->Value);
	labelRpm->Text = rpm + " RPM";
	serialPort1->WriteLine("S " + rpm);
}

private: System::Void checkBoxAf_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	serialPort1->WriteLine("A " + ((checkBoxAf->Checked) ? "1":"0"));
}
private: System::Void buttonShutter_Click(System::Object^  sender, System::EventArgs^  e) {
	serialPort1->WriteLine("B 1");
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void buttonConnect_Click(System::Object^  sender, System::EventArgs^  e) {
	if (serialPort1->IsOpen) { serialPort1->Close(); }
	serialPort1->PortName = comboBox1->Text;
	serialPort1->Open();
}
private: System::Void buttonForward_Click(System::Object^  sender, System::EventArgs^  e) {
	serialPort1->WriteLine("X " + System::Convert::ToString(numericUpDownSteps->Value));
}
private: System::Void buttonBack_Click(System::Object^  sender, System::EventArgs^  e) {
	serialPort1->WriteLine("X -" + System::Convert::ToString(numericUpDownSteps->Value));
}
};
}