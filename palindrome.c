#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>

bool estPalindrome (const char* mot);
bool estPhrasePalindrome (const char* phrase);

int main (int argc, char** argv){

	assert(argc==2);

	printf("%d\n", estPhrasePalindrome(argv[1]));

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

bool estPhrasePalindrome(const char* phrase){

	const char* pointeur_debut = phrase;
	const char* pointeur_fin = phrase + strlen(phrase) -1;

	while(pointeur_debut < pointeur_fin){

		while(*pointeur_fin == ' ' || ispunct(*pointeur_fin)) pointeur_fin --;

		while(*pointeur_debut == ' ' || ispunct(*pointeur_debut)) pointeur_debut ++;
	
		if(toupper(*pointeur_debut) != toupper(*pointeur_fin)) return false;

		pointeur_fin --;
		pointeur_debut ++;

	}

	return true;
}