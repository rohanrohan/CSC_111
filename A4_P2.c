/*Name: Rohan Sharma
UVicID: 
Date: 2015/10/20
Assignment: A4
File name: A4P1.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void read_and_capitalize(){
	char c;
	//Get the first character from the user
	c = getchar();
	c = toupper(c);
	printf("%c",c);

	fflush(stdout);
	c = getchar();

	//Loop to read characters until a newline (\n) is encountered
	while(c != '\n'){
		//Print out the current character
		//(Modify this section to produce the output required by the assignment)
		if ( isspace(c) ){
			printf(" ");
			fflush(stdout);
			c = getchar();
			c = toupper(c);
			printf("%c",c);


		}else{
			printf("%c",c);
		}

		//Get the next character from the user
		c = getchar();
	}
	printf("\n");
} /* read_and_capitalize */


int main(void){

	printf("Enter a line of text: ");
	fflush(stdout);
	read_and_capitalize();
	return EXIT_SUCCESS;
} /*main*/


