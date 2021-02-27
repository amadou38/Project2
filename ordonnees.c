#include<stdio.h>
#include<stdlib.h>

double *ordonnees(double *X , int N)
{
   double *TableauReel( int ig, int id);
	double T[10000], *Y;
	int choixo, choixf;
	int F();
double f1(double x), f2(double x), f3(double x), f4(double x), f5(double x);
printf("\n\tVous pouvez choisire comment entrer les ordonnees:\n");
	printf(" <1>\t Toutes les valeurs des ordonnees seront saisi par l'utilisateur.\n");
	printf(" <2>\t Utiliser une fonction pour calculer Yi=F(Xi).\n");
	printf("Choisissez: ");
	scanf("%d",&choixo); 	
	Y=TableauReel(1,N);      system("clear");
	if(choixo==1)
	{
			printf("\nSaisir les %d ordonnées: \n", N);
			RemplirTableauReel(Y,1,N);
			}
		if(choixo==2)
	{
		choixf=F();
		switch(choixf)
	{
		case 1:
			RemplirTableauAvecFonction(X,Y,1,N,f1);

			break;
		case 2: 
			RemplirTableauAvecFonction(X,Y,1,N,f2);

			break;
		case 3:
			RemplirTableauAvecFonction(X,Y,1,N,f3);

			break;
		case 4: 
			RemplirTableauAvecFonction(X,Y,1,N,f4);

			break;
		case 5:
			RemplirTableauAvecFonction(X,Y,1,N,f5);

			break;
		default: printf("Choix erronne!!!\n");
	}
     }
		
		//AfficherTableauReel(Y,1,N);
return Y;
}
