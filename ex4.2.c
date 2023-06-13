#include <stdio.h>

int main( int argc, char *argv[])

{
	FILE* fichier = NULL;
	
	fichier = fopen("test.txt","r+");
	
	if (fichier != NULL)
	{
		printf("on peut lire et écrire dan le fichier");
		//il faut fermer les fichiers aussi quand on est finit
		fclose(fichier);
		
	}
	else
	{
	
		//on affiche un message d'erreur si on veut
		printf("Impossible d'ouvrir le fichier text.txt");
	}

	return 0;

}
