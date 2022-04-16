/*
 ============================================================================
 Name        : Trabajo.c
 Author      : Mauro Servin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Utn.h"
#include "OperacionesMatematicas.h"
#include "FuncionesPrint.h"

int main(void) {
	setbuf(stdout, NULL);

	int opcion;
	int respuesta;
	float kilometros;
	float precioVueloAerolineas;
	float debitoAerolineas;
	float creditoAerolineas;
	float btcAerolineas;
	float precioKmAerolineas;
	float precioVueloLatam;
	float debitoLatam;
	float creditoLatam;
	float btcLatam;
	float precioKmLatam;
	float diferenciaPrecio;

	int kilometrosForzados;
	int precioAerolineasForzado;
	float debitoAerolineasForzado;
	float creditoAerolineasForzado;
	float btcAerolineasForzado;
	float precioKmAerolineasForzado;
	int precioLatamForzado;
	float debitoLatamForzado;
	float creditoLatamForzado;
	float btcLatamForzado;
	float precioKmLatamForzado;
	float diferenciaPrecioForzado;

	kilometrosForzados = 7090;
	precioAerolineasForzado = 162965;
	precioLatamForzado = 159339;

	do{
		respuesta = UtnGetNumero(&opcion, "\nSeleccione una opcion:\n\n1)Ingresar kilómetros:\n2)Ingresar precio:\n3)Calcular costos:\n4)Informar resultados:\n5)Carga forzada de datos.\n6)Salir.", "No es una opción válida\n", 1, 6, 2);

		if(respuesta == 0)
		{
			switch(opcion)
			{
				case 1:
					UtnGetNumeroFlotante(&kilometros, "Ingrese los kilómetros:\n", "No es una opción válida\n", 1, 9999.99, 2);
					Imprimir("KMs ingresados:", kilometros);

					do{
						UtnGetNumero(&opcion, "\nSeleccione una opcion:\n\n1)Ingresar kilómetros:\n2)Ingresar precio:\n3)Calcular costos:\n4)Informar resultados:\n5)Carga forzada de datos.\n6)Salir.", "No es una opción válida\n", 1, 6, 2);
						if(opcion != 2)
						{
							ImprimirError("\nSeleccione la opción 2 para continuar con el programa");
						}

					}while(opcion != 2);
						UtnGetNumeroFlotante(&precioVueloAerolineas, "Ingrese el precio del vuelo Aerolíneas:\n", "El precio ingresado no es válido.\n",1, 200000.00, 2);
						UtnGetNumeroFlotante(&precioVueloLatam, "Ingrese el precio del vuelo Latam:\n", "El precio ingresado no es válido.\n", 1, 200000.00, 2);
						Imprimir("KMs ingresados:\t", kilometros);
						Imprimir("\nPrecio vuelo Aerolíneas:\t$", precioVueloAerolineas);
						Imprimir("\nPrecio vuelo Latam:\t$", precioVueloLatam);

						do{
							UtnGetNumero(&opcion, "\nSeleccione una opcion:\n\n1)Ingresar kilómetros:\n2)Ingresar precio:\n3)Calcular costos:\n4)Informar resultados:\n5)Carga forzada de datos.\n6)Salir.", "No es una opción válida\n", 1, 6, 2);
							if(opcion != 3)
							{
								ImprimirError("\nSeleccione la opción 3 para continuar con el programa");
							}

						}while(opcion != 3);
							debitoAerolineas = Descuento(precioVueloAerolineas, precioVueloAerolineas, 0.1);
							creditoAerolineas = Interes(precioVueloAerolineas, 0.25, precioVueloAerolineas);
							btcAerolineas = Multiplicar(203, precioVueloAerolineas);
							precioKmAerolineas = Dividir(precioVueloAerolineas, kilometros);

							debitoLatam = Descuento(precioVueloLatam, precioVueloLatam, 0.1);
							creditoLatam = Interes(precioVueloLatam, 0.25, precioVueloLatam);
							btcLatam = Multiplicar(203, precioVueloLatam);
							precioKmLatam = Dividir(precioVueloLatam, kilometros);

							diferenciaPrecio = Restar(precioVueloAerolineas, precioVueloLatam);

							do{
								UtnGetNumero(&opcion, "\nSeleccione una opcion:\n\n1)Ingresar kilómetros:\n2)Ingresar precio:\n3)Calcular costos:\n4)Informar resultados:\n5)Carga forzada de datos.\n6)Salir.", "No es una opción válida\n", 1, 6, 2);
								if(opcion != 4)
								{
									ImprimirError("\nSeleccione la opción 4 para continuar con el programa");
								}

							}while(opcion != 4);
								Imprimir("KMs ingresados:\t", kilometros);
								Imprimir("\n\nPrecio Aerolíneas:\t$", precioVueloAerolineas);
								Imprimir("\na)Precio con tarjeta de débito:\t$", debitoAerolineas);
								Imprimir("\nb)Precio con tarjeta de crédito:\t$", creditoAerolineas);
								Imprimir("\nc)Precio pagando con Bitcoin:\t$", btcAerolineas);
								Imprimir("\nd)Mostrar precio unitario:\t$", precioKmAerolineas);

								Imprimir("\n\nPrecio Latam:\t$", precioVueloLatam);
								Imprimir("\na)Precio con tarjeta de débito:\t$", debitoLatam);
								Imprimir("\nb)Precio con tarjeta de crédito:\t$", creditoLatam);
								Imprimir("\nc)Precio pagando con Bitcoin:\t$", btcLatam);
								Imprimir("\nd)Mostrar precio unitario:\t$", precioKmLatam);

								Imprimir("\n\nLa diferencia de precio es:\t$", diferenciaPrecio);

				break;

				case 2:
					do{
					ImprimirError("\nPor favor realice el paso 1.\n");
					respuesta = UtnGetNumero(&opcion, "\nSeleccione una opcion:\n\n1)Ingresar kilómetros:\n2)Ingresar precio:\n3)Calcular costos:\n4)Informar resultados:\n5)Carga forzada de datos.\n6)Salir.", "No es una opción válida\n", 1, 6, 2);
					}while(opcion != 1);
				break;

				case 3:
					do{
					ImprimirError("\nPor favor realice los pasos 1 y 2.\n");
					respuesta = UtnGetNumero(&opcion, "\nSeleccione una opcion:\n\n1)Ingresar kilómetros:\n2)Ingresar precio:\n3)Calcular costos:\n4)Informar resultados:\n5)Carga forzada de datos.\n6)Salir.", "No es una opción válida\n", 1, 6, 2);
					}while(opcion != 1);
				break;

				case 4:
					do{
					printf("\nPor favor realice los pasos 1, 2 y 3.\n");
					respuesta = UtnGetNumero(&opcion, "\nSeleccione una opcion:\n\n1)Ingresar kilómetros:\n2)Ingresar precio:\n3)Calcular costos:\n4)Informar resultados:\n5)Carga forzada de datos.\n6)Salir.", "No es una opción válida\n", 1, 6, 2);
					}while(opcion != 1);
				break;

				case 5:
					debitoAerolineasForzado = Descuento(precioAerolineasForzado, precioAerolineasForzado, 0.1);
					creditoAerolineasForzado = Interes(precioAerolineasForzado, 0.25, precioAerolineasForzado);
					btcAerolineasForzado = Multiplicar(203, precioAerolineasForzado);
					precioKmAerolineasForzado = Dividir(precioAerolineasForzado, kilometrosForzados);

					debitoLatamForzado = Descuento(precioLatamForzado, precioLatamForzado, 0.1);
					creditoLatamForzado = Interes(precioLatamForzado, 0.25, precioLatamForzado);
					btcLatamForzado = Multiplicar(203, precioLatamForzado);
					precioKmLatamForzado = Dividir(precioLatamForzado, kilometrosForzados);

					diferenciaPrecioForzado = Restar(precioAerolineasForzado, precioLatamForzado);

					Imprimir("KMs ingresados:\t", kilometrosForzados);
					Imprimir("\n\nPrecio Aerolíneas:\t$", precioAerolineasForzado);
					Imprimir("\na)Precio con tarjeta de débito:\t$", debitoAerolineasForzado);
					Imprimir("\nb)Precio con tarjeta de crédito:\t$", creditoAerolineasForzado);
					Imprimir("\nc)Precio pagando con Bitcoin:\t$", btcAerolineasForzado);
					Imprimir("\nd)Mostrar precio unitario:\t$", precioKmAerolineasForzado);

					Imprimir("\n\nPrecio Latam:\t$", precioLatamForzado);
					Imprimir("\na)Precio con tarjeta de débito:\t$", debitoLatamForzado);
					Imprimir("\nb)Precio con tarjeta de crédito:\t$", creditoLatamForzado);
					Imprimir("\nc)Precio pagando con Bitcoin:\t$", btcLatamForzado);
					Imprimir("\nd)Mostrar precio unitario:\t$", precioKmLatamForzado);

					Imprimir("\n\nLa diferencia de precio es:\t$", diferenciaPrecioForzado);
				break;

				case 6:
				break;
			}
		}
	}while(opcion != 6);

	return EXIT_SUCCESS;
}
