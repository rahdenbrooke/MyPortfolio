from classes_project1 import *

if __name__ == "__main__":

	# ADDING authors, books, and patrons

	# creating authors
	# Author(self, name, nationality)
	author1 = Author("Jane Austen", "British")
	author2 = Author("Mark Twain", "American")

	# creating books
	# Book(self, title, author, genre, available (default true))
	book1 = Book("Pride and Prejudice", author1, "Romance")
	book2 = Book("Adventures of Hucklberry Finn", author2, "Adventure")
	book3 = Book("Emma", author1, "Romance")

	# creating library (adding the books)
	# using add_book method
	library = Library()
	library.add_book(book1)
	library.add_book(book2)
	library.add_book(book3)

	# creating patrons
	patron1 = Patron("Alice Johnson", "alice@gmail.com")
	patron2 = Patron("Brooke Rahden", "brooke@gmail.com")

	# register patrons (library class)
	library.register_patron(patron1)
	library.register_patron(patron2)
	print()


	# RETURNING/BORROWING books, printing info

	# listing all available books
	library.list_books()
	print()

	# patron1 borrows book1 and book2
	patron1.borrow_book(book1)
	patron1.borrow_book(book2)
	print()

	# listing books availability again
	library.list_books()
	print()

	# patron2 tries to borrow book1
	patron2.borrow_book(book1)
	print()

	# patron1 returns book1
	patron1.return_book(book1)
	print()

	# listing books again
	library.list_books()
	print()

	# patron info
	print(patron1)
	print(patron2)
