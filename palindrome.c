#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

bool estPalindrome (const char* mot);

int main (int argc, char** argv){

	assert(argc==2);

	printf("%d\n", estPalindrome(argv[1]));

	return 0;
}

bool estPalindrome(const char* mot){

	const char* pointeur_fin = mot + strlen(mot) - 1;
	const char* pointeur_debut = mot;

	while (pointeur_fin > pointeur_debut){

		if (*pointeur_fin != *pointeur_debut) return false;

		pointeur_fin--;
		pointeur_debut++;

	}

	return true;
}