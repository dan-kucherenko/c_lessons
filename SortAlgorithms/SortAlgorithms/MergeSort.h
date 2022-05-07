#include <stdio.h>
void merge(int a[], int b[], int c[], int size) {
	int i = 0, j = 0, k = 0;

	while (i < size && j < size) {
		if (a[i] < b[i])
			c[k++] = a[i++];
		else
			c[k++] = b[j++];
		while (i < size)
			c[k++] = a[i++];
		while (j < size)
			c[k++] = b[j++];
	}
}
void mergeSort(int arr[], int size) {
	int w[size];
	for (int k = 1; k < size; k++){
		for (int j = 0; j < size - k; j += 2 * k)
			merge(arr + j, arr + j + k, w + j, k);
		for (int j = 0; j < size; j++)
			arr[j] = w[j];
	}
}