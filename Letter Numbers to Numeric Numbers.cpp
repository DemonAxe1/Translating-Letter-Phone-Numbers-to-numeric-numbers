/*
Name: DemonAxe
This project takes in a letter phone number and turns it into a normal numeric number. It only registers the first 7 letters to convert them to numbers. This application also asks the user if they have another number.
*/
#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	
	//Just setting vars.
	char letter, whileTest, phoneLetter;
	int counter;

	
	
	// The initial input for the while test that will start the first loop.
	cout << "Letter Number Translator\n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "Do you have a number that you want to translate? (y or Y for yes or anything else for no)." << endl;
	cin >> whileTest;	
	
	while (whileTest == 'y' || whileTest == 'Y') // If whileTest = y or Y the loop will stay true.
	{
	
		counter = 0;
		cout << "Enter the number in letters: " << endl; // Getting the input from the user.
		while(cin.get(letter) && counter != 7) // Inputting letter by letter to the var letter and check if the counter is not = to 7 (since 7 letter is our cut-off).
		{
			
			if (isalpha(letter)) // This checks if the char input that the user put in is a letter. If it is not a letter the char is skipped.
			{
			counter ++; //This adds one to the counter, till it hits 7 and the loop stops.
				if (counter == 4) //counts to see how many letters have been converted. Once 3 numbers (4 counts) have been added this if statement goes off and adds a '-'.
				{
					cout << '-';
				}
			
				phoneLetter = tolower(letter); // Turns all letters into lower case letters.
				
				if(counter == 1)
					cout << "The phone number is: ";
				
				// Takes the lowercase letter and checks it through the switch statement to see what number to output.
				switch(phoneLetter) 
				{
					case 'a':
					case 'b':
					case 'c':
						cout << '2';
						break;
					case 'd':
					case 'e':
					case 'f':
						cout << '3';
						break;
					case 'g':
					case 'h':
					case 'i':
						cout << '4';
						break;
					case 'j':
					case 'k':
					case 'l': 
						cout << '5';
						break;
					case 'm':
					case 'n':
					case 'o':
						cout << '6';
						break;
					case 'p':
					case 'q':
					case 'r':
					case 's':
						cout << '7';
						break;
					case 't':
					case 'u':
					case 'v':
						cout << '8';
						break;
					case 'w':
					case 'x':
					case 'y':
					case 'z':
						cout << '9';
						break;

				
				
				
				}
			}
			if(counter ==7) // This makes sure if the user puts more than 7 letter it gets rid of any of the extra characters in cin. Clearing input.
			{
				cin.ignore(80, '\n'); // If the input is longer than 7 letters everything past that up to 80 chars or a new line is found.
				break; // Ends the loop
			}
		}
		cout << endl << endl << "Do you have another number that you want to translate? (y or Y for yes or anything else for no)." << endl; // Asks the user if they have another number or if are they done. If they do it resets the loop, otherwise, the program ends.
		cin >> whileTest;
		
	}
	cout << "Thank you! Goodbye!";
	return 0;
}

