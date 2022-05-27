/*
Autor: Maria del Pilar Davila Verduzco
Matrícula: A01708943
Fecha: Mayo 2022

Clase Chamarra hija de Ropa
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
	Chamarra() {
	};
	Chamarra(string ta, string ti) : Ropa(ta, ti) {	};
	Chamarra(string ta, string ti, string sec, string ma) :Ropa(ta, ti, sec) {
		material = ma;
	}
	
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
