'''
Author: Brooke Rahden
Date: 02-01-2026
Course: CMP SCI 2250
Project 1 - Object Oriented Programming
'''
from datetime import datetime

class Author:
	# author constructors
	def __init__(self, name: str, nationality: str):
		self.name = name
		self.nationality = nationality

	# return a string of authors info
	def __str__(self):
		return (f"{self.name}, {self.nationality}")

	# authors description
	def describe(self):
		print(f"Author's Name: {self.name}")
		print(f"Nationality: {self.nationality}")


class Book:
	# book constructors, uses Author class and makes book default available = True
	def __init__(self, title: str, author: Author, genre: str, available: bool = True):
		self.title = title
		self.author = author
		self.genre = genre
		self.available = available
		# adding borrowed_date to track date (empty now)
		self.borrowed_date = None

	# changing avalability if the book is borrowed (True becomes False)
	def borrow(self):
		if self.available:
			self.available = False
			self.borrowed_date = datetime.now()		# starting the time
		else:
			print(f"{self.title} is not available to borrow.")

	# opposite for return book
	def return_book(self):
		if self.available == False:
			self.available = True
			if self.borrowed_date:
				borrowed_duration = (datetime.now() - self.borrowed_date).days		# finds number of days by taking now - the borrowed date
				self.borrowed_date = None 	# resets the date once returned
				print(f"{self.title} has been returned. It was borrowed for {borrowed_duration} days.")
		else: 
			print(f"{self.title} has been returned.")

	# print the title and author name
	def __str__(self):
		return (f"{self.title} by {self.author.name}")


class Patron:
	# patron constructors
	def __init__(self, name: str, email: str):
		self.name = name
		self.email = email
		# empty list for borrowed books
		self.borrowed_books = []
		
	# method for borrowing books, uses Book class
	def borrow_book(self, book: Book):
		if book.available:
			book.borrow()
			self.borrowed_books.append(book)
			print(f"{self.name} is now borrowing {book.title}")
		else:
			print(f"{book.title} is not available for borrowing.")

	# printing borrowed books
	def return_book(self, book: Book):
		if book in self.borrowed_books:
			book.return_book()
			self.borrowed_books.remove(book)
			print(f"{self.name} has returned {book.title}")
		else:
			print(f"{self.name} does not have {book.title}")

	# display patrons details
	def __str__(self):
		return(f"{self.name} has the email {self.email}")

class Library:
	# library constructors
	def __init__(self):
		self.books = []
		self.patrons = []

	# adding books to the library
	def add_book(self, book: Book):
		self.books.append(book)
		print(f"{book.title} was added to the library")

	# adding patrons to the library
	def register_patron(self, patron: Patron):
		self.patrons.append(patron)
		print(f"Patron {patron.name} has registered.")

	# listing library books
	def list_books(self):
		print("Library books:")
		for book in self.books:
			if (book.available == True):
				status = "available"
			else:
				status = "borrowed"
			print(f"{book.title} -- [{status}]")
