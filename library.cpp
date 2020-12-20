#include "a5_library.h"

Library::Library() {} //Default parametric constructor

Library::Library(std::vector<Book> my_books) : library_books(my_books) { //Explicit constructor for library objects
	 
} 


void Library::print() {

	for (int i = 0; i < library_books.size(); i++) { 
		std::cout << "Book Index: " << i << "\n";
		library_books[i].print();
	}
}

bool Library::add_book(std::string new_title, std::string new_author, std::string new_date_of_publication)
{
	for (int i = 0; i < library_books.size(); ++i) { //Compares the inputted attributes to the pre-existing Book object attributes
		if (new_title == library_books[i].get_book_title() && new_author == library_books[i].get_book_author()
			&& new_date_of_publication == library_books[i].get_book_date_of_publication()) { 
			return false;
		}
	}
	Book new_book(new_title, new_author, new_date_of_publication);
	library_books.push_back(new_book); //Adds the object to the end of the Library vector
	return true;
}

bool Library::add_book(Book book_test) //Same as the previous method, but checks book object instead of individual attributes
{
	for (int i = 0; i < library_books.size(); ++i) {
		if (book_test.get_book_title() == library_books[i].get_book_title() && book_test.get_book_author() == library_books[i].get_book_author()
			&& book_test.get_book_date_of_publication() == library_books[i].get_book_date_of_publication()) {
			return false;
		}
	}
	library_books.push_back(book_test);
	return true;
}

bool Library::remove_book(std::string removing_title, std::string removing_author, std::string removing_dop)
{
	for (int index = 0; index < library_books.size(); ++index) { //Checks for matching attributes, and removes the object if they are matching
		if ( removing_title == library_books[index].get_book_title() && removing_author == library_books[index].get_book_author()
			&& removing_dop == library_books[index].get_book_date_of_publication()) {
			library_books.erase(library_books.begin() + index);
			return true;
		}
	}
	return false;
}

bool Library::remove_book(Book removed_book) //Same as above method, but compares objects instead of attributes
{
	for (int index = 0; index < library_books.size(); ++index) { 
		if (removed_book.get_book_title() == library_books[index].get_book_title() && removed_book.get_book_author() == library_books[index].get_book_author()
			&& removed_book.get_book_date_of_publication() == library_books[index].get_book_date_of_publication()) {
			library_books.erase(library_books.begin() + index);
			return true;
		}
	}
	return false;
}
