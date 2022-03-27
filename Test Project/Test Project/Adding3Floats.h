//Adding 3 floats
#include <stdio.h>

int adding3Floats(void) {
	float a, b, c, sum;
	printf("Insert 3 floats: ");
	scanf_s("%f%f%f", &a, &b, &c);
	sum = a + b + c;
	printf("sum = %f", sum);
	return 0;
}