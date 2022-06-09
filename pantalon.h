/*
Autor: Maria del Pilar Davila Verduzco
Matrícula: A01708943
Fecha: Junio 2022

Objeto Pantalon de tipo Ropa con variables de Estilo adicionales.
*/


#ifndef PANTALONES_H_
#define PANTALONES_H_
#include"ropa.h"

#include <sstream>
#include <iostream>

using namespace std;

//Declaracion del objeto Pantalon
class Pantalon : public Ropa {

//Declaracion de variables 
private:
	string estilo;
	string tipo;

public:

	Pantalon() {};//Constructor por default
	Pantalon(string ta, string ti, string est, string sec) :Ropa(ta, ti, sec), estilo(est), tipo(ti) {}

	void precio() {
		cout << "El precio de un pantalon es de $400" << endl;
	}


	string getEstilo() {
		return estilo;
	}

	void setEstilo(string es);

};

void Pantalon::setEstilo(string es) {
	estilo = es;
};

#endif
