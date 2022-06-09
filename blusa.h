/*
Autor: Maria del Pilar Davila Verduzco
Matrícula: A01708943
Fecha: Junio 2022

Objeto Blusa de tipo Ropa
*/

#ifndef BLUSAS_H_
#define BLUSAS_H_

#include <iostream>
#include "ropa.h"

using namespace std;


//Declaracion de objeto blusa que hereda de Ropa
class Blusa : public Ropa {

//Declaro los metodos del objeto
public:
	
	Blusa() {};//Constructor por default

	Blusa(string ta, string ti, string sec) : Ropa(ta, ti, sec) {};
	void precio() {
		cout << "El precio de una blusa es de $250" << endl;
	}

};

#endif
