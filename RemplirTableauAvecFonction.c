#include<stdio.h>

void RemplirTableauAvecFonction(double *T1,double *T2,int ig,int id,double (*pf)(double x))
  {int choixf,i;
     for(i=ig;i<=id;i++)
  	T2[i]=(*pf)(T1[i]);
  }
