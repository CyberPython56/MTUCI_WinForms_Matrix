#pragma once
using namespace System;
using namespace System::Windows::Forms;


double** input(int m, int n, double a, double b);
bool GetInt(TextBox^ Tx, String^ s, int& x);
bool GetDouble(TextBox^ Tx, String^ s, double& x);
void OutputMatr(double** matr, int m, int n, RichTextBox^ Rb);
void del(double** a, int m);
double** task(double** matr, int m, int n, double& x);
double** InputMatr(int m, int n, RichTextBox^ RB);
void fill(RichTextBox^ RB, double x);