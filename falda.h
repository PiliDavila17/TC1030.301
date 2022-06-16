/*
 * Autor: Maria del Pilar Davila Verduzco
 * Matricula: A01708943
 * Fecha: Junio 2022
 *
 * Objeto Falda de tipo Ropa
 */

#ifndef FALDA_H
#define FALDA_H

#include "ropa.h"//Biblioteca de metodos de ropa

//Declaro la clase Falda que hereda de Ropa
class Falda : public Ropa {
public:
    // Constructores y metodos
    Falda() : Ropa(){};
    Falda(string ta, string ti, string sec, int tot) : Ropa(ta, ti, sec, tot){};

    // funciones de la clase
    void muestraDatos()//Muestra los detales del objeto creado
    {
        cout << "\nDetalles de la falda" << endl
             << "Talla: " << talla
             << "\nTipo: " << tipo
             << "\nSeccion: " << seccion
             << endl;
    }
};

#endif