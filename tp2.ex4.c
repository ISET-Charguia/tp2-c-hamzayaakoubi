/*
 ============================================================================
 Name        : ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	printf("donner l'année : ");
	scanf("%d",&a);
	if(a%400==0)
	{
	printf("cette année est bissextile");
	}
	else
	{
		printf("cette année est n'est pas bissextile");
	}
	return 0;

}

