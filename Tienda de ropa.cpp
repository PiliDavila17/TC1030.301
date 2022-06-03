/*
Autor: Maria del Pilar Davila Verduzco
Matrícula: A01708943
Fecha: Mayo 2022

Tecnologico de Monterrey
Campus Queretaro
MATERIA: TC1030

PROYECTO "Tienda de Ropa"
Este programa es parte del proyecto final de la Materia Pensamiento Computacional Orientado a Objetos.
Su funcionalidad está enfocada a darle al usuario un filtro de las prendas que quiere comprar en una tienda de ropa,
con el objetivo de agilizar su atención, para que posterior a realizar el filtro, pueda acceder a la zona de cobro solo a pagar y obtener su mercancia.
*/

//Bibliotecas y archivos .h que contienen la mercancia
#include<iostream>
#include "pantalon.h"
#include "falda.h"
#include "blusa.h"
#include "carrito.h"
#include "chamarra.h"

using namespace std;

int main() {
	//Variables utilizadas
	string ti, ta, fin, es, ma, sec;
	int o, op, total = 0, pant = 400, blu = 250;
	int fal = 350, cham = 750;
	int contPant = 0, contFal = 0, contBlus = 0, contCham = 0;
	Carrito usuario;
	bool running = true;

	//Comienza el menu de opciones donde el usuario escogerá las prendas que desea comprar, para posteriormente conocer el cobro total de su compra
	while (running) {
		//Impresion del menu
		cout << "MENU \n\nQue prenda quieres? \n1. Pantalon \n2. Falda \n3. Blusa \n4. Chamarra \n5. Finalizar compra \n6. Imprimir Carrito \n7. Salir \n--> ";
		cin >> o;

		//Funcion 1: Accede a la clase Pantalones, en la cual el usuario decidirá qué atributos tendrá su pantalon como talla, tipo, epoca y seccion
		//Se utilizaron getters y setter para poder acceder a los atributos y tener la oportunidad de modificarlos.
		if (o == 1)
		{
			total = total + pant;//Agrega un pantalon a la lista y va calculando el costo acumulado.
			contPant++;

			//Apuntador a ropa de tipo precio en Pantalon
			Ropa* ropa = new Pantalon();
			ropa->precio();

			cout << "\nDescriba su pantalon ideal \n(Escriba su opcion con la palabra exacta)" << endl;

			Pantalon pantalon_1("\nTalla: \nCH \nM \nG \nXL", "\nTipo: \nVaronil \nFemenil", "\nEstilo: \nMezclilla \nCuero \nManta ","\nSeccion: ");

			//Modifica el atributo talla	
			cout << pantalon_1.getTalla() << " " << endl;
			cout << "Introduzca la talla: ";
			cin >> ta;
			pantalon_1.setTalla(ta);

			//Modifica el atributo tipo
			cout << pantalon_1.getTipo() << endl;
			cout << "Introduzca el tipo: ";
			cin >> ti;
			pantalon_1.setTipo(ti);

			//Modifica el atributo epoca
			cout << pantalon_1.getEstilo() << endl;
			cout << "Introduzca el Estilo: ";
			cin >> es;
			pantalon_1.setEstilo(es);

			//Modifica el atributo Seccion
			cout << "Introduzca la seccion (Adulto, Niño): ";
			cin >> sec;
			pantalon_1.setSeccion(sec);

			cout << "\nSe ha guardado su eleccion" << endl << endl;
			usuario.agregaPantalon(pantalon_1);
		}
		//Funcion 2: Accede a la clase Falda en donde el usuario podra escoger el tipo de falda que desea comprar, añadiendo las caracteristicas de
		//talla, tipo y seccion. Se utilizaron getters y setters como metodos de acceso
		else
			if (o == 2)
			{
				total = total + fal; //Agrega una falda a la lista y va calculando el costo acumulado
				contFal++;
				//Apuntador a ropa de tipo precio en Falda
				Ropa* ropa = new Falda();
				ropa->precio();

				cout << "\nDescribe tu falda ideal \n(Escriba su opcion con la palabra exacta)" << endl;
				Falda falda_1("\nTalla: \nCH \nM \nG \nXL", "\nTipo:\nCorta \nLarga \nMidi ", "\nSeccion: \nNino \nAdulto");

				//Modifica el atributo talla
				cout << falda_1.getTalla() << " " << endl;
				cout << "Introduzca la talla: ";
				cin >> ta;
				falda_1.setTalla(ta);

				//Modifica el atributo Tipo
				cout << falda_1.getTipo() << endl;
				cout << "Introduzca el tipo: ";
				cin >> ti;
				falda_1.setTipo(ti);

				//Modifica el atributo Seccion
				cout << falda_1.getSeccion() << endl;
				cout << "Introduzca la seccion: " << endl;
				cin >> sec;

				cout << "\nSe ha guardado su eleccion" << endl << endl;
				usuario.agregaFalda(falda_1);

			}
		//Funcion 3: Accede a la clase Blusa en donde el usuario podra escoger el tipo de blusa que desea comprar, 
		// añadiendo las caracteristicas de talla, tipo y seccion. Se utilizaron getters y setters como metodos de acceso
		else
			if (o == 3)
			{
				total = total + blu; //Añade una blusa a la lista y va calculando el costo acumulado
				contBlus++;

				//Apuntador a ropa de tipo precio desde Blusa
				Ropa* ropa = new Blusa();
				ropa->precio();
				cout << "\nDescribe tu blusa ideal \n(Escriba su opcion con la palabra exacta)" << endl;
				Blusa blusa_1("\nTalla: \nCH \nM \nG \nXL", "\nTipo: \nSe divide por corte de manga:\nCorta \nLarga \n3/4", "\nSeccion: \nNino \nAdulto");

				//Modifica el atributo de Talla
				cout << blusa_1.getTalla() << " ";
				cout << "\nIntroduzca la talla: ";
				cin >> ta;
				blusa_1.setTalla(ta);

				//Modifica el atributo Tipo
				cout << blusa_1.getTipo() << endl;
				cout << "\nIntroduzca el tipo: ";
				cin >> ti;
				blusa_1.setTipo(ti);

				//Modifica el atributo Seccion
				cout << blusa_1.getSeccion() << endl;
				cout << "Introduzca la seccion: "<<endl;
				cin >> sec;
				blusa_1.setSeccion(sec);

				cout << "Se ha guardado su eleccion" << endl << endl;
				usuario.agregaBlusa(blusa_1);

			}
		//Funcion 4: Accede a la clase Chamarra en donde el usuario podra escoger el tipo de chamarra que desea comprar, añadiendo las caracteristicas de
		//talla, tipo, seccion y material. Se utilizaron getters y setters como metodos de acceso
		else
			if (o == 4) 
			{
				total = total + cham;//Agrega una chamarra a la lista y va calculando el costo acumulado
				contCham++;

				//Apuntador a Ropa de tipo Precio desde Chamarra
				Ropa* ropa = new Chamarra();
				ropa->precio();

				cout << "\nDescribe tu Chamarra ideal: \n(Escriba su opcion con la palabra exacta)" << endl;
				cout << "¿Que bloque de chamarras quieres?" << endl;

				//Hay sobrecarga es por eso que se divide en dos, para cada tipo de constructor
				cout << "\nBLOQUE 1: Donde selecciones Talla y Tipo \nBLOQUE 2: Donde selecciones Talla, Tipo, Material y Seccion \nSelecione 1 o 2: " << endl;
				cin >> op;
				//primer constructor
				if (op == 1) 
				{
					Chamarra chamarra_1("\nTalla: \nCH \nM \nG \nXL", "\nTipo: \nInvierno \nVerano");

					//Modifica el atributo Talla
					cout << chamarra_1.getTalla() << " ";
					cout << "\nTalla: \nCH \nM \nG \nXL" << endl;
					cout << "\nIntroduzca la talla: ";
					cin >> ta;
					chamarra_1.setTalla(ta);

					//Modifica el atributo Tipo
					cout << chamarra_1.getTipo() << endl;
					cout << "\nTipo:\nInvierno \nVerano" << endl;
					cout << "\nIntroduzca el tipo: ";
					cin >> ti;
					chamarra_1.setTipo(ti);
				}
				else if (op == 2) { //segundo constructor

						Chamarra chamarra_1("\nTalla: \nCH \nM \nG \nXL", "\nTipo: \nInvierno \nVerano", "\nMaterial: \nCuero \nMezclilla", "\nSeccion: \nNiños \nAdultos");
						
						//Modifica el atributo Talla
						cout << chamarra_1.getTalla() << " ";
						cout << "\nIntroduzca la talla: ";
						cin >> ta;
						chamarra_1.setTalla(ta);
						
						//Modifica el atributo Tipo
						cout << chamarra_1.getTipo() << endl;
						cout << "\nIntroduzca el tipo: ";
						cin >> ti;
						chamarra_1.setTipo(ti);
						
						//Modifica el atributo Material
						cout << chamarra_1.getMaterial() << endl;
						cout << "\nIntroduzca el Material: ";
						cin >> ma;
						chamarra_1.setMaterial(ma);
						
						//Modifia el atributo Seccion
						cout << chamarra_1.getSeccion() << endl;
						cout << "Introduzca la seccion Nino / Adulto: " << endl;
						cin >> sec;
						chamarra_1.setSeccion(sec);
				}
			}
		//Funcion 5: Imprime el total de prendas acumuladas seleccionadas por el usuario, así como el costo final de su compra
		else if (o == 5)
				{
					cout << "Ha finalizado su compra! \n\n GRACIAS POR SU PREFERENCIA \n\nQuiere proceder al pago? (s/n): ";
					cin >> fin;

					if (fin == "s")
					{
						cout << "\nGRACIAS POR SU COMPRA!" << endl;
						cout << "El total es: $" << total << endl;
						cout << "Imprima su carrito para proseguir con la compra" << endl << endl;
					}
					else if (fin == "n")
					{
						cout << "Continuemos" << endl;
					}
					else 
					{
						cout << "Opcion invalida, intentelo de nuevo" << endl << endl;
					}

				}

		//Funcion 6: Accede a la clase Carrito para imprimir cuales son las prendas seleccionadas por el usuario
		else if (o == 6)
			{
				cout << "\nEL CARRITO CONTIENE: " << endl;
				//Conteo de blusas
				cout << "Total de blusas: " << contBlus << endl;
				for (int i = 0; i < usuario.getpos_blus(); i++)
				{
					cout << "Blusa " << i + 1 << endl;
					cout << "\nTalla: " << usuario.getBlusa(i).getTalla();
					cout << "\nTipo de manga: " << usuario.getBlusa(i).getTipo();
					cout << "\nSeccion: " << usuario.getBlusa(i).getSeccion() << endl << endl;
				}
			
				//Conteo de faldas
				cout << "Total de faldas: " << contFal << endl;
				for (int i = 0; i < usuario.getpos_fal(); i++) {
					cout << "Falda " << i + 1 << endl;
					cout << "Talla: " << usuario.getFalda(i).getTalla() << endl;
					cout << "Tipo: " << usuario.getFalda(i).getTipo() << endl;
					cout << "Seccion: " << usuario.getFalda(i).getSeccion() << endl << endl;
				}
				//Conteo de pantalones
				cout << "Total de pantalones: " << contPant << endl;
				for (int i = 0; i < usuario.getpos_pant(); i++) {
					cout << "Pantalon " << i + 1 << endl;
					cout << "Talla: " << usuario.getPantalon(i).getTalla() << endl;
					cout << "Tipo: " << usuario.getPantalon(i).getTipo() << endl;
					cout << "Epoca: " << usuario.getPantalon(i).getEstilo() << endl;
					cout << "Seccion: " << usuario.getPantalon(i).getSeccion() << endl << endl;
				}
				//Conteo de Chamarras
				cout << "Total de Chamarras: " << contCham << endl;
				for (int i = 0; i < usuario.getpos_cham(); i++) {
					cout << "Chamarra " << i + 1 << endl;
					cout << "Material: " << usuario.getChamarra(i).getMaterial() << endl;
					cout << "Seccion: " << usuario.getChamarra(i).getSeccion() << endl;
				}
			}

			//Funcion 7: Salida
		else
			if (o==7)
			{
					cout << "\nPase a la caja a pagar y recoger sus prendas. \nGracias por venir \nVUELVA PRONTO" << endl << endl;
					running = false;
			}
	
	}
	
}


