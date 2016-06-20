/*
 * Stack.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Stack.h"

void Stack::push(Element* element)
{
	//TODO: Implement this method.
	if (_last == NULL)
	{
		_last = element;
	}
	else
	{
		element->_next = _last;
		_last = element;
	}
}

Element* Stack::pop()
{
	//TODO: Implement this method.
	if (_last == NULL) {
		return NULL;
	}
	Element* e = _last;
	_last = e->_next;
	return e;
}

Stack::Stack(): _last(NULL)
{

}

