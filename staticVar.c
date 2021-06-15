#include <stdio.h>

/* function declaration */
void next(void);
static int counter = 1; /* static Global variable */

void main()
{
       	while(counter<10) {
      		next();
      		counter++;
     	}


}

void next( void )
{
    	/* function definition */
   	static int iteration = 9; /* local static variable */
   	printf("\t Iteration = %d <==> Counter = %d\n", iteration, counter);
   	iteration --;

}

