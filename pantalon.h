/*
Autor: Maria del Pilar Davila Verduzco
Matrícula: A01708943
Fecha: Mayo 2022

Clase Pantalones
Hija de Ropa
*/


#ifndef PANTALONES_H_
#define PANTALONES_H_
#include"ropa.h"

#include <sstream>
#include <iostream>

using namespace std;

//Declaracion de la clase
class Pantalon : public Ropa {
//Variable que tendrá únicamente esta clase
private:
	string estilo;
	string tipo;
//Declaracion de métodos y constructores
public:
	Pantalon() {};
	//Pantalon(string ta, string ti, string ep) : Ropa(ta, ti, ep) {
	//};
	Pantalon(string ta, string ti, string est, string sec) :Ropa(ta, ti, sec), estilo(est), tipo(ti) {}

	void precio() {
		cout << "El precio de un pantalon es de $400" << endl;
	}
	string getEstilo() {
		return estilo;
	}
	void setEstilo(string es);
	string to_string();
};

void Pantalon::setEstilo(string es) {
	estilo = es;
};

#endif
