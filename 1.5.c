#include <stdio.h>

int main(int argc, char *argv[]) 
{
	int resultat = 0; nombre1 = 0; nombre2 = 0;
	//demande les nombres de a l'utilasateur
	printf("Entrez le nombre 1: \n");
	scanf("%d", &nombre1);
	printf("Entrex le nombre 2: \n");
	scanf("%d", &nombre2);
	
	//on fait le calcul
	resultat = nombre1 + nombre2;
	
	//et on affiche l'addition á l'écran
	
	printf("%d + %d = %d\n",nombre1,nombre2,resultat);
	return 0;
}

	
