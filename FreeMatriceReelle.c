#include<stdio.h>
#include<stdlib.h>
 
 void FreeMatriceReelle( double **A, int lg, int ld, int cg, int cd)
{  
  
    int i;
	void FreeTableauReel( double *T, int ig, int id);
    for(i=lg; i<=ld; i++)
	FreeTableauReel(A[i],cg,cd);
    free (A+lg);
}
