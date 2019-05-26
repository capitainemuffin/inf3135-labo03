#include <stdio.h>
#include <stddef.h>
const double* trouverElement (const double tableau[], unsigned int taille, double element);

int main (){


	double tableau [] = {2.0, 3.0, 4, 12, 1, 9};
	for(int i = 0 ; i < 6 ; i ++ ){

		printf("Valeur : %f Adresse : %p\n", tableau[i], &tableau[i]);
	}

	printf("Adresse trouvée : %p\n", trouverElement(tableau, 6, 2));

	return 0;
}

const double* trouverElement(const double tableau[], unsigned int taille, double element){

	for (int i = 0; i < taille; i++){

		if (tableau[i] == element) return &tableau[i];
	}

	return NULL;
}