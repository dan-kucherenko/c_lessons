#include <stdio.h>
#define SIZE  5
int main(void) {
	int grades[SIZE] = { 75,12,94,29,42 };
	double sum = 0.0;
	double* ptrToSum = &sum;

	printf("My grades are: \n");
	for (int i = 0; i < SIZE; i++)
		printf("%d\t", grades[i]);
	printf("\n\n");

	for (int i = 0; i < SIZE; i++)
		sum += grades[i];
	printf("My average mark is: %.2f\t", sum / SIZE);
	printf("\n\n");

	printf("Sum is at: %p or  %lu and is %lf\n", ptrToSum, ptrToSum, *ptrToSum); //points to a decimal it the var contains
	printf("Grades are at %lu to %lu\n", grades, grades + 5);
}