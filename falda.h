/*
Autor: Maria del Pilar Davila Verduzco
Matrícula: A01708943
Fecha: Junio 2022

Objeto Falda de tipo Ropa
*/


#ifndef FALDAS_H_
#define FALDAS_H_

#include "ropa.h"

#include <sstream>
#include <iostream>

using namespace std;

//Declaracion del objeto Falda
class Falda : public Ropa {

//Declaro los metodos del objeto
public:
	Falda() {};//Constructor por default
	Falda(string ta, string ti, string sec) : Ropa(ta, ti, sec) {};

	void precio() {
		cout << "El precio de una falda es de $350" << endl;
	}

};

#endif
