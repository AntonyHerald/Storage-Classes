#include <stdio.h>

int x;

void showGlobalvalue(void);

void main(){

	int data = 10;
	int value;

	value = data + data;
	printf("The sum of data %d\n", value);

	x = value + value;

	showGlobalvalue();
}	

void showGlobalvalue(){

	printf("Inside Global Show function = %d \n",x);
}

