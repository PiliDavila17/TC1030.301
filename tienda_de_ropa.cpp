/*
 * Autor: Maria del Pilar Davila Verduzco
 * Matricula: A01708943
 * Fecha: Junio 2022
 *
 * Tecnologico de Monterrey
 * Campus Queretaro
 *
 * MATERIA: TC1030
 * AVENIDA: ICT
 * CARRERA: IRS
 * PROYECTO "Tienda de Ropa"
 * 
 * Este programa es parte del proyecto final de la Materia Pensamiento Computacional Orientado a Objetos.
 * Su funcionalidad está enfocada a darle al usuario un filtro de las prendas que quiere comprar en una tienda de ropa,
 * con el objetivo de agilizar su atención, para que posterior a realizar el filtro, pueda acceder a la zona de 
 * cobro solo a pagar y obtener su mercancia.
 */

//Biblioteccas utilizadas
#include <iostream>
#include "limits"

#include "carrito.h" //Mis metodos Carrito

using namespace std;

void menu();

int main()
{
    Carrito carrito;
    string talla, tipo, seccion, estilo, material;
    int menu_opt, chamarra_opt;

    // valores de los totales
    int pantalon = 400, falda = 350, blusa = 250, chamarra = 750;
    bool running = true;
    char pago_opt;

    while (running)
    {
        menu();
        /* Funcion Menu()
         * Desoliega un menu de las prendas en la tienda para seleccionar
         * Recibe los detalles que seran utilizados en cada objeto
         * Devuelve lo que el usuario solicito
        */
        while (!(cin >> menu_opt))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Entrada invalida, ingrese una entrada valida: ";
        }

        switch (menu_opt){

        case 1: //Agrega Pantalones
            cout << "\nDescriba su pantalon ideal "
                 << "\n(Escriba su opcion con la palabra exacta)" << endl;

            cout << "\nTalla: \tCH \tM \tG \tXL" << endl;
            cin.ignore();
            getline(cin, talla);

            cout << "\nTipo: \tVaronil \tFemenil \tUnisex \tOtro" << endl;
            cin.ignore(-1);
            getline(cin, tipo);

            cout << "\nEstilo: \tMezclilla \tCuero \tManta" << endl;
            cin.ignore(-1);
            getline(cin, estilo);

            cout << "\nSeccion: \tAdulto \tNino \tUnisex \tOtro" << endl;
            cin.ignore(-1);
            getline(cin, seccion);

            carrito.agregaPantalon(talla, tipo, seccion, estilo, pantalon);
            cout << "\nSe ha guardado su eleccion" << endl
                 << endl;

            break;

        case 2: // Agrega Faldas
            cout << "\nDescriba su falda inicial"
                 << "\n(Escriba su opcion con la palabra exacta)" << endl;

            cout << "\nTalla: \tCH \tM \tG \tXL" << endl;
            cin.ignore();
            getline(cin, talla);

            cout << "\nTipo: \tCorta \tLarga \tMidi" << endl;
            cin.ignore(-1);
            getline(cin, tipo);

            cout << "\nSeccion: \tNino \tAdulto \tUnisex \tOtro" << endl;
            cin.ignore(-1);
            getline(cin, seccion);

            carrito.agregaFalda(talla, tipo, seccion, falda);
            cout << "\nSe ha guardado su eleccion" << endl
                 << endl;

            break;

        case 3: // Agrega blusas
            cout << "\nDescribe tu blusa ideal"
                 << "\n(Escriba su opcion con la palabra exacta)" << endl;

            cout << "\nTalla: \tCH \tM \tG \tXL" << endl;
            cin.ignore();
            getline(cin, talla);

            cout << "\nTipo: \nSe divide por corte de manga: "
                 << "\tCorta \tLarga \t3/4" << endl;
            cin.ignore(-1);
            getline(cin, tipo);

            cout << "\nSeccion: \tNino \tAdulto \tUnisex \tOtro" << endl;
            cin.ignore(-1);
            getline(cin, seccion);

            carrito.agregaBlusas(talla, tipo, seccion, blusa);
            cout << "\nSe ha guardado su eleccion" << endl
                 << endl;

            break;

        case 4: // Agrega Chamarra
            cout << "\nDescribe tu chamarra ideal"
                 << "\n(Escriba su opcion con la palabra exacta)" << endl;

            cout << "\nBLOQUE 1: Donde selecciones talla y tipo"
                 << "\nBLOQUE 2: Donde seleccionas talla, tipo, material y seleccion"
                 << "\nSeleccione 1 o 2: " << endl;
            cin >> chamarra_opt;

            if (chamarra_opt == 1)
            {
                cout << "\nTalla: \tCH \tM \tG \tXL" << endl;
                cin.ignore();
                getline(cin, talla);

                cout << "\nTipo: \tInvierno \tVerano" << endl;
                cin.ignore(-1);
                getline(cin, tipo);

                carrito.agregaChamarra(talla, tipo, chamarra);
            }
            else
            {
                cout << "\nTalla: \tCH \tM \tG \tXL" << endl;
                cin.ignore();
                getline(cin, talla);

                cout << "\nTipo: \tInvierno \tVerano" << endl;
                cin.ignore(-1);
                getline(cin, tipo);

                cout << "\nMaterial: \tCuero \tMezclilla" << endl;
                cin.ignore(-1);
                getline(cin, material);

                cout << "\nSeccion: \tNino \tAdulto \tUnisex \tOtro" << endl;
                cin.ignore(-1);
                getline(cin, seccion);

                carrito.agregaChamarra(talla, tipo, material, seccion, chamarra);
            }

            break;

        case 5: // muestra el total de la compra
            cout << "Ha finalizado su compra! "
                 << "\n\n GRACIAS POR SU PREFERENCIA \n\n"
                 << "Quiere proceder al pago? (S / N)" << endl;

            cin >> pago_opt;

            if (pago_opt == 'S' || pago_opt == 's')
            {
                cout << "\nGracias por su compra" << endl;
                cout << "El total es: " << carrito.calculaTotal() << endl;

                cout << "Imprima su carrito para proseguir con la compra"
                     << endl
                     << endl;
            }
            else if (pago_opt == 'N' || pago_opt == 'n')
                cout << "Continuemos" << endl;
            else
                cout << "Opcion invalida, intenta de nuevo" << endl
                     << endl;

            break;

        case 6: //Muestra las prendas compradas
            cout<<"Pase a la caja a pagar"<<endl;
            carrito.muestraPrendas();
            break;

        case 7:
            cout<<"PRECIO DE LAS PRENDAS: "<<endl;
            cout << "Pantalon: " << pantalon << endl;
            cout << "Falda: " << falda << endl;
            cout << "Blusa: " << blusa << endl;
            cout << "Chamarra: " << chamarra << endl;
            break;

        case 8: // cierra el programa
            cout << "Se ha salido con exito" << endl;
            carrito.eliminaPrendas(); // limpiando la memoria
            running = false;
            break;

        default:
            break;
        }
    }

    return 0;
}

// Funcion que muestra el menu
void menu()
{
    cout << "\nMENU \n\nQue prenda quieres?";
    cout << "\n1. Pantalon \n2. Falda \n3. Blusa \n4. Chamarra";
    cout << "\n5. Finalizar compra \n6. Imprimir carrito";
    cout << "\n7. Mostrar precios de Tienda ";
    cout << "\n8. Salir --> ";
} 
