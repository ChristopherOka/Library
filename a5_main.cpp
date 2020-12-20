#include "a5_library.h"
#include "a5_book.h"

void test_constructors() {
	//Construct objects
	Book book1("Hello", "World", "Testing");
	Book book2("Harry Potter", "J.K. Rowling", "1998");
	Book book3("Percy Jackson", "Rick Riordan");
	Book book4("Diary of a Wimpy Kid");
	Book book5("Test", "Test", "Test");
	Book book6;
	//Vector to store the books is created
	std::vector<Book> library_books;
	//Add objects to the library vector
	library_books.push_back(book1);
	library_books.push_back(book2);
	library_books.push_back(book3);
	library_books.push_back(book4);
	library_books.push_back(book5);
	library_books.push_back(book6);
	//Create Library object with the book-storing vector as a parameter
	Library my_books(library_books);
	my_books.print(); //Prints out the index and attributes of each object in the vector
	
}

void test_insertion() { 
	//Same as above function
	Library library_books;
	Book book1("Hello", "World", "Testing");
	Book book2("Harry Potter", "J.K. Rowling", "1998");
	Book book3("Percy Jackson", "Rick Riordan");
	Book book4("Diary of a Wimpy Kid");
	Book book5("Diary of a Wimpy Kid");
	Book book6;
	
	//Runs add_book method, to check for repeats and adds them to the library vector
	library_books.add_book("Test", "Test", "Test");
	library_books.add_book("Test", "Test", "Test");
	library_books.add_book(book1);
	library_books.add_book(book2);
	library_books.add_book(book3);
	library_books.add_book(book4);
	library_books.add_book(book5);
	library_books.add_book(book6);
	library_books.print();
}

void test_removal() {

	//Same as above
	Library library_books;
	Book book1("Hello", "World", "Testing");
	Book book2("Harry Potter", "J.K. Rowling", "1998");
	Book book3("Percy Jackson", "Rick Riordan");
	Book book4("Diary of a Wimpy Kid");
	Book book5("Diary of a Wimpy Kid");
	Book book6;
	library_books.add_book("Test", "Test", "Test");
	library_books.add_book("Test", "Test", "Test");
	library_books.add_book(book1);
	library_books.add_book(book2);
	library_books.add_book(book3);
	library_books.add_book(book4);
	library_books.add_book(book5);
	library_books.add_book(book6);

	//Runs remove_book method to check if the book exists and removing it from the vector
	library_books.remove_book("Test", "Test", "Test");
	library_books.remove_book(book3);
	library_books.remove_book("This", "Shouldn't", "Work");
	library_books.remove_book("Hello", "World", "Testing");
	library_books.print();
}

void tests() { //function for running all of the test functions
	test_constructors();
	test_insertion();
	test_removal();
}
int main() {
	tests();
}
