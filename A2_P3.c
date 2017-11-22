/*
Name: Rohan Sharma
UVicID: 
Date: 2015/09/29
Assignment: A2
File name: A2Part3.c
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	float x = 4.0,y;
	printf ("Litres  Miles\nper     per\n100KM   gallon\n");

	for(x = 4.0; x <= 8.0;x = x+ 0.1 ){
		y = (100*0.621371)/(x*0.219969);

		//Table values start here

		printf("  %0.1f      %0.1f\n", x , y);

	}



	return EXIT_SUCCESS;
}
