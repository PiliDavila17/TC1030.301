/*
Autor: Maria del Pilar Davila Verduzco
Matrícula: A01708943
Fecha: mayo 2022

Clase Blusas
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
	Blusa(string ta, string ti) : Ropa(ta, ti) {};
	Blusa(string ta, string ti, string sec) : Ropa(ta, ti, sec) {};

};

#endif
