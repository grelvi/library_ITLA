/*
 * Menu.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Menu.h"
#include <iostream>

using namespace std;


void Menu::show()
{
	//TODO: Implement this method.
	int option;
	do
	{
		clearScreen();
		cout << "Library ITLA" << endl;
		cout << "1- List books" << endl;
		cout << "2- Add book" << endl;
		cout << "3- Get the last book" << endl;
		cout << "4- Get books by category" << endl;
		cout << "5- Exit" << endl;
		cout << "Select an option => ";
		cin >> option;
		if (validate(option))
		{
			routeAction(option);
		}
	} while (option != 5);
}

Menu::Menu()
{

}
void Menu::clearScreen()
{
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}

void Menu::pause()
{
#ifdef _WIN32
	system("pause");
#else
	system("read -n1 -r -p \"Press any key to continue...\" key");
#endif
}

void Menu::routeAction(int option)
{
	switch (option)
	{
	case 1:
		getAllBooks();
		break;
	case 2:
		addBook();
		break;
	case 3:
		getLastBook();
		break;
	case 4:
		getByCategory();
		break;
	case 5:
		cout << "Thanks for using our software, good bye!" << endl;
	}
	pause();
}

bool Menu::validate(int option)
{
	if (option >= 1 && option <= 5)
	{
		return true;
	}
	else
	{
		cout << "Please pick an option between 1 and 5" << endl;
		pause();
		return false;
	}
}

Stack* _stack = new Stack();

void Menu::getAllBooks()
{
	//TODO: Implement this
	cout << "\n********** All books **********" << endl;
	Element* e = stack->pop();
	while (e != NULL) {
		cout << "Title: " << e->getTitle() << "\tAuthor: " << e->getAuthor() <<
			"\tPublisher: " << e->getPublisher() << "\tDate: " << e->getDate() <<
			"\tCategory: " << e->getCategory() << endl;
		e = stack->pop();
	}
}

void Menu::addBook()
{
	//TODO: Implement this
	string title, author, publisher, date, category;
	cout << "********** Add a book **********" << endl;
	cout << "Type the name of the book => ";
	cin >> title;

	cout << "Type the name of the author => ";
	cin >> author;

	cout << "Type the name of the publisher => ";
	cin >> publisher;

	cout << "Type the date of the publishing => ";
	cin >> date;

	cout << "Type the category of the book => ";
	cin >> category;

	Element* e = new Element(title, author, publisher, date, category);
	stack->push(e);

	cout << "\n The book has been added." << endl;
}

void Menu::getLastBook()
{
	//TODO: Implement this
	cout << "\n********** The last book is **********" << endl;
	Element* e = stack->pop();
	if (e != NULL) {
		cout << "Title: " << e->getTitle() << "\tAuthor: " << e->getAuthor() <<
			"\tPublisher: " << e->getPublisher() << "\tDate: " << e->getDate() <<
			"\tCategory: " << e->getCategory() << endl;
	}
}

void Menu::getByCategory()
{
	//TODO: Implement this
}