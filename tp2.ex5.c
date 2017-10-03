/*
 ============================================================================
 Name        : ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,c,d,u;
	printf("donner l'entier a tester : ");
	scanf("%d",&x);
	c=x/100;
	d=(x%100)/10;
	u=x%10;
printf("centaine %d,dizaine %d,unités %d",c,d,u);
	return 0;
}
