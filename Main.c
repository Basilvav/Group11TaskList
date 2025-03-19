#include <stdio.h>

//PROG71990-W2025-A2Q1-BasilVavasis
//this code is designed to take an integer input and then count up 16 spaces from it


//main function
int main(void) {
	//first initialize the variable we will use
	int startNumber;

	//get the user input now
	printf("Put an integer here and I'll count by 1 going up to 16\n");
	int numInput = scanf("%d", &startNumber);


	//checking to see if there are input errors
	if (numInput != 1) {
		// writing an input error message
		printf("Whoops whatever it was you inputted wasnt an integer try again");

	} else {
		//now the main porcessing and output of the code
		//we start with a while loop to count up 16 spcaes	
		for (int i = 1; i < 17; i++) {
			//The main print statement that will show all the additions
			printf("%d\n", startNumber + i);

		}


	}

    

}