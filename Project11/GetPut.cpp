#include "stdafx.h"

double** input(int m, int n, double a, double b) {
	double** matr = new double* [m];
	if (a > b) {
		double t = a;
		a = b; 
		b = t;
	}
	Random^ rnd = gcnew Random;
	for (int i = 0; i < m; i++) {
		*(matr + i) = new double[n];
		for (int j = 0; j < n; j++) {
			*(*(matr + i) + j) = double((rnd->Next(a * 100, b * 100))) / 100;
		}
	}
	return matr;
}

bool GetInt(TextBox^ Tx, String^ s, int& x) {
	if (Tx->Text->Length == 0) {
		MessageBox::Show(s, "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Tx->Focus();
		return false;
	}
	x = Convert::ToInt32(Tx->Text);
	if (x < 1) {
		MessageBox::Show(s, "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Tx->Focus();
		return false;
	}
	return true;
}

bool GetDouble(TextBox^ Tx, String^ s, double& x) {
	if (Tx->Text->Length == 0) {
		MessageBox::Show(s, "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Tx->Focus();
		return false;
	}
	x = Convert::ToDouble(Tx->Text);
	return true;
}

void OutputMatr(double** matr, int m, int n, RichTextBox^ RB) {
	RB->Clear();
	String^ text = "";
	for (int i = 0; i < m; i++) {
		String^ s = "";
		for (int j = 0; j < n; j++) s = s + String::Format("{0, 8:F2}", *(*(matr + i) + j));
		text += s + "\n";
	}
	RB->Text = text;
}

void del(double** a, int m) {
	for (int i = 0; i < m; i++) delete[] * (a + i);
	delete[] a;
}

double** InputMatr(int m, int n, RichTextBox^ RB) {
	String^ txt = RB->Text;
	while (txt->IndexOf("  ") != -1) {
		txt = txt->Replace("  ", " ");
	}
	array <String^>^ rows = txt->Split('\n');
	double** matr = new double* [m];
	for (int i = 0; i < m; i++) {
		array <String^>^ row = rows[i]->Split();
		*(matr + i) = new double[n];
		for (int j = 1; j < n + 1; j++) {
			*(*(matr + i) + j - 1) = Convert::ToDouble(row[j]);
		}
	}
	return matr;
}

void fill(RichTextBox^ RB, double x)
{
	int id = RB->Text->IndexOf(Convert::ToString(x));
	RB->SelectionStart = id;
	RB->SelectionLength = 6;
	RB->SelectionColor = System::Drawing::Color::White;
}