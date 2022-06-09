/*
Autor: Maria del Pilar Davila Verduzco
Matrícula: A01708943
Fecha: Junio 2022

Objeto Chamarra de tipo Ropa con una variable Material adicional.
*/

#ifndef CHAMARRAS_H_
#define CHAMARRAS_H_

#include"ropa.h"
#include <sstream>
#include <iostream>

using namespace std;


//Declaro objeto Chamarra que hereda de Ropa
class Chamarra : public Ropa{

//Declaro variable
private:
	string material;

//Declaro los metodos del objeto
public:
	Chamarra() {}; //Constructor por default

	//Constructor con sobrecarga
	Chamarra(string ta, string ti) : Ropa(ta, ti) {	};
	Chamarra(string ta, string ti, string sec, string ma) :Ropa(ta, ti, sec) {
		material = ma;
	}

	void precio() {
		cout << "El precio de una chamarra es de $750" << endl;
	}
	string getMaterial() {
		return material;
	}
	
	void setMaterial(string ma);
	
	Chamarra(string ta, string ti, string ma) :Ropa(ta, ti, ma) {
		material = ma;
	}
};

void Chamarra::setMaterial(string ma) {
	material = ma;
}

#endif
