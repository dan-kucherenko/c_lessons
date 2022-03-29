#include <stdio.h>
#include <math.h>
int main() {
	double value;
	for (int i = 0; i <= 10; i++){
		value = i / 10.0;
		printf("sin(%.1lf) = %lf\t", value, sin(value));
		printf("cos(%.1lf) = %lf\n", value, cos(value));
	}
	printf("\nProgram is finished\n");
	return 0;
}