#pragma once
namespace CLRData {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::IO;

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
	protected:
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;








	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  msg;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button3;







	private: System::Windows::Forms::Timer^  timer2;




	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  time;
	private: System::Windows::Forms::Button^  save;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button4;









	private: System::ComponentModel::IContainer^  components;


	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->msg = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->time = (gcnew System::Windows::Forms::Label());
			this->save = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(109, 128);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(120, 21);
			this->comboBox1->TabIndex = 0;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"9600" });
			this->comboBox2->Location = System::Drawing::Point(109, 164);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(120, 21);
			this->comboBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 131);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"COM Port    :-";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"BAUD Rate :-";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(27, 230);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 40);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Connect";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(151, 230);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 40);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Disconnect";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(42, 64);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(200, 10);
			this->progressBar1->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(40, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Port Status :-";
			// 
			// msg
			// 
			this->msg->AutoSize = true;
			this->msg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->msg->ForeColor = System::Drawing::Color::Red;
			this->msg->Location = System::Drawing::Point(114, 48);
			this->msg->Name = L"msg";
			this->msg->Size = System::Drawing::Size(78, 13);
			this->msg->TabIndex = 12;
			this->msg->Text = L"Not Connect";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(235, 128);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(25, 21);
			this->button3->TabIndex = 13;
			this->button3->Text = L"#";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// groupBox1
			// 
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(13, 16);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(269, 287);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Port Settings";
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(483, 52);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Power (W)";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(489, 218);
			this->chart1->TabIndex = 26;
			this->chart1->Text = L"chart1";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label10->Location = System::Drawing::Point(295, 284);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(18, 12);
			this->label10->TabIndex = 35;
			this->label10->Text = L"- - -";
			// 
			// time
			// 
			this->time->AutoSize = true;
			this->time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->time->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->time->Location = System::Drawing::Point(298, 23);
			this->time->Name = L"time";
			this->time->Size = System::Drawing::Size(68, 17);
			this->time->TabIndex = 34;
			this->time->Text = L"----------";
			// 
			// save
			// 
			this->save->Enabled = false;
			this->save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save->Location = System::Drawing::Point(337, 230);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(120, 40);
			this->save->TabIndex = 33;
			this->save->Text = L"Start Recording";
			this->save->UseVisualStyleBackColor = true;
			this->save->Click += gcnew System::EventHandler(this, &MyForm::save_Click_1);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(308, 88);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 13);
			this->label9->TabIndex = 32;
			this->label9->Text = L"Voltage :-";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(307, 128);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 13);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Current  :-";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(308, 166);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 13);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Power   :-";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(382, 166);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 13);
			this->label6->TabIndex = 29;
			this->label6->Text = L"----------";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(382, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 13);
			this->label5->TabIndex = 28;
			this->label5->Text = L"----------";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(382, 88);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 27;
			this->label4->Text = L"----------";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(897, 280);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 36;
			this->button4->Text = L"Clear";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 311);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->time);
			this->Controls->Add(this->save);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->msg);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->groupBox1);
			this->MaximumSize = System::Drawing::Size(1000, 350);
			this->MinimumSize = System::Drawing::Size(550, 350);
			this->Name = L"MyForm";
			this->Text = L"   Data";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:Int64 data;
	private:Int64 v;
	private:Int64 a;

	private:float vol = 0;
	private:float amp = 0;
	private:float pow = 0;

	private:String^ svol;
	private:String^ samp;
	private:String^ spow;

	private:String^ sdata;

	private:String^ stime;
	 
	private:String^ graphName = L"Power (W)";

	private:String ^Path = "data/data.txt";

	private:int size = 30;
	private:array<float>^ graphArray = gcnew array<float>(size);

	private:bool text = false;

	private:void findPort(void) {
		array<Object^>^ objectArray = SerialPort::GetPortNames();
		this->comboBox1->Items->AddRange(objectArray); 
	}
	private:void initArray(void) {
		for (int n = 0; n < size; n++) {
			graphArray[n] = 0;
		}
	}
	private:void push(float value) {

		for (int n = 0; n < size - 1; n++) {

			graphArray[n] = graphArray[n + 1];
		}
		graphArray[size - 1] = value;
	}

	//Connect
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		if (this->comboBox1->Text == String::Empty || this->comboBox2->Text == String::Empty) {

			this->msg->ForeColor = System::Drawing::Color::Red;
			this->msg->Text = "Select PORT Settings";
		}
		else {
			try {
				if (!this->serialPort1->IsOpen) {

					this->comboBox1 -> Enabled = false;
					this->comboBox2 -> Enabled = false;
					this->button1->Enabled = false;
					this->button2->Enabled = true;
					this->button3 -> Enabled = false;

					this->serialPort1->PortName = this->comboBox1->Text;
					this->serialPort1->BaudRate = Int32::Parse(this->comboBox2->Text);
					
					this->msg->ForeColor = System::Drawing::Color::Green;
					this->msg->Text = "Connected";

					this->save->ForeColor = System::Drawing::Color::Green;
					this->save->Enabled = true;

					this->timer1->Enabled = true;
					this->serialPort1->Open();
					this->progressBar1->Value = 100;
				}
				else {
					this->msg->ForeColor = System::Drawing::Color::Red;
					this->msg->Text = "Port is not opened";
				}

			}
			catch (UnauthorizedAccessException^) {

				this->msg->ForeColor = System::Drawing::Color::Red;
				this->msg->Text = "UnauthorizedAccess";
			}
		}
	}
	//disconnect
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->serialPort1->Close();
		this->progressBar1->Value = 0;

		this->save->Enabled = false;
		text = false;

		this->msg->ForeColor = System::Drawing::Color::Red;
		this->msg->Text = "Not Connect";

		this->label4->Text = "----------";
		this->label5->Text = "----------";
		this->label6->Text = "----------";

		this->comboBox1->Enabled = true;
		this->comboBox2->Enabled = true;
		this->button1->Enabled = true;
		this->button2->Enabled = false;
		this->button3->Enabled = true;
	}
	
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

		if (this->serialPort1->IsOpen) {

			try {
				data = System::Convert::ToInt64(this->serialPort1->ReadLine());

				v = data % 10000;
				a = int(data / 10000);

				vol = float(v);
				vol = vol / 100;

				amp = float(a);
				amp = amp / 100;

				pow = amp*vol;

				svol = System::Convert::ToString(vol) + " V";
				samp = System::Convert::ToString(amp) + " A";
				spow = System::Convert::ToString(pow) + " W";


				this->label4->Text = svol;
				this->label5->Text = samp;
				this->label6->Text = spow;

				sdata = stime + "   " + spow + "  " + svol + "  " + samp;

				if (text) {
					StreamWriter^ datatxt = File::AppendText(Path);
					datatxt->WriteLine(sdata);
					this->label10->Text = sdata;
					datatxt->Close();
				}

				push(pow);

				chart1->Series[graphName]->Points->Clear();

				for (int n = 0; n < size; n++) {
					chart1->Series[graphName]->Points->AddXY(" ", graphArray[n]);
				}
				
			}
			catch (TimeoutException^) {
				this->msg->ForeColor = System::Drawing::Color::Red;
				this->msg->Text = "TimeoutException";
				this->timer1->Enabled = false;
			}
			catch(FormatException^){
				this->msg->ForeColor = System::Drawing::Color::Red;
				this->msg->Text = "FormatException";
				this->timer1->Enabled = false;
			}
		}
		else {
			this->msg->ForeColor = System::Drawing::Color::Red;
			this->msg->Text = "Port Not Opend";
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->comboBox1->Items->Clear();
		findPort();
	}
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
		stime = DateTime::Now.ToString();
		this->time->Text = stime;
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		findPort();
		chart1->Series[graphName]->Points->Clear();
		initArray();
	}
	private: System::Void save_Click_1(System::Object^  sender, System::EventArgs^  e) {
		text = !text;
		if (text) {
			this->save->Text = L"Stop Recording";
			this->save->ForeColor = System::Drawing::Color::Red;
		}
		else {
			this->save->Text = L"Start Recording";
			this->label10->Text = "- - -";
			this->save->ForeColor = System::Drawing::Color::Green;
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		initArray();
		chart1->Series[graphName]->Points->Clear();
	}
};
}
