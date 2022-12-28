
#define CRT SECURE NO WARNINGS

// defining macro variables and including header file
#define BUFFER_SIZE 80 
#define NUM_INPUT_SIZE 10 
#include "fundamentals.h" 

void fundamentals (void) //function prototype
{

    printf ("*** Start of Copying Strings Demo ***\n"); // initial print statement
    char destination[BUFFER_SIZE]; //declaring an array called destination of character data type with size 80 
    char source[BUFFER_SIZE]; //declaring an array called source of character data type with size 80 
    do //begining of do-while loop
    {
        destination[0] = '\0'; //first element of destination variable set to the null terminating character
        printf ("Destination string is reset to empty\n"); // printing 'Destination variable set to empty'
        printf ("Type the source string (q - to quit) : \n"); // asking the user to type the source string
        fgets (source, BUFFER_SIZE, stdin); // reading the string entered by user and storing it into source array
        source[strlen (source) -1] = '\0'; // last element of source array set to null terminating character

        if (strcmp (source,"q") != 0) // if statement, where the entered character is not q
        {
            strcpy (destination, source) ; // copying the characters in source array to destination array
            printf ("New destination string is \'%s\'\n", destination); // printing the string enetred by the user.
        }

    }while (strcmp (source,"q") != 0); // while loop, where the entered character is not q
    printf ("*** End of Copying Strings Demo ***\n\n"); // final print statement

}