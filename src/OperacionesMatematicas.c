/*
 * OperacionesMatematicas.c
 *
 *  Created on: 16 abr. 2022
 *      Author: 54116
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @fn int Sumar(int, int)
 * @brief
 *
 * @pre
 * @post
 * @param operador1
 * @param operador2
 * @return
 */
int Sumar(int operador1, int operador2){
	int resultado;

	resultado = operador1 + operador2;

	return resultado;
}
/**
 * @fn int Restar(int, int)
 * @brief
 *
 * @pre
 * @post
 * @param operador1
 * @param operador2
 * @return
 */

int Restar(int operador1, int operador2){
	int resultado;

	resultado = operador1 - operador2;

	return resultado;
}
/**
 * @fn int Multiplicar(int, int)
 * @brief
 *
 * @pre
 * @post
 * @param operador1
 * @param operador2
 * @return
 */
int Multiplicar(int operador1, int operador2){
	int resultado;

	resultado = operador1 * operador2;

	return resultado;
}
/**
 * @fn float Dividir(float, float)
 * @brief
 *
 * @pre
 * @post
 * @param operador1
 * @param operador2
 * @return
 */
float Dividir(float operador1, float operador2){
	float resultado;

	if(operador2 == 0)
	{
		printf("No se puede dividir por 0");
	}
	else
	{
		resultado = operador1 / operador2;
	}
	return resultado;
}
/**
 * @fn float Descuento(float, float, float)
 * @brief
 *
 * @pre
 * @post
 * @param operador1
 * @param operador2
 * @param operador3
 * @return
 */
float Descuento(float operador1, float operador2, float operador3){
	float resultado;

	if(operador3 == 0.00)
	{
		printf("No puede realizarse el descuento");
	}
	else
	{
		resultado = operador1 - (operador2 * operador3);
	}
	return resultado;
}
/**
 * @fn float Interes(float, float, float)
 * @brief
 *
 * @pre
 * @post
 * @param operador1
 * @param operador2
 * @param operador3
 * @return
 */
float Interes(float operador1, float operador2, float operador3){
	float resultado;

	resultado = (operador1 * operador2) + operador3;

	return resultado;
}

