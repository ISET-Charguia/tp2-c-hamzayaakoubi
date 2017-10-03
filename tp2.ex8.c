/*
 ============================================================================
 Name        : ex8.c
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
printf("donner le durée :");
scanf("%d",&a);
if(a<=1)
{
	printf("0.058");
}
else if(a>5)
{
	printf("0.095");
}
else if(a==3||a==5)
{
	printf("0.085");
}
else if(a==3||a==1)
{
	printf("0.065");
}
}
