
// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

void manipulating(void)
{

	printf("*** Start of Searching Strings Demo ***\n");
	//will print this line with print() function used

	char haystack[BUFFER_SIZE];
	//variable haystack with size(BUFFER_SIZE-predefined ) and datatype char is declared

	char needle[BUFFER_SIZE];
	//variable needle with size(BUFFER_SIZE-predefined ) and datatype char is declared

	char* occurrence = NULL;
	//a pointer with NULL value and datatype char is declared

	do { //do-while loop used
		printf("Type the string (q to quit):\n");
		//will print this line with print() function used

		fgets(haystack, BUFFER_SIZE, stdin);
		//reads a line from the specified stream and stores it into the haystack and BUFFER SIZE which is predefined and with stdin is an input stream where data is sent to and read by a program

		haystack[strlen(haystack) - 1] = '\0';
		//As we know the last byte of string must be null terminator i.e; '0' value & so we assigned '\0'

		if (strcmp(haystack, "q") != 0)
			//Here in 'if loop' if the value of compare1 is equal to character "q" then condition will false and result is end of 'if loop' otherwise the loop will carry on. It is compare with help of strcmp() function.
		{
			printf("Type the substring:\n");
			//will print this line with print() function used

			fgets(needle, BUFFER_SIZE, stdin);
			//reads a line from the specified stream and stores it into the needle and BUFFER SIZE which is predefined and with stdin is an input stream where data is sent to and read by a program

			needle[strlen(needle) - 1] = '\0';
			//As we know the last byte of string must be null terminator i.e; '0' value & so we assigned '\0'

			occurrence = strstr(haystack, needle);
			//strstr() function use to find first occurrence of the substring in the following string i.e; of
			//substring needle in the string haystack.The return value will then store in occurrence

			if (occurrence)
				//This condition of if-loop will true if the value of occurrence is not NULL.

				printf("\'%s\' found at %d position\n", needle, (int)(occurrence - haystack));
			//will print the first occurrence of substring and position index of substring with print() function
			//used

			else
				printf("Not found\n");
			//will print this line with print() function used
		}
	} while (strcmp(haystack, "q") != 0);
	//in while loop,if the value of haystack is equal to character "q" then condition will false and
	//result is end of 'do-while loop' otherwise the loop will carry on.It is compare with help of
	//strcmp() function


	printf("*** End of Searching Strings Demo ***\n\n");
	//will print this line with print() function used
}


