#include <stdio.h>
void swap(int* i, int* j) {
	int temp = *i;
	*i = *j;
	*j = temp;
}

void bubbleSort(int size, int grades[]) {
	for (int i = 0; i < size; i++) {
		for (int j = size - 1; j > i; j--)
			if (grades[j - 1] > grades[j])
				swap(&grades[j - 1], &grades[j]);
	}
}
void printArr(int size, int grades[], char* str) {
	printf("%s", str);
	for (int i = 0; i < size; i++)
		printf("%d\t", grades[i]);
}
