/*
 * Menu.h
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#ifndef MENU_H_
#define MENU_H_

class Menu
{
private:
	void clearScreen();
	void getByCategory();
	void pause();
	void routeAction(int option);
	bool validate(int option);
	void getAllBooks();
	void getLastBook();
	void addBook();
	public:
		void show();
		Menu();
};

#endif /* MENU_H_ */
