#include<stdio.h>
#include<stdlib.h>

	int F()
{	
	int i, choixf;
	printf("Voici les fonctions:\n");
			printf(" <1>\t f(x) = sin(x) + cos(x)\n"); 
			printf(" <2>\t f(x) = 1/(2 + cos(x))\n"); 
			printf(" <3>\t f(x) = exp(-x²)\n"); 
			printf(" <4>\t f(x) = x² + xcos(x)\n"); 
			printf(" <5>\t f(x) = 1 + ln(1 + x²)\n");
			printf("Choisissez: ");
			scanf("%d",&choixf); 
  return choixf;
} 
