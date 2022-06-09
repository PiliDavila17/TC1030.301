/*
Autor: Maria del Pilar Davila Verduzco
Matrícula: A01708943
Fecha: mayo 2022

Clase Carrito
Se encarga de recibir las prendas elegidas por el usuario
*/


#ifndef _CARRITO_H_
#define _CARRITO_H_

#include <iostream>
#include<string>

using namespace std;

#include"blusa.h"
#include"falda.h"
#include"pantalon.h"
#include"chamarra.h"
#include"ropa.h"

//Declaracion de la clase
class Carrito {
//Variables unicas de la clase
private:
	Blusa blusas[10];
	Falda faldas[10];
	Pantalon pantalones[10];
	Chamarra chamarras[10];
	int pos_blus;
	int pos_pant;
	int pos_fal;
	int pos_cham;

	
//Metodos y constructores
public:
	Carrito() : pos_blus(0), pos_pant(0), pos_fal(0), pos_cham(0) {};
	void agregaBlusa(Blusa);
	void agregaPantalon(Pantalon);
	void agregaFalda(Falda);
	void agregaCham(Chamarra);

	int getpos_blus();
	int getpos_fal();
	int getpos_pant();
	int getpos_cham();
	

	Blusa getBlusa(int);
	Pantalon getPantalon(int);
	Falda getFalda(int);
	Chamarra getChamarra(int);
	
};
//Metodos encargados de agregar información de las clases anteriores
void Carrito::agregaBlusa(Blusa blus) {
	if (pos_blus < 10) {
		blusas[pos_blus] = blus;
		pos_blus++;
	}
}
Blusa Carrito::getBlusa(int i) {
	return blusas[i];
}

int Carrito::getpos_blus() {
	return pos_blus;
}

void Carrito::agregaPantalon(Pantalon pant) {
	if (pos_pant < 10) {
		pantalones[pos_pant] = pant;
		pos_pant++;
	}

}

Pantalon Carrito::getPantalon(int i) {
	return pantalones[i];
}
int Carrito::getpos_pant() {
	return pos_pant;
}

void Carrito::agregaFalda(Falda fal) {
	if (pos_fal < 10) {
		
		faldas[pos_fal] = fal;
		pos_fal++;
	}
}

Falda Carrito::getFalda(int i) {
	return faldas[i];
}
int Carrito::getpos_fal() {
	return pos_fal;
}

void Carrito::agregaCham(Chamarra cham) {
	if (pos_cham < 10) {
		chamarras[pos_cham] = cham;
		pos_cham++;
	}
}
Chamarra Carrito::getChamarra(int i) {
	return chamarras[i];
}

int Carrito::getpos_cham() {
	return pos_cham;
}



#endif
