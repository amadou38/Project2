#include<stdio.h>
#include<stdlib.h>
 
 void FreeTableauReel( double *T, int ig, int id)
{ 
  free (T+ig);
}
