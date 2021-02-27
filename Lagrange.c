#include<stdio.h>
#include<stdlib.h>
 
 double Lagrange(double *X, double *Y, int N, double alpha)
{
 int i, j; double Som, Prod;
 Som=0;
 for(i=1; i<=N+1; i++)
{ Prod=1;
 for(j=1; j<=i-1; j++)
{ Prod*=(alpha-X[j])/(X[i]-X[j]); }
 for(j=i+1; j<=N+1; j++)
{ Prod*=(alpha-X[j])/(X[i]-X[j]); }
  Som+=Prod*Y[i];}
 return Som;}
