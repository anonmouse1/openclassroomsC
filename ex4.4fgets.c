#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lire(char *chaine, int longeur) 
{
	char *positionEntree = NULL;
	
	//on lit le texte saisi au clavier
	if(fgets(chaine, longeur, stdin) != NULL) //pas d'erreur de saisie ?
	{
	
		positionEntree = strchr(chaine, '\n');//On recherce l'Éntree
		if(positionEntree != NULL) // si on a trouvé le retour a la ligne
		{
			*positionEntree = '\0';//on remplace ce caractere par \0
		}
		return 1;//on renvoie 1 si la fonction s'est déroulée sans erreur
	}
	else
	{
		return 0;//on renvoie 0 s'il y a eu une erreur
	}
}	
