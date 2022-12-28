// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

void manipulating(void) {

	printf("*** Start of Comparing Strings Demo ***\n");
	//will print this line with print() function used

	char compare1[BUFFER_SIZE];
	//variable compare1 with size(BUFFER_SIZE-predefined ) and datatype char is declared

	char compare2[BUFFER_SIZE];
	//variable compare2 with size(BUFFER_SIZE-predefined ) and datatype char is declared

	int result; //variable result is declared with int datatype

	do { //do-while loop used

		printf("Type the 1st string to compare (q - to quit):\n");
		//will print this line with print() function used

		fgets(compare1, BUFFER_SIZE, stdin);
		//reads a line from the specified stream and stores it into the compare1 and BUFFER SIZE which is predefined and with stdin is an input stream where data is sent to and read by a program

		compare1[strlen(compare1) - 1] = '\0';
		//As we know the last byte of string must be null terminator i.e; '0' value & so we assigned '/0'

		if (strcmp(compare1, "q") != 0) {
			//Here in 'if loop' if the value of compare1 is equal to character "q" then condition will false and result is end of 'if loop' otherwise the loop will carry on.It is compare with help of strcmp() function.

			printf("Type the 2nd string to compare:\n");
			//will print this line with print() function used

			fgets(compare2, BUFFER_SIZE, stdin);
			//reads a line from the specified stream and stores it into the compare2 and BUFFER SIZE
			//which is predefinedand with stdin is an input stream where data is sent to and read by a program

			compare2[strlen(compare2) - 1] = '\0';
			//As we know the last byte of string must be null terminator i.e; '0' value & so we assigned '/0'

			result = strcmp(compare1, compare2);
			//strcmp() function is used to compare both strings and the value of strcmp() is store in variable
			//result which will be a integer

			if (result < 0)
				// result will be less than 0 if 'compare1' is less compare to 'compare2'

				printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
			//will print this line with print() function used

			else if (result == 0)
				// result will be equal to 0 if 'compare1' is equal compare to 'compare2'

				printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
			//will print this line with print() function used

			else //This will execute if 'compare2' is greater compare to 'compare2'

				printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
			//will print this line with print() function used
		}
	} while (strcmp(compare1, "q") != 0);
	//in while loop,if the value of compare1 is equal to character "q" then condition will false and result is end of 'do-while loop' otherwise the loop will carry on .It is compare with help of strcmp() function

	printf("*** End of Comparing Strings Demo ***\n\n"); //will print this line with print() function used
	// End of Program
}