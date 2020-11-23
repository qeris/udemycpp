#include <iostream>


// Inline comment

/*
 * Multiline
 * Comment
 */
 
int main() {
	int favourite_number;
	
	std::cout << "Enter your favourite number between 1 and  100: ";
	std::cin >> favourite_number; //assign the input from console to favourite_number
	std::cout << "Wow, " << favourite_number << " is my favourite number too!\n";
	
	return 0;
}