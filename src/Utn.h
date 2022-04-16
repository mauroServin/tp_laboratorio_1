/*
 * Utn.h
 *
 *  Created on: 15 abr. 2022
 *      Author: 54116
 */

#ifndef UTN_H_
#define UTN_H_

int UtnGetCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos);
int UtnGetNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int UtnGetNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);

#endif /* UTN_H_ */
