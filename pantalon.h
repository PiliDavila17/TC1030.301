/*
 * Autor: Maria del Pilar Davila Verduzco
 * Matricula: A01708943
 * Fecha: Junio 2022
 *
 * Objeto Pantalon de tipo Ropa con una variable de Estilo adicional.
 */

#ifndef PANTALON_H
#define PANTALON_H

#include "ropa.h"//Biblioteca de los metodos a utilizar

//Declaro la clase Pantalon que hereda de Ropa
class Pantalon : public Ropa
{
private:
    string estilo;

public:
    // Constructores y metodos del objeto
    Pantalon() : Ropa(){}; //Constructor por default 
    Pantalon(string ta, string ti, string sec, string est, int tot)
        : Ropa(ta, ti, sec, tot)
    {
        estilo = est;
    }

    // Metodos de Acceso
    string getEstilo()
    {
        return estilo;
    }

    void setEstilo(string est)
    {
        estilo = est;
    }

    /* Funciones de la clase
     * muestraDatos()
     * Recibe los detalles que el cliente escogio para el objeto pantalon
     * @param string talla, string tipo, string seccion, string estilo
     * @return
    */
};
void Pantalon::muestraDatos(){
        cout << "\nDetalles del pantalon" << endl
             << "Talla: " << talla
             << "\nTipo: " << tipo
             << "\nSeccion: " << seccion
             << "\nEstilo: " << estilo
             << endl;
    }


#endif
