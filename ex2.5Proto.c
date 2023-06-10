#include <stdio.h>
#include <stdlib.h>

// La ligne suivante est le prototype de la function aireRectangle :
//prototype
double aireRectangle(double largeur, double hauteur) ;

int main( int argc, char* argv[])
{
	printf("Rectangle de largeur 5 et hauteur 10. Aire = %f\n",aireRectangle(5,10));
	printf("Rectangle de largeur 2.5 et hauteur 3.5. Aire = %f\n",aireRectangle(2.5,3.5));
	printf("Rectangle de largeur 4.2 et hauteur 9.7. Aire = %f\n", aireRectangle(4.2,9.7));
	
	return 0;
}

//la function aireRectangle peut maintenant etre mise en place  n'importe ou dans le code 

double aireRectangle(double largeur, double hauteur)
{
	return largeur * hauteur;
}

