#include<stdio.h>
#include<stdlib.h>
 
 int main()
{ 
 double *TableauReel( int ig, int id);
 void AfficherTableauReel(double *T, int ig, int id);
 void RemplirTableauReel(double *T, int ig, int id);
void meth(int choixm, int N, double alpha, double *X, double *Y);
void RemplirTableauAvecFonction(double *T1,double *T2,int ig,int id,double (*pf)(double x));
double *X, *Y;
 int N, choixa, choixo, i, j, choixf, choixm; 
 double alpha;
 double *abscisses(int N); 
 double *ordonnees(double *X , int N);
 void Affichageglob(double *T1, double *T2, int ig, int id);
 int chmeth();
	system("clear");
	printf("\t **** Interpolation Polynomiale ****\n\n");
	printf(" Ce programme calcule du polynôme d'interpolation (relativement à N+1 points) de degré N en un point x donné,\n en utilisant l'un des trois algorithmes suivants: polynôme d'interpolation de Lagrange, polynôme d'interpolation de Newton et l'algorithme d'Aitken.\n\n");

 printf("Appuyer sur <ENTREE> pour continuer!!!\n");
    getchar();	system("clear");
	printf("Donnez le nombre de points: ");
	scanf("%d",&N); system("clear");
	printf("Le nombre de points est: %d\n", N);
	printf("\n");
	X=abscisses(N);	
	Y=ordonnees(X,N); system("clear");
	Affichageglob(X, Y, 1, N);
	printf("\nDonnez un réel: ");
	scanf("%lf",&alpha);
	choixm=chmeth();	
	meth(choixm, N, alpha, X, Y);


    int rep, rep1, rep2, rep3;
	do {
		printf("Voulez vous continuer (1: Oui, 2: Non)? ");
		scanf("%d",&rep);
  switch(rep)
  {
	case 2:
     exit(-1);
	break;
  case 1:  
	   printf("Voulez vous changer la valeur du reel (1: Oui, 2: Non)? ");
	     scanf("%d", &rep1);
          if(rep1==1)
		{
		     printf("\nDonnez un réel: ");
	             scanf("%lf",&alpha);
		}
	  printf("Voulez vous changer les points d'interpolations (1: Oui, 2: Non)? ");
	           scanf("%d", &rep2);
          if(rep2==1)
		{
			X=abscisses(N);	
			Y=ordonnees(X,N);
		system("cls");
			Affichageglob(X, Y, 1, N);
		}
	 printf("Voulez vous changer l'algorithme (1: Oui, 2: Non)? ");
	           scanf("%d", &rep3);
         if(rep3==1)
		{
		    	choixm=chmeth();
		}
			meth(choixm, N, alpha, X, Y);
		break;
	}
}
	while(rep==1);
 return 0;
}


