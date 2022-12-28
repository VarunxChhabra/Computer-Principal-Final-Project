//CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS

// Creating a macro named Buffer_Size with the value of 80
#define BUFFER_SIZE 80 

// Including the header file for calling the functions
#include "converting.h" 

// V1


// Calling the converting function
void converting(void) 
{
	// Initilazie the code the by printing the line
	printf("*** Start of Converting Strings to int Demo ***\n"); 

	// Creating the array of intString with the max value of 80
	char intString[BUFFER_SIZE]; 

	// Creating an integer variable named intNumber
	int intNumber; 

	// Starting the do-while loop 
	do {
		
		// Printing line which says type q to quit the loop and program
		printf("Type an int numeric string (q - to quit):\n"); 

		// reads the input and stores it into the intString array of 80 size and stdin is used to send the data to the program
		fgets(intString, BUFFER_SIZE, stdin);  
		 
		// assigning the last character of intString to a null terminating character
		intString[strlen(intString) - 1] = '\0'; 
		
		//  applying if condition for comparing the character if not equal to q
		if (strcmp(intString, "q") != 0)
		{
			// storing the integer value afer converting it from string by use of atoi function
			intNumber = atoi(intString);

			// printing the result statement with the converted number
			printf("Converted number is %d\n", intNumber);
			// ending of if condition
		}
		
		// applying the condition that loop will work until q is entered
	} while (strcmp(intString, "q") != 0);

	// Printing the ending line of part converting
	printf("*** End of converting strings to int Demo ***\n\n");
}