/*
 ============================================================================
 Name        : ejercicio5-2v2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {
	setbuf(stdout, NULL);
	int number[10];
	int i;

	printf("Enter 10 numbers between -1000 and 1000: \n");

	for (i = 0;  i< 10; i++) {
		scanf("%d", &number[i]);
	}
	for (i = 0; i < 10; i++) {
		printf("List of entered numbers %d: \n", number[i]);
	}

	counterPositivesNegatives(number, 10);
	acumulatoreven(number, 10);
	calculatorLargestOdd(number, 10);
	equalizerNumbers(number, 10);
	orderOddNumber(number, 10);
	orderPositivesNegatives(number, 10);

	return EXIT_SUCCESS;
}

/*counterPositivesNegatives(number[i]);
	acumulatoreven(number[i]);
	calculatorLargestOdd(number[i]);
	equalizerNumbers(number[i]);
	orderOddNumber(number[i]);
	orderPositivesNegatives(number[i]);*/