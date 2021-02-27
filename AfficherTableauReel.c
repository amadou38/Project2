#include<stdio.h>
#include<stdlib.h>
 
 void AfficherTableauReel(double *T, int ig, int id)
{
 int i;
	printf("Vous avez saisi:\n");
 for(i=ig; i<=id; i++)
 printf("%f  ", *(T+i));
printf("\n"); 
 }
