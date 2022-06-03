/*
Autor: Maria del Pilar Davila Verduzco
Matrícula: A01708943
Fecha: Junio 2022

Clase blusa (objeto)
*/

#ifndef BLUSAS_H_
#define BLUSAS_H_

#include <iostream>
#include "ropa.h"

using namespace std;


//Declaracion de la clase
class Blusa : public Ropa {

public:
	Blusa() {};//Constructor
	//Blusa(string ta, string ti) : Ropa(ta, ti) {};
	Blusa(string ta, string ti, string sec) : Ropa(ta, ti, sec) {};
	void precio() {
		cout << "El precio de una blusa es de $250" << endl;
	}

};

#endif
