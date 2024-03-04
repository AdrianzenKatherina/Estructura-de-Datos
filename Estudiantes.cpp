#include "Estudiante.h"
#include <string>
#include <iostream>

using namespace std;

Estudiante::Estudiante() {

}
Estudiante::~Estudiante() {

}

void Estudiante::set_nombre(string n) {
	nombre = n;
}
string Estudiante::get_nombre() {
	return nombre;
}
