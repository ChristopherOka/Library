#include "a5_book.h"


Book::Book() { //Setting all attributes to "n/a"
	title = "n/a";
	authors = "n/a";
	date_of_publication = "n/a";
}

Book::Book(std::string new_title) : title(new_title) { //Setting non-inputted attributes as "n/a"
	authors = "n/a";
	date_of_publication = "n/a";
}


Book::Book(std::string new_title, std::string new_authors) : title(new_title), authors(new_authors) //Setting non-inputted attributes as "n/a"
{
	date_of_publication = "n/a";
}

Book::Book(std::string new_title, std::string new_authors, std::string new_date_of_publication) :
	title(new_title),
	authors(new_authors),
	date_of_publication(new_date_of_publication) {}  

void Book::print() { 
std::cout << "The title of the book is: " << title << "\n"
<< "The authors of the book are: " << authors << "\n"
<< "The date of publication is: " << date_of_publication << "\n";
}

std::string Book::get_book_title()
{
	return title;
}

std::string Book::get_book_author()
{
	return authors;
}

std::string Book::get_book_date_of_publication()
{
	return date_of_publication;
}

