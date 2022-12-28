
#define CRT SECURE NO WARNINGS

// defining macro variables and including header file
#define BUFFER_SIZE 80 
#define NUM_INPUT_SIZE 10 
#include "fundamentals.h" 

void fundamentals (void) //function prototype
{

    //initial print statement
    printf ("*** Start of Measuring Strings Demo ***\n") ;

    // declaring a variable called buffer2 of character data type with size 80
    char buffer2 [BUFFER_SIZE];

    //begining of do-while loop
    do{

        //asking the user to input a non-empty string,and (press q to quit)
        printf ("Type a string(q - to quit) : \n");

        //reading the string entered by the user and assigning it to the buffer2 variable
        fgets(buffer2, BUFFER_SIZE, stdin);

        //assigning the last character of the buffer2 variable as a null terminating character
        buffer2[strlen(buffer2) - 1] = '\0';

        // if statement, where the entered string is not 'q'
        if (strcmp (buffer2,"q")!= 0)
        {   
            //printing the enterd string in single quotes and displaying the length of the string
            printf ("The length of \'%s\' is %d characters\n",buffer2, (int)strlen (buffer2)) ;
        }

    // while condition, where the entered string is not 'q'
    }while(strcmp (buffer2,"q")!= 0);

    //final print statement
    printf("*** End of Measuring strings Demo***\n\n");

}