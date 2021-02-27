#include<stdio.h>
#include<stdlib.h>

void Affichageglob(double *T1, double *T2, int ig, int id)
{
 int i;
	printf("Les points sont comme suit:\n");
 for(i=ig; i<=id; i++)
 printf("X%d= %f \t Y%d= %f \n", i, *(T1+i), i, *(T2+i));
printf("\n"); 
 }
