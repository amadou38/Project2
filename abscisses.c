#include<stdio.h>
#include<stdlib.h>

double *abscisses( int N)
{
   double *TableauReel( int ig, int id);
	double T[10000], *X;
	double h, a, b;
	void AfficherTableauReel(double *T, int ig, int id);
	int i, j, choixa;
	printf("\n\tVous pouvez choisir comment entrer les abscisses:\n");
	printf(" <1>\t Saisie aléatoire des abscisses par l'utilisateurs.\n");
	printf(" <2>\t Saisie des abscisses à partir d'un premier point et un pas h (Xi=X1+(i-1)h pour i= 1, 2, ..., N+1\n");
	printf(" <3>\t Les points sont equidistants dans un intervalle [a,b] (Xi= A+(i-1)h pour i= 1, 2, ..., N+1 avec h= (b-a)/N\n");
	printf(" Choisissez: ");
	scanf("%d",&choixa);
	system("clear");
	printf("Vous avez choisi le choix %d\n", choixa);
	printf("Saisir les %d abscisses: \n", N);
	X=TableauReel(1,N);
	switch(choixa)
	{	  
		case 1: 
		  for(i=1; i<=N; i++)
             {
	  		printf("X%d= ", i);
	  		scanf("%lf", T+i);
			for(j=1; j<i; j++)
	  		if(T[i]==T[j])
	         {        printf("Abscisse existente!\n"); 
			j=i;
			i--;
			}
		}
			X=T;
			break;
		case 2: 
			printf("Enter X%d: ", 1);
			scanf("%lf", &T[1]);
			printf("Entrer le pas h: ");
			scanf("%lf", &h);
			for(i=2; i<=N; i++)
			T[i]=T[1]+(i-1)*h;
			X=T;
		break;
		case 3: 
			printf("Entrez la borne gauche de l'intervalle a= ");
			scanf("%lf",&a);
			printf("La borne gauche de l'intervalle a= %f\n", a);
			printf("Entrez la borne droite de l'intervalle b= ");
			scanf("%lf",&b);
			printf("La borne droite de l'intervalle b= %f\n", b);
			h=(b-a)/(N-1);
			T[1]=a;
			for(i=2; i<=N; i++)
			T[i]=T[1]+(i-1)*h;
			X=T; 
		break;
		default: printf("Choix erronne!!!\n");
	}
	system("clear");
  AfficherTableauReel(X,1,N);
return X;
}
