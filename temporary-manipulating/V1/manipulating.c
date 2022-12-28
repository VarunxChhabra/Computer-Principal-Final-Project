
// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

void manipulating(void) { //function manipulating with return type void
	
	printf("*** Start of Concatenating Strings Demo ***\n");
	//will print this line with print() function used
	
	char string1[BUFFER_SIZE];
	//variable string1 with size 80(BUFFER_SIZE-predefined ) and datatype char is declared
	
	char string2[BUFFER_SIZE];
	//variable string2 with size 80(BUFFER_SIZE-predefined ) and datatype char is declared
	
	do { //do-while loop used
		printf("Type the 1st string (q-to quit):\n"); //will print this line with print() function used
		
		fgets(string1, BUFFER_SIZE, stdin);
		//reads a line from the specified stream and stores it into the string1 of size 80(predefined) and with stdin is an input stream where data is sent to and read by a program
		
		string1[strlen(string1) - 1] = '\0';
		//As we know the last byte of string must be null terminator i.e; '0' value & so we assigned '/0'
		
		if ((strcmp(string1, "q") != 0))
			//Here in 'if loop' if the value of string1 is equal to character "q" then condition will false and result is end of 'if loop' otherwise the loop will carry on.It is compare with help of strcmp() function.
		{
			//Note if string1="q" then the 'if' condition will false and thus will not able to concatenate the
			//string
				
			printf("Type the 2nd string:\n"); //will print this line with print() function used
			
			fgets(string2, BUFFER_SIZE, stdin);
			//reads a line from the specified stream and stores it into the string2 of size 80(predefined) and
			//with stdin is an input stream where data is sent toand read by a program
				
				string2[strlen(string2) - 1] = '\0';
			//As we know the last byte of string must be null terminator i.e; '0' value & so we assigned '/0'
			
			strcat(string1, string2);
			//The strcat() function concatenates string2 to string1, so the final value is stored in string1
			
			printf("Concatenated string is \'%s\'\n", string1);
			//will print this line and value of string1 with print() function used
		}
	} while (strcmp(string1, "q") != 0);
	//in while loop,if the value of string1 is equal to character "q" then condition will false and result
	//is end of 'do-while loop' otherwise the loop will carry on.It is compare with help of strcmp()
   //function.
		
		printf("* End of Concatenating Strings Demo *\n\n");
	//will print this line with print() function used.It will print at last after the while loop is over
}
//End of program