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
	int style; //Параметр, отвечающий за стиль рисовки линии
	float tr_width = 1; 
	float line_width = 1; //Толщина линии
	float traj_width = 1; //Толщина графика
	double angleStarting = 0.2;
	double angleFinishing = 3; // оборот в 360 градусов (6,28 радиан) 
	double angleStep = 0.1;
	double angle = angleStarting;
	double R;
	int x;
	int y;





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
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label8;


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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
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
			this->label3->Size = System::Drawing::Size(77, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Цвет заливки";
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
			this->button1->Location = System::Drawing::Point(450, 252);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 36);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Построить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(428, 199);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(162, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Крайняя левая и правая точка";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(450, 215);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(32, 20);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(503, 215);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(32, 20);
			this->textBox4->TabIndex = 11;
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
			this->textBox6->Location = System::Drawing::Point(571, 54);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(43, 20);
			this->textBox6->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(568, 38);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(140, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Ширина линии траектории";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(545, 175);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(45, 20);
			this->textBox7->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(545, 162);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"max ширина";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(711, 359);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
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
			style = 0;
			if (style == 0) { MainPen->DashStyle = System::Drawing::Drawing2D::DashStyle::Solid; }
			if (style == 1) { MainPen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dot; }
			if (style == 2) { MainPen->DashStyle = System::Drawing::Drawing2D::DashStyle::DashDot; }
			if (style == 3) { MainPen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dash; }
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
		style = 3;
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
	private: void draw_calcul_line(array<Point> ^p, int size_max, int time, int a)
	{
		int i = 0;
		//int size = 0;
		angle = angleStarting;

		bool UpDown = true; //Переменная для определения пульсации 

		while (i < 28) {
			Paint_Clear();
			draw_agnesi_trajectory(p);
			if (size_max == 1) {
				Paint_Clear();
				draw_agnesi_trajectory(p);
				draw_line(a,p[i].X);
				draw_side_line(p[i].X, p[i].X,(-2)*a,  p[i].Y);
				double crossed = sqrt(pow(a,2) - pow(p[i].Y, 2));
				draw_side_line(crossed,  p[i].X, p[i].Y, p[i].Y);
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
					draw_line(a,p[i].X);
					draw_side_line(p[i].X, p[i].X, (-2)*a, p[i].Y);
					double crossed = sqrt(pow(a, 2) - pow(p[i].Y, 2));
					draw_side_line(crossed, p[i].X, p[i].Y, p[i].Y);
					Sleep(time); //время приостановки прорисовки
					i++;

				}
				if (UpDown == false)
				{
					line_width = line_width - 0.5;
					draw_line(a,p[i].X);
					draw_side_line(p[i].X, p[i].X, (-2)*a, p[i].Y);
					double crossed = sqrt(pow(a, 2) - pow(p[i].Y, 2));
					draw_side_line(crossed, p[i].X, p[i].Y, p[i].Y);
					Sleep(time); //время приостановки прорисовки
					i++;
				}
			}
		}
		//Sleep(time); //время приостановки прорисовки

	}
#pragma endregion
				 Color way_color;
				 Color line_color;
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (colorDialog1->ShowDialog() == ::System::Windows::Forms::DialogResult::OK)
		{
			pictureBox1->BackColor = colorDialog1->Color;
			line_color = colorDialog1->Color;
		}
	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		
		param_array[0] = Convert::ToInt32(textBox1->Text);
		param_array[1] = Convert::ToInt32(textBox2->Text);
		param_array[2] = Convert::ToInt32(textBox3->Text);
		param_array[3] = Convert::ToInt32(textBox4->Text);
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
		p2 = gcnew array<Point>(28);	// точки для прорисовки (LastT/Step)
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
	textBox3->Text = "200";
	textBox4->Text = "100";
	textBox5->Text = "2";
	textBox7->Text = "5";
	textBox6->Text = "1";
	Paint_axis(axis_x, axis_y);
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
