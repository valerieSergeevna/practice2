#pragma once
#include <windows.h>
#include <math.h>

namespace task1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//perem
	int param_array[7];
	int axis_x = 200;
	int axis_y = 200;
	int style,style2; //Параметр, отвечающий за стиль рисовки линии
	float tr_width = 1; 
	float line_width = 1; //Толщина линии
	float line_width2 = 1;
	float traj_width = 1; //Толщина графика
	double angleStarting = 0.2;
	double angleFinishing = 3; // оборот в 360 градусов (6,28 радиан) 
	double angleStep = 0.1;
	double angle = angleStarting;
	double R;
	int x;
	int y;
	bool check = false;




	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;



	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ComboBox^  comboBox2;


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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(450, 55);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(23, 20);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Верзьера Аньези";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Location = System::Drawing::Point(12, 30);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(403, 315);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox2_Paint);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(450, 94);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(85, 20);
			this->textBox1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(447, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Параметр а";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(447, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(161, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Цвет заливки основной линии";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(447, 123);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Скорость ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(450, 139);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(85, 20);
			this->textBox2->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(617, 295);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 50);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Построить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(450, 176);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(35, 20);
			this->textBox5->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(447, 162);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Ширина линии";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(616, 94);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(43, 20);
			this->textBox6->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(613, 78);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(140, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Ширина линии траектории";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(450, 215);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(45, 20);
			this->textBox7->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(447, 199);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"max ширина";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"штрихованная", L"сплошная", L"в точку", L"точка тире" });
			this->comboBox1->Location = System::Drawing::Point(450, 259);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 18;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(447, 243);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"тип штриховки";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(614, 39);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(171, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Цвет заливки линии траектории";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->Location = System::Drawing::Point(617, 55);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(23, 20);
			this->pictureBox3->TabIndex = 20;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(791, 39);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(174, 13);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Цвет заливки линии крутящейся";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::White;
			this->pictureBox4->Location = System::Drawing::Point(794, 55);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(23, 20);
			this->pictureBox4->TabIndex = 25;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(790, 78);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(143, 13);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Ширина линии крутящейся";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(793, 94);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(43, 20);
			this->textBox3->TabIndex = 23;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(791, 122);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(81, 13);
			this->label12->TabIndex = 28;
			this->label12->Text = L"тип штриховки";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"штрихованная", L"сплошная", L"в точку", L"точка тире" });
			this->comboBox2->Location = System::Drawing::Point(794, 138);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 27;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(966, 359);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		private: void Paint_axis(int x0, int y0)
		{
			Graphics^ Графика = pictureBox2->CreateGraphics();
			Графика->DrawLine(Pens::Gray, x0, 0, x0, 1000);
			Графика->DrawLine(Pens::Gray, 0, y0, 1000, y0);
		}
		private: void Paint_Clear()
		 {
			Graphics^ Графика = pictureBox2->CreateGraphics();
			Графика->Clear(Color::White);
			Paint_axis(axis_x, axis_y);
		 }

		private: void draw_agnesi_trajectory(array<Point> ^p)
		{

			Pen^ MainPen = gcnew Pen(way_color, traj_width);
			//style = 0;
			/*if (style == 0) { MainPen->DashStyle = System::Drawing::Drawing2D::DashStyle::Solid; }
			if (style == 1) { MainPen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dot; }
			if (style == 2) { MainPen->DashStyle = System::Drawing::Drawing2D::DashStyle::DashDot; }
			if (style == 3) { MainPen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dash; }*/
			Graphics^ Графика = pictureBox2->CreateGraphics();
			Графика->DrawLines(MainPen, p);	// траектория 
		}

		private: void Paint_Graphic(int a, array<Point> ^p)
		{
			Paint_Clear();
			int i = 0;
			//angle = angleStarting;
			while (angle <= angleFinishing)
			{
				x = 2*a * (cos(angle)/ sin(angle));	
				y = a* (1-cos(2*angle));
				p[i] = Drawing::Point(x + axis_x, y + axis_y);
				angle += angleStep;
				i++;
			}

		}
	private: void draw_line(int a, int x)
	{
		
		Pen^ L_Pen = gcnew Pen(line_color, line_width);
		/*style = 1;*/
		if (style == 0) { L_Pen->DashStyle = System::Drawing::Drawing2D::DashStyle::Solid; }
		if (style == 1) { L_Pen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dot; }
		if (style == 2) { L_Pen->DashStyle = System::Drawing::Drawing2D::DashStyle::DashDot; }
		if (style == 3) { L_Pen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dash; }
		Graphics^ Графика = pictureBox2->CreateGraphics();
		Графика->DrawLine(L_Pen, axis_x, axis_y, x, (-2)*a);
		//Pen^ L_Pen2 = gcnew Pen(Color::Green, 1);
		//Графика->DrawLine(L_Pen2, axis_x, axis_y, x, (-2)*a);
		
	}

	private: void draw_side_line(int x1, int x2, int y1, int y2)
	{
		Pen^ L_Pen = gcnew Pen(Color::Green, 2);
		L_Pen->DashStyle = System::Drawing::Drawing2D::DashStyle::Solid;
		Graphics^ Графика = pictureBox2->CreateGraphics();
		Графика->DrawLine(L_Pen, x1, y1, x2, y2);

	}

	private: void draw_clock_line(int x1,  int y1,int x2, int y2)
	{
		Pen^ L_Pen = gcnew Pen(line_color2, line_width2);
		if (style2 == 0) { L_Pen->DashStyle = System::Drawing::Drawing2D::DashStyle::Solid; }
		if (style2 == 1) { L_Pen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dot; }
		if (style2 == 2) { L_Pen->DashStyle = System::Drawing::Drawing2D::DashStyle::DashDot; }
		if (style2 == 3) { L_Pen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dash; }
		//L_Pen->DashStyle = System::Drawing::Drawing2D::DashStyle::Solid;
		Graphics^ Графика = pictureBox2->CreateGraphics();
		Графика->DrawLine(L_Pen, x1, y1, x2, y2);

	}
	private: void draw_calcul_line(array<Point> ^p, int size_max, int time, int a)
	{
		
		double angleStarting = 0;
		double angleFinishing = 6.3; // оборот в 360 градусов (6,28 радиан) 
		double angleStep = 0.3;
		double angle = angleStarting;
		//int size = 0;
		angle = angleStarting;

		bool UpDown = true; //Переменная для определения пульсации 
		//while (true)
		//{
			int i = 0;
			while (i < 28) {
				Paint_Clear();
				draw_agnesi_trajectory(p);
				if (size_max == 1) {
					Paint_Clear();
					draw_agnesi_trajectory(p);
					draw_line(a, p[i].X);
					draw_side_line(p[i].X, p[i].X, (-2)*a, p[i].Y);
					double crossed = sqrt(pow(a, 2) - pow((p[i].Y - (axis_y + a)), 2)) + axis_x;
					if (p[i].X < axis_x)
						crossed = crossed - 2 * (crossed - axis_x);
					draw_side_line(crossed, p[i].X, p[i].Y, p[i].Y);
					double length = sqrt(pow((axis_x - p[i].X), 2) + pow((axis_y - p[i].Y), 2));
					draw_clock_line(axis_x, axis_y, length*cos(angle) + axis_x, length*sin(angle) + axis_y);
					angle += angleStep;
					Sleep(time);
					i++;

				}
				else {
					if (line_width >= size_max)
						UpDown = false;

					if (line_width == 1)
						UpDown = true;

					if (UpDown == true)
					{
						line_width = line_width + 5;
						draw_line(a, p[i].X);
						draw_side_line(p[i].X, p[i].X, (-2)*a, p[i].Y);
						double crossed = sqrt(pow(a, 2) - pow((p[i].Y - (axis_y + a)), 2)) + axis_x;
						if (p[i].X < axis_x)
							crossed = crossed - 2*(crossed - axis_x);
						draw_side_line(crossed, p[i].X, p[i].Y, p[i].Y);
						double length = sqrt(pow((axis_x - p[i].X), 2) + pow((axis_y - p[i].Y), 2));
						draw_clock_line(axis_x, axis_y, length*cos(angle) + axis_x, length*sin(angle) + axis_y);
						angle += angleStep;
						Sleep(time); //время приостановки прорисовки
						i++;


					}
					if (UpDown == false)
					{
						line_width = line_width - 0.5;
						draw_line(a, p[i].X);
						draw_side_line(p[i].X, p[i].X, (-2)*a, p[i].Y);
						double crossed = sqrt(pow(a, 2) - pow((p[i].Y - (axis_y + a)), 2)) + axis_x ;
						if (p[i].X < axis_x)
							crossed = crossed - 2 * (crossed - axis_x);
						draw_side_line(crossed, p[i].X, p[i].Y, p[i].Y);
						double length = sqrt(pow((axis_x - p[i].X), 2) + pow((axis_y - p[i].Y), 2));
						draw_clock_line(axis_x, axis_y, length*cos(angle) + axis_x, length*sin(angle) + axis_y);
						angle += angleStep;

						Sleep(time); //время приостановки прорисовки
						i++;
					}
				}

			}

			i = 27;
			while (i >= 0) {
				Paint_Clear();
				draw_agnesi_trajectory(p);
				if (size_max == 1) {
					Paint_Clear();
					draw_agnesi_trajectory(p);
					draw_line(a, p[i].X);
					draw_side_line(p[i].X, p[i].X, (-2)*a, p[i].Y);
					double crossed = sqrt(pow(a, 2) - pow((p[i].Y - (axis_y + a)), 2)) + axis_x;
					if (p[i].X < axis_x)
						crossed = crossed - 2 * (crossed - axis_x);
					draw_side_line(crossed, p[i].X, p[i].Y, p[i].Y);
					double length = sqrt(pow((axis_x - p[i].X), 2) + pow((axis_y - p[i].Y), 2));
					draw_clock_line(axis_x, axis_y, length*cos(angle) + axis_x, length*sin(angle) + axis_y);
					angle += angleStep;
					Sleep(time);
					i--;

				}
				else {
					if (line_width >= size_max)
						UpDown = false;

					if (line_width == 1)
						UpDown = true;

					if (UpDown == true)
					{
						line_width = line_width + 5;
						draw_line(a, p[i].X);
						draw_side_line(p[i].X, p[i].X, (-2)*a, p[i].Y);
						double crossed = sqrt(pow(a, 2) - pow((p[i].Y - (axis_y + a)), 2)) + axis_x ;
						if (p[i].X < axis_x)
							crossed = crossed - 2 * (crossed - axis_x);
						draw_side_line(crossed, p[i].X, p[i].Y, p[i].Y);
						double length = sqrt(pow((axis_x - p[i].X), 2) + pow((axis_y - p[i].Y), 2));
						draw_clock_line(axis_x, axis_y, length*cos(angle) + axis_x, length*sin(angle) + axis_y);
						angle += angleStep;
						Sleep(time); //время приостановки прорисовки
						i--;


					}
					if (UpDown == false)
					{
						line_width = line_width - 0.5;
						draw_line(a, p[i].X);
						draw_side_line(p[i].X, p[i].X, (-2)*a, p[i].Y);
						double crossed = sqrt(pow(a, 2) - pow((p[i].Y - (axis_y + a)), 2)) + axis_x ;
						if (p[i].X < axis_x)
							crossed = crossed - 2 * (crossed - axis_x);
						draw_side_line(crossed, p[i].X, p[i].Y, p[i].Y);
						double length = sqrt(pow((axis_x - p[i].X), 2) + pow((axis_y - p[i].Y), 2));
						draw_clock_line(axis_x, axis_y, length*cos(angle) + axis_x, length*sin(angle) + axis_y);
						angle += angleStep;

						Sleep(time); //время приостановки прорисовки
						i--;
					}
				}
			}
	//	}

}
#pragma endregion
				 Color way_color;
				 Color line_color;
				 Color line_color2;
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (colorDialog1->ShowDialog() == ::System::Windows::Forms::DialogResult::OK)
		{
			pictureBox1->BackColor = colorDialog1->Color;
			line_color = colorDialog1->Color;
		}
	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		if (!check) check = true; else check = false;
		param_array[0] = Convert::ToInt32(textBox1->Text);
		param_array[1] = Convert::ToInt32(textBox2->Text);
		param_array[2] = Convert::ToInt32(textBox3->Text);
		//param_array[3] = Convert::ToInt32(textBox4->Text);
		param_array[4] = Convert::ToInt32(textBox5->Text);
		param_array[5] = Convert::ToInt32(textBox6->Text);
		param_array[6] = Convert::ToInt32(textBox7->Text);
		int i = 0;
		array<Point> ^p2;
		int size = 0;
		int a = param_array[0]*(-1);
		traj_width = param_array[5];
		if (traj_width < 1) { error(traj_width); traj_width = 1; textBox6->Text = "1"; };
		if (traj_width > 20) { error(traj_width); traj_width = 20; textBox6->Text = "20"; };
		line_width = param_array[4];
		if (line_width < 1) { error(line_width); line_width = 1; textBox5->Text = "1"; };//поменять текст боксы 
		if (line_width > 10) { error(line_width); line_width = 10; textBox5->Text = "10"; };
		line_width2 = param_array[2];
		if (line_width2 < 1) { error(traj_width); traj_width = 1; textBox6->Text = "1"; };
		if (line_width2 > 10) { error(traj_width); traj_width = 10; textBox6->Text = "10"; };
		p2 = gcnew array<Point>(28);	
		int size_max = param_array[6];
		if (size_max < 0) { error(size_max); size_max = 0; textBox7->Text = "0"; };
		int time = param_array[1];
		if (time < 0) { error(time); time = 0; textBox2->Text = "0"; };
		if (time > 300) { error(time); time = 100; textBox2->Text = "300"; };
		Paint_Graphic(a, p2);
		//Paint_Clear();
		//draw_agnesi_trajectory(p2);
		draw_calcul_line(p2, size_max, time, a);
		//pictureBox2->Refresh();
	}
	 void error(int a) {
		MessageBox::Show("Недопустимое значение: " + a.ToString(), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	 };
private: System::Void pictureBox2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	way_color = Color::Red;
	line_color = Color::Black;
	textBox1->Text = "50";
	textBox2->Text = "200";
	textBox3->Text = "2";
	//textBox4->Text = "100";
	textBox5->Text = "2";
	textBox7->Text = "5";
	textBox6->Text = "1";
	Paint_axis(axis_x, axis_y);
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	switch (comboBox1->SelectedIndex)
	{
	case 0: style = 3; break;
	case 1: style = 0; break;
	case 2: style = 1; break;
	case 3: style = 2; break;
	}

}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	switch (comboBox2->SelectedIndex)
	{
	case 0: style2 = 3; break;
	case 1: style2 = 0; break;
	case 2: style2 = 1; break;
	case 3: style2 = 2; break;
	}
}
	private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (colorDialog1->ShowDialog() == ::System::Windows::Forms::DialogResult::OK)
		{
			pictureBox4->BackColor = colorDialog1->Color;
			line_color2 = colorDialog1->Color;
		}
	}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (colorDialog1->ShowDialog() == ::System::Windows::Forms::DialogResult::OK)
	{
		pictureBox3->BackColor = colorDialog1->Color;
		way_color = colorDialog1->Color;
	}
}
};
}
