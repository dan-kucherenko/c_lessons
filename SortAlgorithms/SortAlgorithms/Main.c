#include <stdio.h>
#include <time.h>
#include "BubbleSort.h"
int main(void) {
	
	int grades[2000];
	int size = sizeof(grades) / sizeof(grades[0]);
	for (int i = 0; i < size; i++)
		grades[i] = rand() % 1000;
	printArr(size, grades, "My grades: \n");

	clock_t tic = clock();
	bubbleSort(size, grades);
	clock_t toc = clock();

	printf("\n\n");
	printArr(size, grades, "My grades after bubble sortion: \n");
	
	printf("\n\nTime of bubble algorithm execution: %f\n\n", (double)(toc - tic) / CLOCKS_PER_SEC);
	return 0;
}