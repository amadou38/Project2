#include<stdio.h>
#include<stdlib.h>
 
 void RemplirMatriceReelle(double **A, int lg, int ld, int cg, int cd)
{
 int i, j;
 for(i=lg; i<=ld; i++)
   for(j=cg; j<=cd; j++)
 scanf("%lf", A[i]+j);
  }
