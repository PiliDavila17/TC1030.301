/*
 * Autor: Maria del Pilar Davila Verduzco
 * Matricula: A01708943
 * Fecha: Junio 2022
 *
 * Objeto Chamarra de tipo ropa con una variable adicional de tipo Material.
 */

#ifndef CHAMARRA_H
#define CHAMARRA_H

#include "ropa.h" //Biblioteca de metodos Ropa

//Declaro la clase Chamarra que hereda de Ropa
class Chamarra : public Ropa{
//Declaro variables
private:
    string material;

//Constructores y Metodos del objeto 
public:
    Chamarra() : Ropa(){};//Constructor por default 
    //Sobrecarga
    Chamarra(string ta, string ti, int tot) : Ropa(ta, ti, tot){};
    Chamarra(string ta, string ti, string ma, int tot) : Ropa(ta, ti, tot)
    {
        material = ma;
    }
    Chamarra(string ta, string ti, string sec, string ma, int tot) : Ropa(ta, ti, sec, tot)
    {
        material = ma;
    }

    // Metodos de acceso
    string getMaterial()
    {
        return material;
    }

    void setMaterial(string ma)
    {
        material = ma;
    }

    // Funciones

    void muestraDatos()
    {
        cout << "\nDetalles de chamarra" << endl
             << "Talla: " << talla
             << "\nTipo: " << tipo
             << "\nSeccion: " << seccion
             << "\nMaterial: " << material
             << endl;
    }
};

#endif