#include <stdio.h>
#include <string.h>
#include <assert.h>
int main (int argc, char* argv[]){

	int longueurTotale = 0;

	for(int i = 1; i < argc; i++){
		longueurTotale += strlen(argv[i]);
	}

	assert(argc > 1);
	char tab[longueurTotale];

	for (int i = argc - 2; i > 0; i--) {

		strcat(tab, argv[i]);
	}

	printf("%s", tab); 
}