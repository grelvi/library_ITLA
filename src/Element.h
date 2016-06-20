/*
 * Element.h
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */
#ifndef ELEMENT_H_
#define ELEMENT_H_
#include <string>
class Element
{
private:
	std::string _title;
	std::string _author;
	std::string _publisher;
	std::string _date;
	std::string _category;
	Element* _next;

public:
	Element(std::string title, std::string author, std::string publisher, std::string date, std::string category);
	std::string getTitle() { return _title; }
	std::string getAuthor() { return _author; }
	std::string getPublisher() { return _publisher; }
	std::string getDate() { return _date; }
	std::string getCategory() { return _category; }
	//This means that Stack can access directly to Element's private members
	friend class Stack;
};

#endif /* ELEMENT_H_ */
