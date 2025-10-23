#include <stdio.h>
#include <stdlib.h>

int main()
{
	const float constant_ratio = 3.0/4.0;//entweder beide als float über und unter dem Bruch oder definieren als float nochmal mit (float)
	char a;
	int b;
	float c;

	a = 'F';		
	b = 3;
	c = 3.141592;
	
	printf("The value of variable a is '%c' \n", a);
	printf("The value of variable b is '%d' \n", b);//für int nimm d
	printf("The value of variable c is '%.2f' \n", c);//.2f gibt an nur zwei Nachkommastellen
	printf("The value of the constant ratio is '%.2f' \n", constant_ratio);

	return 0;
}
