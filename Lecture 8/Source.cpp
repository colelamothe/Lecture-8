// Lecture 8 supplementary program

#include <iostream>
#include<string>
#include<iomanip>

using namespace std;

int main() {

	/*
	string userName;

	cout << "Write your name: " << endl;
	cin >> userName; // This will only take input up until the first whitespace character. Only will work to take the first name

	cout << "Username enterered as: " << userName << endl;
	*/

	//data manipulation
	//Variable declaration
	double a = 30;
	double b = 10000.0;
	double pi = 3.1416;

	cout << "a: " << a << " b: " << b << " Pi: " << pi << endl; // standard output without number manipulation.

	cout.precision(5); // sets the number of digits to display when called

	cout << showpoint << "a: " << a << " b: " << b << " Pi: " << pi << endl;

	cout.precision(2); // When the number is less than the number scientific notation will be automatically used for any non-decimal values and decimals will be truncated.

	cout << showpoint << "a: " << a << " b: " << b << " Pi: " << pi << endl;

	cout << setw(10); //sets a number of whitespace characters for the next cout command to be inserted before the output
	cout << 77 << endl;
	cout << setw(15);
	cout << left << "Hello" << endl; // left justifies the output of the line to the furthest left space. When combined with setw it appears to have done nothing.
	cout << setw(15);
	cout << right << "Hello" << endl; // Right justifies to the end of the whitespace. Similar to just leaving the setw to shift the output to the right.

	//using cin

	string firstName;
	string lastName;

	cout << "Enter your first name: " << endl;
	cin >> firstName;

	cout << "Enter your last name: " << endl;
	cin >> lastName;

	string yourInit = firstName.substr(0, 1) + "." + lastName.substr(0, 1) + "."; //this addition of strings concatenates them together, adding them in order as instructed one after the other

	//substr allows you to pull a piece of the string starting at the first number and capturing the number of characters equal to the second number
	//substr(0,1) starts at position 0 (the first position in a string) and grabs a single character. The first character.
	//When trying to get an item out of any type of array generally the counting starts at 0

	cout << "Your initials are: " << yourInit << endl;






	system("pause");
	return 0;
}