#include <stdio.h>

int main()
{
	
	/* variable declarations */
	int a, c;//zur definition von variablen, datentyp zuweisen
	float b;

	/* variable assignments */
	a = 15;
	b = a/2.0;//Achtung mit 2.0 arbeiten, sonst wird nicht erkannt, dass es sich um eine float handelt
	c = b*4;
	
	/* output */
	printf("Value of variable A = %d\n",a);
	printf("Value of variable B = %f\n",b);
	printf("value of vairable C = %d\n",c);

	return(0);
}
