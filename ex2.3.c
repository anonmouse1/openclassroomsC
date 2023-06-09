#include <stdio.h>
#include <stdlib.h>


//declarez function triple qui multiplie par trois
int triple(int nombre) //6
{
	return nombre * 3;//7
}

int main(int argc, char *argv[])//1
{
	int nombreEntre = 0; int nombreTriple = 0;//2
	printf("Entrez un nombre...");//3
	scanf("%d", &nombreEntre);//4
	
	nombreTriple = triple(nombreEntre);//5
	printf("Le triple de ce nombre est %d\n", nombreTriple);//8
	
	return 0;//9
}


