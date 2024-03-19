#include "Matrix.h"
#include <iostream>
using namespace std;

Matrix::Matrix() {
}//constructor
Matrix::~Matrix() {

}//destructor

//metodos que modifican o retornan los atributos
void Matrix::set_fila(int _fila) 
{
	fila = _fila;
}
int Matrix::get_fila() 
{
	return fila;
}

void Matrix::set_column(int _column) 
{
	column = _column;
}
int Matrix::get_column() 
{
	return column;
}

void Matrix::mostrarMat(int matriz[MAX][MAX], int fila, int column)
{
	for (int i = 0; i < fila; i++)
	{
		for (int j = 0; j < column; j++) {
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}
}
void Matrix::cargarMat(int matriz[MAX][MAX], int fila, int column) 
{
	for (int i = 0; i < fila; i++)
		for (int j = 0; j < column; j++) {
			cout << "MAT[" << i << "][" << j << "]= ";
			cin >> matriz[i][j];
		}
}
float Matrix::promedio(int matriz[MAX][MAX], int fila, int column) 
{
	float prom, s = 0;
	for (int i = 0; i < fila; i++)
		for (int j = 0; j < column; j++)
			s = s + matriz[i][j];
	prom = s / (fila * column);
	return prom;
}
int Matrix::mayor(int matriz[MAX][MAX], int fila, int column) 
{
	int may = matriz[0][0];
	for (int i = 0; i < fila; i++)
		for (int j = 0; j < column; j++)
			if (matriz[i][j] > may)
				may = matriz[i][j];
	return may;
}
