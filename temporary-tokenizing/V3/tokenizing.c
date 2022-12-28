/*
Author: Raymond Javier
Email: rjavier1@myseneca.ca
StudentID: 167961218
Date written: July 31, 2022
Course: CPR101NGG
Project: Final Project
Filename : tokenizing.c
Purpose: This module handle tokenization of the input strings.
Version: 3
*/

// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"

//V1
// This will put all the words into string if separated by a space
void tokenizing(void) {

	// Start the function with a message and declare the variables to be used.
	printf("*** Start of Tokenizing Sentences Demo ***\n");

	// will store the user input string/phrase or sentences.
	char sentences[BUFFER_SIZE];

	// the char pointer that will receive the token from the sentences
	char* nextSentence = NULL;

	// counter for the number of sentences or token generated.
	int	sentencesCounter;

	// Do the tokenizing at least once
	do {
		// Ask the user to input few sentences separated by dot.
		printf("Type a few sentences separated by dot (q - to quit):\n");

		// Capture the sentences using fgets and store in sentences char array.
		fgets(sentences, BUFFER_SIZE, stdin);

		// Add the terminating character to tell the end of the string
		sentences[strlen(sentences) - 1] = '\0';

		// Check the user input
		if (strcmp(sentences, "q") != 0) { // The user input a few sentences
			// use the function strtok to break the string of characters when it finds a dot. Return the first sentence found and keep the characters left in memory
			nextSentence = strtok(sentences, ".");

			// Set the sentencesCounter to 1 as it will have at least 1 sentence
			sentencesCounter = 1;

			// Have a loop to retrieve the next few sentences if there is. nextSentence will have value if have sentence left
			while (nextSentence) {
				// print the sentence extracted from the string of characters
				printf("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentence);

				// Get the next sentence from the string of characters that is saved in the memory, until it returns NULL
				nextSentence = strtok(NULL, ".");
			}
		}
	} while (strcmp(sentences, "q") != 0); // Exit when the user input letter q

	// Print something to inform user the end of the module.
	printf("*** End of Tokenizing Sentences Demo ***\n\n");
}