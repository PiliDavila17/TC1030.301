/*
Autor: Maria del Pilar Davila Verduzco
Matrícula: A01708943
Fecha: Junio 2022

Clase padre llamada Ropa 
hereda atributos de talla, tipo, sección y el precio mediante polimorfismo
*/

#ifndef ROPA_H
#define ROPA_H

#include<iostream>

using namespace std;
//Declaracion de la clase
class Ropa {
//Atributos heredables
protected:
	string talla;
	string tipo;
	string seccion;
	
//Metodos que tendrá el objeto
public:
	Ropa() {}; //constructor por default
	//Constructores sobrecarga
	Ropa(string ta, string ti) {
	};	
	Ropa(string ta, string ti, string sec) {
		talla = ta;
		tipo = ti;
		seccion = sec; 
	}
	//Metodos de acceso
	string getTalla() {
		return talla;
	}

	string getTipo() {
		return tipo;
	}

	void setTalla(string ta) {
		talla = ta;
	}

	void setTipo(string ti) {
		tipo = ti;
	}


	void setSeccion(string sec) {
		seccion = sec;
	}
	string to_string();
	
	string getSeccion() {
		return seccion;
	}
//Funcion precio polimórfica
	virtual void precio(){}
};
#endif
