#include<stdio.h>
#include<stdlib.h>

double Aitken(double *X,double *Y,int N,double alpha)
 {
 	  	double **MatriceReelle(int lg,int ld,int cg,int cd);
  	void AfficherMatriceReelle(double **A,int lg,int ld,int cg,int cd);
  	double **A;
  	int i,j;
  	A=MatriceReelle(1,N+1,0,N);
  	for(i=1;i<=N+1;i++)
  	   A[i][0]=Y[i];
  	for(j=1;j<=N;j++)
	  for(i=j+1;i<=N+1;i++)
	    A[i][j]=((X[i]-alpha)*A[j][j-1]-(X[j]-alpha)*A[i][j-1])/(X[i]-X[j]);
	system("clear");
	printf("Appercu du talbeau d'Aitken: \n\n");
	    AfficherMatriceReelle(A,1,N+1,0,N);//Affichage de la matrice
		system("clear");
	    return A[N+1][N];
 }
