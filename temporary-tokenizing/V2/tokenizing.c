/*
Author: Raymond Javier
Email: rjavier1@myseneca.ca
StudentID: 167961218
Date written: July 31, 2022
Course: CPR101NGG
Project: Final Project
Filename : tokenizing.c
Purpose: This module handle tokenization of the input strings.
Version: 2
*/

// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"

//V2
// This will put all the words into string if separated by a space
void tokenizing(void) {

	// Start the function with a message and declare the variables to be used.
	printf("*** Start of Tokenizing Phrases Demo ***\n");

	// will store the user input string/phrase or sentences.
	char phrases[BUFFER_SIZE];

	// the char pointer that will receive the token from the phrases
	char* nextPhrase = NULL;

	// counter for the number of phrases or token generated.
	int	phraseCounter;

	// Do the tokenizing at least once
	do {
		// Ask the user to input few words separated by comma.
		printf("Type a few phrases separated by comma (q - to quit):\n");

		// Capture the phrases using fgets and store in phrases char array.
		fgets(phrases, BUFFER_SIZE, stdin);

		// Add the terminating character to tell the end of the string
		phrases[strlen(phrases) - 1] = '\0';

		// Check the user input
		if (strcmp(phrases, "q") != 0) { // The user input a few phrases
			// use the function strtok to break the string of characters when it finds a comma. Return the first phrase found and keep the characters left in memory
			nextPhrase = strtok(phrases, ",");

			// Set the phraseCounter to 1 as it will have at least 1 phrase
			phraseCounter = 1;

			// Have a loop to retrieve the next few phrases if there is. nextPhrase will have value if have phrase left
			while (nextPhrase) {
				// print the phrase extracted from the string of characters
				printf("Phrase #%d is \'%s\'\n", phraseCounter++, nextPhrase);

				// Get the next phrase from the string of characters that is saved in the memory, until it returns NULL
				nextPhrase = strtok(NULL, ",");
			}
		}
	} while (strcmp(phrases, "q") != 0); // Exit when the user input letter q

	// Print something to inform user the end of the module.
	printf("*** End of Tokenizing Phrases Demo ***\n\n");
}