/*
 ============================================================================
 Name        : ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a;
	printf("donner le caractére a tester :");
	scanf("%c",&a);
	if (a>='a'&&a<='z')
	{
		printf("miniscule");
	}
	else if (a>='A'&&a<='Z')
	{
		printf("miniscule");
	}
	else if (a>='0'&&a<='9')
	{
		printf("chiffre");
	}
	else
	{
		printf("autre");
	}
	return 0;
}
