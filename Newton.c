#include<stdio.h>
#include<stdlib.h>

double Newton(double *X,double *Y,int N,double alpha)
  {
  	double **MatriceReelle(int lg,int ld,int cg,int cd);
  	void AfficherMatriceReelle(double **A,int lg,int ld,int cg,int cd);
  	double **A;
  	int i,j;
  	double Som,Prod;
  	A=MatriceReelle(1,N+1,0,N);
  	for(i=1;i<=N+1;i++)
  	   A[i][0]=Y[i];
  	for(j=1;j<=N;j++)
	  for(i=j+1;i<=N+1;i++)
	    A[i][j]=(A[i][j-1]-A[i-1][j-1])/(X[i]-X[i-j]); 
	system("clear");	
	printf("Appercu du talbeau de Newton: \n");
	AfficherMatriceReelle(A,1,N+1,0,N);//Affichage de la matrice	  
	 Som=A[1][0];   
	 Prod=1;
	 for(i=1;i<=N;i++)
	   {
	   	Prod*=(alpha-X[i]);
	   	Som+=Prod*A[i+1][i];
	   }
	return Som;   
  }
