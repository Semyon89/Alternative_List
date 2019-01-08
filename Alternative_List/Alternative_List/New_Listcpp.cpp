#include "New_List.h"
#define CLASS1 template <class T>

CLASS1 New_List_<T>::New_List_()
{
	*HEAD = nullptr
	*TAIL = HEAD;
	*Pointer = new New_List_;
	*prevPointer = nullptr;
	*nextPointer = nullptr;
	*TEMPLATE = new New_List_;
	SIZE = 0;
}

template <class T> void New_List_<T>::PUSH_BACK(T data)
{
	Pointer->data = data;
	Pointer->nextPointer = new New_List_;
	if (Pointer->prevPointer == nullptr)
		HEAD = Pointer;
	Pointer->prevPointer = Pointer;
	SIZE++;
	TAIL = Pointer;
	Pointer = Pointer->nextPointer;
}

CLASS1 void New_List_<T> ::PUSH_FRONT(T data)
{	
	TEMPLATE->data = data;
	TEMPLATE->nextPointer = HEAD;
	TEMPLATE->prevPointer = nullptr;
	SIZE++;
	HEAD = TEMPLATE;
	TEMPLATE = TEMPLATE->nextPointer = new New_List_;
}

template <class T> void New_List_<T>::POP_BACK()
{
	if (TAIL == nullptr)
		std::cerr << "List is empty!";
	delete Pointer->nextPointer;
	Pointer = Pointer->prevPointer;
	Pointer->nextPointer = nullptr;
	TAIL = Pointer;
	SIZE--;
}

CLASS1 void New_List_<T>::POP_FRONT()
{
	if (!HEAD)
		std::cerr << "List is empty";
	HEAD = HEAD->nextPointer;
	delete HEAD->prevPointer;
	HEAD->prevPointer = nullptr;
	SIZE--;
}

template <class T> int New_List_<T>::SIZE()
{
	return SIZE;
}

template<class T>bool New_List_<T>::EMPTY()
{
	return HEAD == nullptr;
}
