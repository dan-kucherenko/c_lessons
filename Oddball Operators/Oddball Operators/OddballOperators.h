#include <stdio.h>
int oddballOperators() {
	int a = 3, b = 4, c;
	c = (a < b)?  a : b;
	/*
	if(a<b)
		c=a;
	else
		c=b
	*/
	printf("%d", c);
	return 0;
}