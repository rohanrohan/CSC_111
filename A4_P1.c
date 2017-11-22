
/*Name: Rohan Sharma
UVicID: 
Date: 2015/10/20
Assignment: A4
File name: A4P1.c
 */

#include <stdio.h>
#include <stdlib.h>

int RomanNumber(int x){



			if(x >= 1000){
				printf("M");
				x = x - 1000;
				RomanNumber(x);

			}else if(x >= 500){
					 printf("D");
					 x = x - 500;
					 RomanNumber(x);

			}else if (x >= 100){
				 printf("C");
				 x = x - 100;
				 RomanNumber(x);
			}else if(x >= 50){
				printf("L");
				x = x - 50;
				RomanNumber(x);
			}else if(x >= 10){
				printf("X");
				x = x - 10;
				RomanNumber(x);
			}else if(x >= 5){
				printf("V");
				x = x - 5;
				RomanNumber(x);

			}else if(x >= 1){
				printf("I");
				x = x - 1;
				RomanNumber(x);
			}

}
int main(void) {


		int i = 0;
		while(1){

			printf("Enter a number from 1 - 5000 to convert to Roman Numeral  ");
			fflush(stdout);
			scanf("%d",&i);
			if(i > 5000){
				printf("Invalid value entered");

			}else{
			RomanNumber(i);
			}

			printf("\n");

		}
	return EXIT_SUCCESS;
}
