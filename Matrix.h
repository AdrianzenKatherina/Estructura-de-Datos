#pragma once
#define MAX 20
class Matrix
{
private:
	int fila;
	int column;
	int matriz[MAX][MAX];

public:
	Matrix();//constructor
	~Matrix();//destructor

	//metodos que modifican o retornan los atributos
	void set_fila(int _fila);
	int get_fila();

	void set_column(int _column);
	int get_column();

	void mostrarMat(int matriz[MAX][MAX], int fila, int column);
	void cargarMat(int matriz[MAX][MAX], int fila, int column);
	float promedio(int matriz[MAX][MAX], int fila, int column);
	int mayor(int matriz[MAX][MAX], int fila, int column);
};
