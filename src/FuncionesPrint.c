/*
 * FuncionesPrint.c
 *
 *  Created on: 16 abr. 2022
 *      Author: 54116
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * @fn void Imprimir(char*, float)
 * @brief
 *
 * @pre
 * @post
 * @param mensaje
 * @param pResultado
 */
void Imprimir(char* mensaje, float pResultado) {

		if(mensaje != NULL)
		{
			printf("%s", mensaje);
			printf("%.2f", pResultado);
		}
	return;
}
/**
 * @fn void ImprimirError(char*)
 * @brief
 *
 * @pre
 * @post
 * @param mensajeError
 */
void ImprimirError(char* mensajeError){
	if(mensajeError != NULL)
	{
			printf("%s", mensajeError);
	}
	return;
}
