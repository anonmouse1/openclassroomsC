#include <stdio.h>
# define MAJEUR(age) if (age >= 18) \ 
			printf( "Vous etes majeur\n");\
		else \
			printf("Vous etes mineur\n");

int main( int argc, char *argv[])
{
	MAJEUR(2);

	return 0;
}


