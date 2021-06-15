#include <stdio.h>

extern data, value;

void main()
{
	auto int sum ;

	sum = data + value;

	printf("The External value sum %d \n", sum);

}	
