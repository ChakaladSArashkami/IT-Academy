#include "Book.h"
#include <iostream>


Book::Book() :_title(""), _author(""), _year(0), _ISBN(nullptr)
{
	std::cout << "Base constructor!" << std::endl;
}

Book::Book(std::string title, std::string author, int year, const char* isbn):_title(title), _author(author), _year(year)
{
	if (isbn!=nullptr)
	{
		size_t len = std::strlen(isbn) + 1;
		_ISBN = new char[len];
		strcpy_s(_ISBN, len, isbn);
	}
	else
	{
		_ISBN = nullptr;
	}
	std::cout << "Constructor with parameters!" << std::endl;
}

Book::Book(const Book& obj):_title(obj._title), _author(obj._author), _year(obj._year)
{
	if (obj._ISBN!=nullptr)
	{
		size_t len = std::strlen(obj._ISBN) + 1;
		_ISBN = new char[len];
		strcpy_s(_ISBN, len, obj._ISBN);
	}
	else
	{
		_ISBN = nullptr;
	}
	std::cout << "Copy constructor!" << std::endl;
}

Book::~Book()
{
	delete[] _ISBN;
	std::cout<< "Destructor!" << std::endl;
}



std::string Book::get_title()
{
	return _title;
}

std::string Book::get_author()
{
	return _author;
}

int Book::get_year()
{
	return _year;
}

const char* Book::get_ISBN()
{
	return _ISBN == nullptr ? "Empty" : _ISBN;
}



void Book::print_info()
{
	std::cout << "Title: " << _title << std::endl
			  << "Author: " << _author << std::endl
			  << "Year: " << _year << std::endl
			  << "ISBN: " << (_ISBN == nullptr ? "Empty" : _ISBN) << std::endl;
}
