#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	printf("entrer un entier ");
	scanf("%d",&x);
	if (x%3==0)
	{
		printf("x est divisible par 3");

	}
	else
	{
		printf("x n'est pas divisible par 3");
	}
	return 0;

}

