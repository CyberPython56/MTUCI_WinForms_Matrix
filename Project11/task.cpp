#include "stdafx.h"

double** task(double** matr, int m, int n, double& x) {
	x = matr[m - 1][n - 1];
	int row = m - 1, col = n - 1;
	for (int i = m - 1; i >= 0; i--) {
		for (int j = n - 1; j >= 0; j--) {
			if (matr[i][j] >= x) { x = matr[i][j]; row = i; col = j; }
		}
	}

	int k = 0;
	double** newmatr = new double* [m + 1];
	for (int i = 0; i < m + 1; i++) {
		*(newmatr + i) = new double[n];
		if (row == i) {
			for (int j = 0; j < n; j++) *(*(newmatr + i) + j) = 0,0;
			k++;
		}
		else for (int j = 0; j < n; j++) *(*(newmatr + i) + j) = matr[i - k][j];
	}
	
	return newmatr;
}