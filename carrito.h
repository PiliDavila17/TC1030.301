/*
 * Autor: Maria del Pilar Davila Verduzco
 * Matricula: A01708943
 * Fecha: Junio 2022
 *
 * Objeto Carrito, se encarga de recibir los objetos y almacenarlo en listas
 * para despues imprimir el total de las mismas, mediante polimorfismo
 */

#ifndef CARRITO_H
#define CARRITO_H

#include "ropa.h"
#include "pantalon.h"
#include "falda.h"
#include "chamarra.h"
#include "blusa.h"

class Carrito
{
private:
    Ropa *prendas[1000];
    int count;

public:
    Carrito(){};

    void muestraPrendas();

    void agregaBlusas(string, string, string, int);
    void agregaPantalon(string, string, string, string, int);
    void agregaFalda(string, string, string, int);
    void agregaChamarra(string, string, string, string, int);
    void agregaChamarra(string, string, int);

    void eliminaPrendas();
    int calculaTotal();
};

/* Funciones de la clase Carrito
 * muestraPrendas()
 * recibe las prendas que escogió el cliente
 * devuelve y muestra las prendas recibidas
 */
void Carrito::muestraPrendas()
{
    for (int i = 0; i < count; i++)
        prendas[i]->muestraDatos();
}

/* Funciones de la clase Carrito
 * agregaBlusa() 
 * Crea objetos tipo Blusa y los guarda en prendas[]
 * Suma uno al contador de prendas
 */
void Carrito::agregaBlusas(string ta, string ti, string sec, int tot)
{
    prendas[count] = new Blusa(ta, ti, sec, tot);
    count++;
}
/* Funciones de la clase Carrito
 * agregaPantalon() 
 * Crea objetos tipo Pantalon y los guarda en prendas[]
 * Suma uno al contador de prendas
 */
void Carrito::agregaPantalon(string ta, string ti, string sec, string est, int tot)
{
    prendas[count] = new Pantalon(ta, ti, sec, est, tot);
    count++;
}
/* Funciones de la clase Carrito
 * 
 * Crea objetos tipo Falda y las guarda en prendas[]
 * Suma uno al contador de prendas
 */
void Carrito::agregaFalda(string ta, string ti, string sec, int tot)
{
    prendas[count] = new Falda(ta, ti, sec, tot);
    count++;
}
/* Funciones de la clase Carrito
 * Crea objetos tipo Chamarra (Primer constructor) y las guarda en prendas[]
 * Suma uno al contador de prendas
 */
void Carrito::agregaChamarra(string ta, string ti, string sec, string mat, int tot)
{
    prendas[count] = new Chamarra(ta, ti, sec, mat, tot);
    count++;
}
/* Funciones de la clase Carrito
 * Crea objetos tipo Chamarra(segundo constructor) y las guarda en prendas[]
 * Suma uno al contador de prendas
 */
void Carrito::agregaChamarra(string ta, string ti, int tot)
{
    prendas[count] = new Chamarra(ta, ti, tot);
    count++;
}
/* Funciones de la clase Carrito
 * eliminaPrendas()
 * Elimina las prendas que se ingresaron a prendas[]
 * Devuelve prendas vacio 
 */
void Carrito::eliminaPrendas()
{
    for (int i = 0; i < count; i++)
        delete prendas[i];

    count = 0;
}
/* Funciones de la clase Carrito
 * calculaTotal()
 * Calcula el total de objetos en prendas[]
 * Devuelve el total de prendas
 */
int Carrito::calculaTotal()
{
    int total_aux = 0;

    for (int i = 0; i < count; i++)
    {
        total_aux += prendas[i]->getTotal();
    }

    return total_aux;
}

#endif