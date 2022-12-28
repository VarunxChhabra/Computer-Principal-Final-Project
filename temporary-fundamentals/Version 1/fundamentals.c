#define CRT SECURE NO WARNINGS

// defining macro variables and including header file
#define BUFFER_SIZE 80 
#define NUM_INPUT_SIZE 10 
#include "fundamentals.h" 

void fundamentals (void) //function
{
    // v1

    // introducatry print statement and declaring variables
    printf("*** Start of the Indexing Strings Demo ***\n"); 
    char buffer1[BUFFER_SIZE]; 
    char numInput[NUM_INPUT_SIZE]; 
    size_t position; 

    do{ // begining of do-while loop

        // print statement (Asking the user to type a non empty string)
        printf("Type not empty string (q - to quit):\n"); 

        // reads the entered string from the standard input stream and stores in the array called 'buffer1'
        fgets(buffer1, BUFFER_SIZE, stdin);

        // assigning the last character of 'buffer1' to a null terminating character
        buffer1[strlen(buffer1) -1 ] = '\0'; 

        // if condition, where entered character is not 'q'
        if (strcmp(buffer1, "q") != 0){ 

            //print statement (to enter the character position)
            printf ("Type the character position within the string: \n");

            // reads the entered string from the standard input stream and stores in the array called 'numInput'
            fgets(numInput, NUM_INPUT_SIZE, stdin ); 

             // assigning the last character of 'numInput' to a null terminating character
            numInput[strlen(numInput) - 1] = '\0';

            // converts position to integer numerical representation of numInput
            position = atoi(numInput); 

            // if condition, where position greater than or equal to length of buffer1
            if (position >= strlen(buffer1)){ 

                // re-assigning the value of position to length of buffer1 
                position = strlen(buffer1) - 1; 


                printf("Too big... Position reduced to max. available\n");  //print statement 
            }

            // printing the output, ie, the character found at the particular index
            printf("The character found at %d position is \'%c\'\n", (int)position, buffer1[position]); 
        }

    // while condition of the do-while loop, where entered character is not 'q'
    }while (strcmp(buffer1, "q") != 0); 

    // final print statement 
    printf("*** End of Indexing Strings Demo ***\n\n"); 
}