#include<stdio.h>
#include<stdlib.h>

int chmeth()
{
   int choixm;	
	printf("\t Choisissez un algorithme:\n");
	printf(" <1>\t Polynôme d'interpolation de Lagrange.\n");
	printf(" <2>\t Polynôme d'interpolation de Newton.\n");
	printf(" <3>\t L'algorithme d'Aitken.\n");
	  	printf("Choix: ");
		scanf("%d",&choixm);
return choixm;
  
}
