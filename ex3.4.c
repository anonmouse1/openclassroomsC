#include <stdio.h>

int sommeTableau( int tableau[], int tailleTableau);

double moyenneTableau(int tableau[], int tailleTableau);

int main ( int argc, char *argv[]) 
{
	int tableau[4] = {10, 15,3};

	sommeTableau(tableau, 4);
	moyenneTableau(tableau,4);
	
	return 0;
}

int sommeTableau(int tableau[], int tailleTableau) 
{
	int somme = 0;
	int i = 0;
	for(int i =0; i < tailleTableau; i++) 
	{
		somme += tableau[i];
	}
	return somme;
}


double moyenneTableau(int tableau[], int tailleTableau)
{

	double moyenne = 0;
	int i = 0;
	
	moyenne = (double)sommeTableau(tableau,tailleTableau) / (double)tailleTableau;
	printf("%f \n",moyenne);
	return moyenne;
}

 
