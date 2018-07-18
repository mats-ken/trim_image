#pragma once


namespace trim_image {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 の概要
	///
	/// 警告: このクラスの名前を変更する場合、このクラスが依存するすべての .resx ファイルに関連付けられた
	///          マネージ リソース コンパイラ ツールに対して 'Resource File Name' プロパティを
	///          変更する必要があります。この変更を行わないと、
	///          デザイナと、このフォームに関連付けられたローカライズ済みリソースとが、
	///          正しく相互に利用できなくなります。
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクタ コードを追加します
			//
			backColor = System::Drawing::Color::White;
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;

	private:
		/// <summary>
		/// 必要なデザイナ変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナ サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディタで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(524, 398);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 462);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(240, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Full-auto";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 416);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 36);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Paste";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(135, 416);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 36);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Copy";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(294, 416);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 36);
			this->button4->TabIndex = 4;
			this->button4->Text = L"↓";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(356, 416);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(56, 36);
			this->button5->TabIndex = 5;
			this->button5->Text = L"↑";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(418, 416);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(56, 36);
			this->button6->TabIndex = 6;
			this->button6->Text = L"→";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(480, 416);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(56, 36);
			this->button7->TabIndex = 7;
			this->button7->Text = L"←";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(294, 462);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(242, 36);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Trim all";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(548, 510);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"Trim image";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Drawing::Color backColor;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 button2_Click(sender, e);
				 button4_Click(sender, e);
				 button5_Click(sender, e);
				 button6_Click(sender, e);
				 button7_Click(sender, e);
				 button3_Click(sender, e);
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Clipboard^ theBoard;
				 if(theBoard->ContainsImage()){
					 pictureBox1->Image = theBoard->GetImage();
				 }
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 Clipboard^ theBoard;
				 theBoard->SetImage(pictureBox1->Image);
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 Bitmap^ theBitmap = gcnew Bitmap(pictureBox1->Image);
				 int x, top;
				 int hei = theBitmap->Height;
				 int wid = theBitmap->Width;

				 // 上端検出
				 for(top = 0; top < hei; top++){
					 for(x = 0; x < wid; x++){
						 System::Drawing::Color theColor = theBitmap->GetPixel(x, top);
						 if(theColor.R != backColor.R || theColor.G != backColor.G || theColor.B != backColor.B)
							  break;
					 }
					 if(x != wid)
						 break;
				 }

				 pictureBox1->Image = theBitmap->Clone(Rectangle(0, top, wid, hei - top), theBitmap->PixelFormat);
				 delete theBitmap;
			 }
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 Bitmap^ theBitmap = gcnew Bitmap(pictureBox1->Image);
				 int x, new_hei;
				 int hei = theBitmap->Height;
				 int wid = theBitmap->Width;

				 // 下端検出
				 for(new_hei = hei - 1; 0 < new_hei; new_hei--){
					 for(x = 0; x < wid; x++){
						 System::Drawing::Color theColor = theBitmap->GetPixel(x, new_hei);
						 if(theColor.R != backColor.R || theColor.G != backColor.G || theColor.B != backColor.B)
							  break;
					 }
					 if(x != wid)
						 break;
				 }
				 new_hei++;

				 // 切り抜き
				 pictureBox1->Image = theBitmap->Clone(Rectangle(0, 0, wid, new_hei), theBitmap->PixelFormat);
				 delete theBitmap;
			 }
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 Bitmap^ theBitmap = gcnew Bitmap(pictureBox1->Image);
				 int left, y;
				 int hei = theBitmap->Height;
				 int wid = theBitmap->Width;

				 // 左端検出
				 for(left = 0; left < wid; left++){
					 for(y = 0; y < hei; y++){
						 System::Drawing::Color theColor = theBitmap->GetPixel(left, y);
						 if(theColor.R != backColor.R || theColor.G != backColor.G || theColor.B != backColor.B)
							  break;
					 }
					 if(y != hei)
						 break;
				 }

				 // 切り抜き
				 pictureBox1->Image = theBitmap->Clone(Rectangle(left, 0, wid - left, hei), theBitmap->PixelFormat);
				 delete theBitmap;
			 }
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
				 Bitmap^ theBitmap = gcnew Bitmap(pictureBox1->Image);
				 int new_wid, y;
				 int hei = theBitmap->Height;
				 int wid = theBitmap->Width;

				 // 右端検出
				 for(new_wid = wid - 1; 0 < new_wid; new_wid--){
					 for(y = 0; y < hei; y++){
						 System::Drawing::Color theColor = theBitmap->GetPixel(new_wid, y);
						 if(theColor.R != backColor.R || theColor.G != backColor.G || theColor.B != backColor.B)
							  break;
					 }
					 if(y != hei)
						 break;
				 }
				 new_wid++;

				 // 切り抜き
				 pictureBox1->Image = theBitmap->Clone(Rectangle(0, 0, new_wid, hei), theBitmap->PixelFormat);
				 delete theBitmap;
			 }
	private: System::Void pictureBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 Bitmap^ theBitmap = gcnew Bitmap(pictureBox1->Image);
				 int hei = theBitmap->Height;
				 int wid = theBitmap->Width;
				 int x = e->X * wid / pictureBox1->Size.Width;
				 int y = e->Y * hei / pictureBox1->Size.Height;

				 backColor = theBitmap->GetPixel(x, y);

				 // 切り抜き
				 if(System::Windows::Forms::MouseButtons::Left == e->Button){
					 pictureBox1->Image = theBitmap->Clone(Rectangle(x, y, wid - x, hei - y), theBitmap->PixelFormat);
				 }else{
					 pictureBox1->Image = theBitmap->Clone(Rectangle(0, 0, x + 1  , y + 1  ), theBitmap->PixelFormat);
				 }
				 delete theBitmap;
			 }
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
				 button4_Click(sender, e);
				 button5_Click(sender, e);
				 button6_Click(sender, e);
				 button7_Click(sender, e);
			 }
};
}

