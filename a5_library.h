#pragma once
#include "a5_book.h"
#include <vector>
#include <string>
#include <iostream>


class Library {
private:
	std::vector<Book> library_books; //Initialize vector for storing Book objects in Library class

public:
	//PURPOSE: Default constructor for Library object
	Library();	
	
	//PURPOSE: Parametric constructor for Library object with collection of books vector as a parameter
	Library(std::vector<Book>); 
	
	//PURPOSE: Method for printing Book index number in the vector and the book attributes
	void print();

	//PURPOSE: Method for adding title, authors and date of publication to the Library vector by taking strings and turning them into a Book object
	//Checks for no repeats
	bool add_book(std::string, std::string, std::string);

	//PURPOSE: Method for adding Book object to the Library vector, while checking for no repeats
	bool add_book(Book);

	//PURPOSE: Method for removing Book object from Library vector, by checking if an object exists with inputted attributes and removing it
	bool remove_book(std::string, std::string, std::string);

	//PURPOSE: Method for removing Book object from Library vector, by checking if the same object exists and removing it
	bool remove_book(Book);
};

