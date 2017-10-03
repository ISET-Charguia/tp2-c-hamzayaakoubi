/*
 ============================================================================
 Name        : ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b;
	printf("donner les valeurs a tester : ");
	scanf("%d,%d",&a,&b);
	if(a<b)
	{
		printf("%d est le maximaum",b);
		printf("%d est le minimaum",a);
	}
	else
	{
		printf("%d est le maximaum",a);
				printf("%d est le minimaum",b);
	}
	return 0;

}
