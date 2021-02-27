#include<stdio.h>
#include<stdlib.h>

 void meth(int choixm, int N, double alpha, double *X, double *Y)
{
  double Lagrange(double *X, double *Y, int N, double alpha);
  double Newton(double *X,double *Y,int N,double alpha);
  double Aitken(double *X,double *Y,int N,double alpha);
   double res;

	switch(choixm)
 {
	case 1:
		res=Lagrange(X,Y,N-1,alpha);
		printf("Lagrange donne en %f: %14.12f\n", alpha, res);
	 break;	
	case 2:
		res=Newton(X, Y, N-1, alpha);
		printf("Newton donne en %f: %14.12f\n", alpha, res); 
	 break;
	case 3:
		res=Aitken(X, Y, N-1, alpha);
		printf("Aitken donne en %f: %14.12f\n", alpha, res);
	 break;
	default: printf("Choix erronne!!!\n");
  }
	
}
