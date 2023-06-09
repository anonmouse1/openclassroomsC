#include <stdio.h>

int main()
{
	int choice;
	printf("=== Menu ===\n");
	printf("1. Royal Cheese\n");
	printf("2. Mc Deluxe\n");
	printf("3. Mc Bacon\n");
	printf("4. Big Mac\n");
	printf("Votre choix(numero) ?\n");
	
	scanf("%d", &choice);
	
	switch(choice)
	{
	case(1):
		printf("C'est un Royal Cheese pour vous\n");
		break;
	case(2):
		printf("C'est un Mc Deluxe pour vous\n");
		break;
	case(3):
		printf("C'est un Mc Bacon pour vous\n");
		break;
	case(4):
		printf("C'est un Big Max pour vous\n");
		break;
		
	default:
		printf("C'est pas sur le menu,il faut essayer encore \n");
		break;
	}

}
