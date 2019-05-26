OPTIONS = -Wall 

default: all

all : cmdline renverse palindrome fouille

cmdline: cmdline.o
	gcc $(OPTIONS) -o cmdline cmdline.o

cmdline.o : cmdline.c
	gcc $(OPTIONS) -c -o cmdline.o cmdline.c

renverse : renverse.o
	gcc $(OPTIONS) -o renverse renverse.o

renverse.o : renverse.c
	gcc $(OPTIONS) -c -o renverse.o renverse.c

palindrome : palindrome.o
	gcc $(OPTIONS) -o palindrome palindrome.o

palindrome.o : palindrome.c
	gcc $(OPTIONS) -c -o palindrome.o palindrome.c

fouille : fouille.o
	gcc $(OPTIONS) -o fouille fouille.o

fouille.o : fouille.c
	gcc $(OPTIONS) -c -o fouille.o fouille.c 

clean : 
	rm -f palindrome
	rm -f renverse
	rm -f cmdline
	rm -f fouille
	rm -f *.out
	rm -f *.o

.PHONY : 
	clean 
	all