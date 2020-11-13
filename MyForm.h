#pragma once
#include "DoubleLinkedList.h";
#include "Node.h";
#include "Poligonos.h";
#include "Triangulo.h";
#include "Cuadrilatero.h";
#include "Pentagono.h";
#include "Hexagono.h";
#include "Heptagono.h";
#include "Octagono.h";
#include "Eneagono.h";
#include "Decagono.h";
#include <math.h>;

namespace Lab06DavidRodríguez1164619 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		DoubleLinkedList<Poligonos*>* myPoligonosList;
		MyForm(void)
		{
			
			InitializeComponent();
			myPoligonosList = new DoubleLinkedList<Poligonos*>();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
















	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Button^ btnDecagono;

	private: System::Windows::Forms::Button^ btnEneagono;

	private: System::Windows::Forms::Button^ btnOctagono;

	private: System::Windows::Forms::Button^ btnHeptagono;

	private: System::Windows::Forms::Button^ btnHexagono;

	private: System::Windows::Forms::Button^ btnPentagono;

	private: System::Windows::Forms::Button^ btnCuadrilatero;



	private: System::Windows::Forms::Button^ btnTriangulo;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtBase;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ pnlList;


	private: System::Windows::Forms::Label^ lblPoligono;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->btnDecagono = (gcnew System::Windows::Forms::Button());
			this->btnEneagono = (gcnew System::Windows::Forms::Button());
			this->btnOctagono = (gcnew System::Windows::Forms::Button());
			this->btnHeptagono = (gcnew System::Windows::Forms::Button());
			this->btnHexagono = (gcnew System::Windows::Forms::Button());
			this->btnPentagono = (gcnew System::Windows::Forms::Button());
			this->btnCuadrilatero = (gcnew System::Windows::Forms::Button());
			this->btnTriangulo = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtBase = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lblPoligono = (gcnew System::Windows::Forms::Label());
			this->pnlList = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox5->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->btnDecagono);
			this->groupBox5->Controls->Add(this->btnEneagono);
			this->groupBox5->Controls->Add(this->btnOctagono);
			this->groupBox5->Controls->Add(this->btnHeptagono);
			this->groupBox5->Controls->Add(this->btnHexagono);
			this->groupBox5->Controls->Add(this->btnPentagono);
			this->groupBox5->Controls->Add(this->btnCuadrilatero);
			this->groupBox5->Controls->Add(this->btnTriangulo);
			this->groupBox5->Controls->Add(this->label1);
			this->groupBox5->Controls->Add(this->txtBase);
			this->groupBox5->Location = System::Drawing::Point(28, 77);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(395, 381);
			this->groupBox5->TabIndex = 9;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Poligonos";
			this->groupBox5->Enter += gcnew System::EventHandler(this, &MyForm::groupBox5_Enter);
			// 
			// btnDecagono
			// 
			this->btnDecagono->Location = System::Drawing::Point(210, 325);
			this->btnDecagono->Name = L"btnDecagono";
			this->btnDecagono->Size = System::Drawing::Size(155, 36);
			this->btnDecagono->TabIndex = 14;
			this->btnDecagono->Text = L"Decágono";
			this->btnDecagono->UseVisualStyleBackColor = true;
			this->btnDecagono->Click += gcnew System::EventHandler(this, &MyForm::btnDecagono_Click);
			// 
			// btnEneagono
			// 
			this->btnEneagono->Location = System::Drawing::Point(210, 265);
			this->btnEneagono->Name = L"btnEneagono";
			this->btnEneagono->Size = System::Drawing::Size(155, 36);
			this->btnEneagono->TabIndex = 13;
			this->btnEneagono->Text = L"Eneágono";
			this->btnEneagono->UseVisualStyleBackColor = true;
			this->btnEneagono->Click += gcnew System::EventHandler(this, &MyForm::btnEneagono_Click);
			// 
			// btnOctagono
			// 
			this->btnOctagono->Location = System::Drawing::Point(210, 207);
			this->btnOctagono->Name = L"btnOctagono";
			this->btnOctagono->Size = System::Drawing::Size(155, 36);
			this->btnOctagono->TabIndex = 12;
			this->btnOctagono->Text = L"Octágono";
			this->btnOctagono->UseVisualStyleBackColor = true;
			this->btnOctagono->Click += gcnew System::EventHandler(this, &MyForm::btnOctagono_Click);
			// 
			// btnHeptagono
			// 
			this->btnHeptagono->Location = System::Drawing::Point(210, 153);
			this->btnHeptagono->Name = L"btnHeptagono";
			this->btnHeptagono->Size = System::Drawing::Size(155, 36);
			this->btnHeptagono->TabIndex = 11;
			this->btnHeptagono->Text = L"Heptágono";
			this->btnHeptagono->UseVisualStyleBackColor = true;
			this->btnHeptagono->Click += gcnew System::EventHandler(this, &MyForm::btnHeptagono_Click);
			// 
			// btnHexagono
			// 
			this->btnHexagono->Location = System::Drawing::Point(28, 325);
			this->btnHexagono->Name = L"btnHexagono";
			this->btnHexagono->Size = System::Drawing::Size(155, 36);
			this->btnHexagono->TabIndex = 10;
			this->btnHexagono->Text = L"Hexágono";
			this->btnHexagono->UseVisualStyleBackColor = true;
			this->btnHexagono->Click += gcnew System::EventHandler(this, &MyForm::btnHexagono_Click);
			// 
			// btnPentagono
			// 
			this->btnPentagono->Location = System::Drawing::Point(28, 265);
			this->btnPentagono->Name = L"btnPentagono";
			this->btnPentagono->Size = System::Drawing::Size(155, 36);
			this->btnPentagono->TabIndex = 9;
			this->btnPentagono->Text = L"Pentágono";
			this->btnPentagono->UseVisualStyleBackColor = true;
			this->btnPentagono->Click += gcnew System::EventHandler(this, &MyForm::btnPentagono_Click);
			// 
			// btnCuadrilatero
			// 
			this->btnCuadrilatero->Location = System::Drawing::Point(28, 207);
			this->btnCuadrilatero->Name = L"btnCuadrilatero";
			this->btnCuadrilatero->Size = System::Drawing::Size(155, 36);
			this->btnCuadrilatero->TabIndex = 8;
			this->btnCuadrilatero->Text = L"Cuadrilátero";
			this->btnCuadrilatero->UseVisualStyleBackColor = true;
			this->btnCuadrilatero->Click += gcnew System::EventHandler(this, &MyForm::btnCuadrilatero_Click);
			// 
			// btnTriangulo
			// 
			this->btnTriangulo->Location = System::Drawing::Point(28, 153);
			this->btnTriangulo->Name = L"btnTriangulo";
			this->btnTriangulo->Size = System::Drawing::Size(155, 36);
			this->btnTriangulo->TabIndex = 7;
			this->btnTriangulo->Text = L"Triangulo";
			this->btnTriangulo->UseVisualStyleBackColor = true;
			this->btnTriangulo->Click += gcnew System::EventHandler(this, &MyForm::btnTriangulo_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(117, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Base:";
			// 
			// txtBase
			// 
			this->txtBase->Location = System::Drawing::Point(157, 80);
			this->txtBase->Name = L"txtBase";
			this->txtBase->Size = System::Drawing::Size(100, 20);
			this->txtBase->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lblPoligono);
			this->groupBox1->Controls->Add(this->pnlList);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(444, 23);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(627, 509);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			// 
			// lblPoligono
			// 
			this->lblPoligono->AutoSize = true;
			this->lblPoligono->Location = System::Drawing::Point(29, 54);
			this->lblPoligono->Name = L"lblPoligono";
			this->lblPoligono->Size = System::Drawing::Size(51, 13);
			this->lblPoligono->TabIndex = 2;
			this->lblPoligono->Text = L"Poligono:";
			// 
			// pnlList
			// 
			this->pnlList->BackColor = System::Drawing::Color::White;
			this->pnlList->Location = System::Drawing::Point(29, 75);
			this->pnlList->Name = L"pnlList";
			this->pnlList->Size = System::Drawing::Size(569, 404);
			this->pnlList->TabIndex = 1;
			this->pnlList->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(220, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 25);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Insertar Poligono";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(148, 474);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(154, 38);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Limpiar panel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1083, 544);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	
		void DrawNode(Graphics^ canvas, int posx, int posy, int type, double area, double perimeter, double height, double width) {
			Brush^ brush = gcnew SolidBrush(Color::SkyBlue);
			Brush^ brushstring = gcnew SolidBrush(Color::White);
			System::Drawing::Font^ fuente = gcnew System::Drawing::Font("Arial", 10, FontStyle::Bold);

			switch (type)
			{
			case 1: {
				canvas->FillRectangle(brush, RectangleF(posx, posy, width * 5, height * 5));
				
			}break;
			case 2: {
			
				double altura = Math::Sqrt((width * width) + ((width / 2) * (width / 2)));
				PointF punto1 = PointF(posx, altura * 5);
				PointF punto2 = PointF(posx + width * 5, altura * 5);
				PointF punto3 = PointF(posx + (width / 2) * 5, posy);
				array<PointF>^ puntos = { punto1,punto2,punto3 };
				canvas->FillPolygon(brush,puntos);
				
			}break;
			case 3: {

				
				
				double altura = Math::Sqrt((width * width) + ((width / 2) * (width / 2)));
				PointF punto1 = PointF(posx + (height*2), altura * 5);
				PointF punto2 = PointF(posx + width * 5 + (height * 2), altura * 5);
				PointF punto3 = PointF(posx + width * 5 + height * 2 + (height * 2) , posy);
				PointF punto4 = PointF(posx + (width / 2) * 5 + (height * 2), posy - height * 2);
				PointF punto5 = PointF(posx - height * 2 + (height * 2), posy);
				array<PointF>^ puntos = { punto1,punto2,punto3, punto4, punto5};
				canvas->FillPolygon(brush, puntos);
				break;
			}
			default:
				break;
			}
			canvas->DrawString("Area: " + area, fuente, brushstring, posx + 1, posy + 20);
			canvas->DrawString("Perímetro: " + perimeter, fuente, brushstring, posx + 2, posy + 40);
		
		}

	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	txtBase->Enabled = false;
}
private: System::Void btnTriangulo_Click(System::Object^ sender, System::EventArgs^ e) {
	lblPoligono->Text = "Triangulo:";
	txtBase->Enabled = true;
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (lblPoligono->Text == "Triangulo:")
		{

			if ((txtBase->Text->Trim() != "")) {


				Poligonos* newTriangulo = new Triangulo();


				newTriangulo->width = Convert::ToDouble(txtBase->Text);
				int a = (newTriangulo->width * (pow(3, 1 / 2))) / 2;
				newTriangulo->height = a;
				newTriangulo->type = 2;
				newTriangulo->area = newTriangulo->GetArea();
				newTriangulo->perimeter = newTriangulo->GetPerimeter();
				myPoligonosList->InsertAtEnd(newTriangulo);

				/*inicia dibujo de lista*/
				if (!myPoligonosList->IsEmpty()) {
					Node<Poligonos*>* temp = myPoligonosList->start;

					for (int i = 0; i < myPoligonosList->count; i++) {
						Poligonos* actual = temp->value;
						DrawNode(pnlList->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->height, actual->width);
						temp = temp->next;
					}

				}
				/*Finaliza dibujo de lista*/

				MessageBox::Show("Triangulo insertado exitosamente, cantidad de elementos: " + myPoligonosList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		else
		{
			if (lblPoligono->Text == "Cuadrilátero:")
			{

				if ((txtBase->Text->Trim() != "")) {


					Poligonos* newCuadrilatero = new Cuadrilatero();
					newCuadrilatero->height = Convert::ToDouble(txtBase->Text);
					newCuadrilatero->width = Convert::ToDouble(txtBase->Text);
					newCuadrilatero->type = 1;
					newCuadrilatero->area = newCuadrilatero->GetArea();
					newCuadrilatero->perimeter = newCuadrilatero->GetPerimeter();
					myPoligonosList->InsertAtEnd(newCuadrilatero);

					/*inicia dibujo de lista*/
					if (!myPoligonosList->IsEmpty()) {
						Node<Poligonos*>* temp = myPoligonosList->start;

						for (int i = 0; i < myPoligonosList->count; i++) {
							Poligonos* actual = temp->value;
							DrawNode(pnlList->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->height, actual->width);
							temp = temp->next;
						}

					}
					/*Finaliza dibujo de lista*/

					MessageBox::Show("Cuadrilátero insertado exitosamente, cantidad de elementos: " + myPoligonosList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}


			}
			else
			{
				if (lblPoligono->Text == "Pentágono:")
				{

					if ((txtBase->Text->Trim() != "")) {


						Poligonos* newPentagono = new Pentagono();

						newPentagono->width = Convert::ToDouble(txtBase->Text);
						int a = (newPentagono->width * (pow(3, 1 / 2))) / 2;
						newPentagono->height = 2 * a;
						newPentagono->type = 3;
						newPentagono->area = newPentagono->GetArea();
						newPentagono->perimeter = newPentagono->GetPerimeter();
						myPoligonosList->InsertAtEnd(newPentagono);

						/*inicia dibujo de lista*/
						if (!myPoligonosList->IsEmpty()) {
							Node<Poligonos*>* temp = myPoligonosList->start;

							for (int i = 0; i < myPoligonosList->count; i++) {
								Poligonos* actual = temp->value;
								DrawNode(pnlList->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->height, actual->width);
								temp = temp->next;
							}

						}
						/*Finaliza dibujo de lista*/

						MessageBox::Show("Pentágono insertado exitosamente, cantidad de elementos: " + myPoligonosList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
				}
				else
				{
					if (lblPoligono->Text == "Hexágono:")
					{

						if ((txtBase->Text->Trim() != "")) {


							Poligonos* newHexagono = new Hexagono();

							newHexagono->width = Convert::ToDouble(txtBase->Text);
							int a = (newHexagono->width * (pow(3, 1 / 2))) / 2;
							newHexagono->height = 2 * a;
							newHexagono->type = 2;
							newHexagono->area = newHexagono->GetArea();
							newHexagono->perimeter = newHexagono->GetPerimeter();
							myPoligonosList->InsertAtEnd(newHexagono);

							/*inicia dibujo de lista*/
							if (!myPoligonosList->IsEmpty()) {
								Node<Poligonos*>* temp = myPoligonosList->start;

								for (int i = 0; i < myPoligonosList->count; i++) {
									Poligonos* actual = temp->value;
									DrawNode(pnlList->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->height, actual->width);
									temp = temp->next;
								}

							}
							/*Finaliza dibujo de lista*/

							MessageBox::Show("Hexágono insertado exitosamente, cantidad de elementos: " + myPoligonosList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
						}
					}
					else
					{
						if (lblPoligono->Text == "Heptágono:")
						{

							if ((txtBase->Text->Trim() != "")) {


								Poligonos* newHeptagono = new Heptagono();

								newHeptagono->width = Convert::ToDouble(txtBase->Text);
								int a = (newHeptagono->width * (pow(3, 1 / 2))) / 2;
								newHeptagono->height = 2 * a;
								newHeptagono->type = 3;
								newHeptagono->area = newHeptagono->GetArea();
								newHeptagono->perimeter = newHeptagono->GetPerimeter();
								myPoligonosList->InsertAtEnd(newHeptagono);

								/*inicia dibujo de lista*/
								if (!myPoligonosList->IsEmpty()) {
									Node<Poligonos*>* temp = myPoligonosList->start;

									for (int i = 0; i < myPoligonosList->count; i++) {
										Poligonos* actual = temp->value;
										DrawNode(pnlList->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->height, actual->width);
										temp = temp->next;
									}

								}
								/*Finaliza dibujo de lista*/

								MessageBox::Show("Heptágono insertado exitosamente, cantidad de elementos: " + myPoligonosList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
							}
						}
						else
						{
							if (lblPoligono->Text == "Octágono:")
							{

								if ((txtBase->Text->Trim() != "")) {


									Poligonos* newOctagono = new Octagono();

									newOctagono->width = Convert::ToDouble(txtBase->Text);
									int a = (newOctagono->width * (pow(3, 1 / 2))) / 2;
									newOctagono->height = 2 * a;
									newOctagono->type = 2;
									newOctagono->area = newOctagono->GetArea();
									newOctagono->perimeter = newOctagono->GetPerimeter();
									myPoligonosList->InsertAtEnd(newOctagono);

									/*inicia dibujo de lista*/
									if (!myPoligonosList->IsEmpty()) {
										Node<Poligonos*>* temp = myPoligonosList->start;

										for (int i = 0; i < myPoligonosList->count; i++) {
											Poligonos* actual = temp->value;
											DrawNode(pnlList->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->height, actual->width);
											temp = temp->next;
										}

									}
									/*Finaliza dibujo de lista*/

									MessageBox::Show("Octágono insertado exitosamente, cantidad de elementos: " + myPoligonosList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
								}
							}
							else
							{
								if (lblPoligono->Text == "Eneágono:")
								{

									if ((txtBase->Text->Trim() != "")) {


										Poligonos* newEneagono = new Eneagono();

										newEneagono->width = Convert::ToDouble(txtBase->Text);
										int a = (newEneagono->width * (pow(3, 1 / 2))) / 2;
										newEneagono->height = 2 * a;
										newEneagono->type = 3;
										newEneagono->area = newEneagono->GetArea();
										newEneagono->perimeter = newEneagono->GetPerimeter();
										myPoligonosList->InsertAtEnd(newEneagono);

										/*inicia dibujo de lista*/
										if (!myPoligonosList->IsEmpty()) {
											Node<Poligonos*>* temp = myPoligonosList->start;

											for (int i = 0; i < myPoligonosList->count; i++) {
												Poligonos* actual = temp->value;
												DrawNode(pnlList->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->height, actual->width);
												temp = temp->next;
											}

										}
										/*Finaliza dibujo de lista*/

										MessageBox::Show("Eneágono insertado exitosamente, cantidad de elementos: " + myPoligonosList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
									}
								}
								else
								{
									if (lblPoligono->Text == "Decágono:")
									{

										if ((txtBase->Text->Trim() != "")) {


											Poligonos* newDecagono = new Decagono();

											newDecagono->width = Convert::ToDouble(txtBase->Text);
											int a = (newDecagono->width * (pow(3, 1 / 2))) / 2;
											newDecagono->height = 2 * a;
											newDecagono->type = 2;
											newDecagono->area = newDecagono->GetArea();
											newDecagono->perimeter = newDecagono->GetPerimeter();
											myPoligonosList->InsertAtEnd(newDecagono);

											/*inicia dibujo de lista*/
											if (!myPoligonosList->IsEmpty()) {
												Node<Poligonos*>* temp = myPoligonosList->start;

												for (int i = 0; i < myPoligonosList->count; i++) {
													Poligonos* actual = temp->value;
													DrawNode(pnlList->CreateGraphics(), i * 100, 20, actual->type, actual->area, actual->perimeter, actual->height, actual->width);
													temp = temp->next;
												}

											}
											/*Finaliza dibujo de lista*/

											MessageBox::Show("Decágono insertado exitosamente, cantidad de elementos: " + myPoligonosList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
										}
									}
								}
							}
						}
					}
				}
			}
		}


	
	
	
	
	
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void btnCuadrilatero_Click(System::Object^ sender, System::EventArgs^ e) {
	lblPoligono->Text = "Cuadrilátero:";
	txtBase->Enabled = true;
}
private: System::Void btnPentagono_Click(System::Object^ sender, System::EventArgs^ e) {
	lblPoligono->Text = "Pentágono:";
	txtBase->Enabled = true;
}
private: System::Void btnHexagono_Click(System::Object^ sender, System::EventArgs^ e) {
	lblPoligono->Text = "Hexágono:";
	txtBase->Enabled = true;
}
private: System::Void btnHeptagono_Click(System::Object^ sender, System::EventArgs^ e) {
	lblPoligono->Text = "Heptágono:";
	txtBase->Enabled = true;
}
private: System::Void btnOctagono_Click(System::Object^ sender, System::EventArgs^ e) {
	
	lblPoligono->Text = "Octágono:";
	txtBase->Enabled = true;
}
private: System::Void btnEneagono_Click(System::Object^ sender, System::EventArgs^ e) {
	lblPoligono->Text = "Eneágono:";
	txtBase->Enabled = true;
}
private: System::Void btnDecagono_Click(System::Object^ sender, System::EventArgs^ e) {
	lblPoligono->Text = "Decágono:";
	txtBase->Enabled = true;
}
private: System::Void groupBox5_Enter(System::Object^ sender, System::EventArgs^ e) {
}
	   
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Vacio = "X";
	do
	{

	
	Node<Poligonos*>* temp = myPoligonosList->ExtractAtEnd();
	if (temp)
	{

	}
	else
	{
		Vacio = "O";
	}
	} while (Vacio != "O");
	
	pnlList->Refresh();
}
};
}
