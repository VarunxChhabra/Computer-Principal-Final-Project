//CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS

// Creating a macro named Buffer_Size with the value of 80
#define BUFFER_SIZE 80 

// Including the header file for calling the functions
#include "converting.h" 

// Calling the converting function
void converting(void)
{
    // Initilazie the code by printing the line that says converting strings to double
    printf("*** Start of Converting Strings to long Demo ***\n");

    // Creating the array of longString with the max value of 80
    char longString[BUFFER_SIZE];

    // Creating an double variable named longNumber
    long longNumber;

    // Starting the do-while loop
    do
    {
        // Printing line which says type q to quit the loop and program
        printf("Type the long numeric string (q - to quit):\n");

        // reads the input and stores it into the longString array of 80 size and stdin is used to send the data to the program
        fgets(longString, BUFFER_SIZE, stdin);

        // assigning the last character of longString to a null terminating character
        longString[strlen(longString) - 1] = '\0';

        //  applying if condition for comparing that the character entered in longString if not equal to q
        if ((strcmp(longString, "q") != 0))
        {
            // storing the long integer value afer converting it from string by using atol function
            longNumber = atol(longString);

            // printing the result statement with the converted number
            printf("Converted number is %ld\n", longNumber);
             
            // ending of if condition
        }
        // applying the condition that do-while loop will work until q is entered
    } while (strcmp(longString, "q") != 0);

    // Printing the ending line for this converting part
    printf("*** End of Converting Strings to long Demo ***\n\n");
}