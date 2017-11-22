/*
Name: Rohan Sharma
UVicID: 
Date: 2015/09/29
Assignment: A2
File name: A2Part1.c

*/

#include <stdio.h>
#include <stdlib.h>

void arithmeticseq(){
	int i = 6, j;

	printf("Arithmetic Sequence:   %d ", i);

	for(j = 0; j < 10 ; j++){

		i +=	11;

		printf ("  %d  ",i);

	}
}


void harmonicseq(){
	float k = 1, l;

	printf ("\nHarmonic Sequence:    ");

	for(l = 1; l < 12; l++){

		k = 1/l;

		printf (" %0.2f  ",k);
	}
}


void fibonacciseq(){
	int m = 1, n = 1, i , o;

	printf ("\nFibonacci Sequence:    %d  %d " , m , n);

	for( i = 0; i < 13 ;i++ ){

		o = m + n;
		m = n;
		n = o;



		printf (" %d  " , o);

	}
}


void leonardoseq() {

	int m = 1, n = 1, i , o;

		printf ("\nLeonardo Sequence:     %d  %d " , m , n);

		for( i = 0; i < 13 ;i++ ){

			o = m + n + 1;
			m = n;
			n = o;



			printf (" %d  " , o);

		}
	}

int main(void) {


	arithmeticseq();
	harmonicseq();
	fibonacciseq();
	leonardoseq();
	return EXIT_SUCCESS;
}
