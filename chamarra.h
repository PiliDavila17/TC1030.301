/*
Autor: Maria del Pilar Davila Verduzco
Matrícula: A01708943
Fecha: Junio 2022

Clase Chamarra (objeto) 
adquiere un atributo propio "Material"
*/

#ifndef CHAMARRAS_H_
#define CHAMARRAS_H_

#include"ropa.h"
#include <sstream>
#include <iostream>

using namespace std;

class Chamarra : public Ropa{
private:
	string material;
	
public:
	Chamarra() {}; //Constructor por default

	//Implementacion de sobrecarga
	Chamarra(string ta, string ti) : Ropa(ta, ti) {	};
	Chamarra(string ta, string ti, string sec, string ma) :Ropa(ta, ti, sec) {
		material = ma;
	}

	//Polimorfismo apuntador a clase Ropa
	void precio() {
		cout << "El precio de una chamarra es de $750" << endl;
	}
	//Metodos de acceso
	string getMaterial() {
		return material;
	}
	
	void setMaterial(string ma);
	string to_string();
	
	Chamarra(string ta, string ti, string ma) :Ropa(ta, ti, ma) {
		material = ma;
	}
};

void Chamarra::setMaterial(string ma) {
	material = ma;
}

#endif
