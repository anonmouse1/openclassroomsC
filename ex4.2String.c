#include <stdio.h>

int main( int argc, char *argv[]) 
{
	FILE* fichier = NULL;
	
	fichier = fopen("test.txt", "w");
	
	if(fichier != NULL) 
	{
		fputs("This is a test string", fichier);
		fclose(fichier);
	}

	return 0;
}
