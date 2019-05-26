#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int cmdline( int argc, char* argv[]);

int main(int argc, char* argv[]){


	cmdline(argc, argv);


	return 0;
}


int cmdline ( int argc, char* argv[] ) {

	assert( argc > 2 );

	if ( strcmp ( argv[1], "-c" ) != 0 || strcmp ( argv[2], "CODE" ) != 0 ) {

		printf("Erreur à l'option -c\n");
		exit (1);


	}

	if ( argc > 3 ) {

		for ( int i = 3 ; i < argc ; i+=2 ) {

			if ( strcmp ( argv[i], "-1" ) == 0 || strcmp ( argv[i], "-2" ) == 0 ) {

				assert ( argc > i+1);
				char * pointeur = argv[i+1];

				if( *pointeur == '-' ) pointeur++;
	
				while( *pointeur != '\0' ) {

					if( !isdigit(*pointeur) ) {

						printf("Erreur à l'option -1 ou -2\n");
						exit (2);
					}

					pointeur++;
				}

				continue;


			} else if ( strcmp ( argv[i], "-d" ) == 0 ) {

				assert ( argc > i+1);

				if ( strcmp ( argv[i+1], "++" ) != 0 && strcmp ( argv[i+1], "--" ) != 0 ) {

					printf("Erreur à l'option -d\n");
					exit (3);
				}

				continue;

			} else {

				printf("Paramètre \"%s\" non reconnu\n", argv[i]);
				exit(4);

			}

		}

	}

	printf("Fin\n");

	return 0;
}