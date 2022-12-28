/*
Author: Raymond Javier
Email: rjavier1@myseneca.ca
StudentID: 167961218
Date written: July 31, 2022
Course: CPR101NGG
Project: Final Project
Filename : tokenizing.c
Purpose: This module handle tokenization of the input strings.
*/

// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"

//V1
// This will put all the words into string if separated by a space
void tokenizing(void) {

	// Start the function with a message and declare the variables to be used.
	printf("*** Start of Tokenizing Words Demo ***\n");

	// will store the user input string/phrase or sentences.
	char	words[BUFFER_SIZE];

	// the char pointer that will receive the token from the string
	char*	nextWord = NULL;

	// counter for the number of words or token generated.
	int		wordsCounter;

	// Do the tokenizing at least once
	do {
		// Ask the user to input few words separated by space.
		printf("Type a few words separated by space (q - to quit):\n");

		// Capture the strings using fgets and store in words char array.
		fgets(words, BUFFER_SIZE, stdin);

		// Add the terminating character to tell the end of the string
		words[strlen(words) - 1] = '\0';

		// Check the user input
		if (strcmp(words, "q") != 0) { // The user input a few words
			// use the function strtok to break the string of characters when it finds a space. Return the first word found and keep the characters left in memory
			nextWord = strtok(words, " ");

			// Set the wordsCounter to 1 as it will have at least 1 word
			wordsCounter = 1;

			// Have aloop to retrieve the next few words if there is. nextWord will have value if have words left
			while (nextWord) {
				// print the word extracted from the string of characters
				printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);

				// Get the next word from the string of characters that is saved in the memory, until it returns NULL
				nextWord = strtok(NULL, " ");
			}
		}
	} while (strcmp(words, "q") != 0); // Exit when the user input letter q

	// Print something to inform user the end of the module.
	printf("*** End of Tokenizing Words Demo ***\n\n");
}