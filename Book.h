#pragma once
#include <string>


class Book
{
public:
	Book();
	Book(std::string title, std::string author, int year, const char* ISBN);
	Book(const Book& obj);
	~Book();

	std::string get_title();
	std::string get_author();
	int get_year();
	const char* get_ISBN();

	void print_info();
private:
	std::string _title{}, _author{};
	int _year{};
	char* _ISBN{};
};