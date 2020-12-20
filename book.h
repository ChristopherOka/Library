#pragma once
#include <iostream>
#include <string>

class Book {
private:
	//Declaring object attributes
	std::string title, authors, date_of_publication;
public:
//PURPOSE: Default constructor for Book class
Book(); 

//PURPOSE: Explicit parametric constructor with one string input (title)
Book(std::string); 

//PURPOSE: Parametric constructor with two string inputs (title and author)
Book(std::string, std::string);

//PURPOSE: Parametric constructor with three string inputs (titls, author, date of publication)
Book(std::string, std::string, std::string); 

//PURPOSE: Getter method for obtaining Book object title
std::string get_book_title(); 

//PURPOSE: Getter method for obtaining Book object authors
std::string get_book_author();

//PURPOSE: Getter method for obtaining Book object date of birth
std::string get_book_date_of_publication(); 

//PURPOSE: Method of printing out attributes of Book objects
void print(); 
};

