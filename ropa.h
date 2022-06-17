/*
 * Autor: Maria del Pilar Davila Verduzco
 * Matricula: A01708943
 * Fecha: Junio 2022
 *
 * Clase padre de tipo Ropa se encarga de heredar
 * talla, tipo, seccion y total a las demas clases.
 *
 */

#ifndef ROPA_H
#define ROPA_H

#include <string>
using namespace std;

//Declaracion de la clase Ropa que es abstracta
class Ropa{
//Declaro variables de instancia
protected:
    string talla;
    string tipo;
    string seccion;
    int total;
// Metodos y Constructores del objeto
public:
    // Constructores
    Ropa();//Constructor por default
    Ropa(string ta, string ti, int tot){};
    Ropa(string ta, string ti, string sec, int tot)
    {
        talla = ta;
        tipo = ti;
        seccion = sec;
        total = tot;
    };

    // Metodos de Acceso

    string getTalla()
    {
        return talla;
    }
    string getTipo()
    {
        return tipo;
    }

    string getSeccion()
    {
        return seccion;
    }

    int getTotal()
    {
        return total;
    }

    void setTalla(string ta)
    {
        talla = ta;
    }

    void setTipo(string ti)
    {
        tipo = ti;
    }

    void setSeccion(string sec)
    {
        seccion = sec;
    }


    virtual void muestraDatos() = 0;//Metodo abstracto que sera sobreescrito
};

#endif
