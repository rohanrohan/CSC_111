/*
Name: Rohan Sharma
UVicID: 
Date: 2015/09/29
Assignment: A2
File name: A2Part2.c
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int y , x;
	double z ;
	z=1.0;
	y=1;



	for(x = 0; x <10 ; x++){

		printf(" %d  %d  %f\n" , y ,x ,z);

		y = 3*y;
		z = (1.0/3.0)*z;

	}

	return EXIT_SUCCESS;
}

