/*
 * Autor: Maria del Pilar Davila Verduzco
 * Matricula: A01708943
 * Fecha: Junio 2022
 *
 * Objeto Blusa de tipo Ropa
 */

#ifndef BLUSA_H
#define BLUSA_H

#include "ropa.h" //Biblioteca de metodos 

//Declaro la clase Blusa que hereda de Ropa
class Blusa : public Ropa{

//Constructores y Metodos
public:
    Blusa() : Ropa(){};//Constructor por default
    Blusa(string ta, string ti, string sec, int tot)
        : Ropa(ta, ti, sec, tot){};


    /* Funciones de la clase
     * muestraDatos()
     * Recibe los detalles que el cliente escogio para el objeto blusa
     * parametros: talla, tipo, seccion
     * return los detalles
    */
};
    void Blusa::muestraDatos{
        cout << "\nDetalles de la blusa" << endl
             << "Talla: " << talla
             << "\nTipo: " << tipo
             << "\nSeccion: " << seccion
             << endl;
    }


#endif