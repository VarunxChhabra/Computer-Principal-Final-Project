#define _CRT_SECURE_NO_WARNINGS

// include the header file named converting.h
#include "converting.h"


// calling the main function as it is a main function so no arguments are required
int main(void)

{
	// inititailizing the character array named buff with the storing value of 10
	char buff[10];

	// Starting the do-while loop
	do
	{
		// printing menu options from which user can choose from

		// printing statement saying press 1 for fundamentals
		printf("1 - Fundamentals\n");

		// printing statement saying press 2 for Manipulation
		printf("2 - Manipulation\n");

		// printing statement saying press 3 for converting
		printf("3 - Converting\n");

		// printing statement saying press 4 for Tokenizing
		printf("4 - Tokenizing\n");

		// printing statement saying press 0 to exit
		printf("0 - Exit\n");

		// printing and Asking which module do user wants to run
		printf("Which module to run? \n");

		// takes value from user and stores it in buff
		fgets(buff, 10, stdin);

		// starting switch case condition
		switch (buff[0])
		{
			// calling the function as per the users choice
		case '1': converting();

			// break statement to stop the current function after user is done with his work.
			break;

			// end of switch case
		}

		// do-while loop gets ended if buff[0] == 0
	} while (buff[0] != '0');

	// returning 0 as value and ending the program
	return 0;
}
