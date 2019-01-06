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
}

template <class T> void New_List_<T>::PUSH_BACK(T data)
{
	Pointer->data = data;
	Pointer->nextPointer = new New_List_;
	if (Pointer->prevPointer == nullptr)
		HEAD = Pointer;
	Pointer->prevPointer = Pointer;
	Pointer = Pointer->nextPointer;
}

CLASS1 void New_List_<T> ::POP_BACK(T data)
{	
	TEMPLATE->data = data;
	TEMPLATE->nextPointer = HEAD;
	TEMPLATE->prevPointer = nullptr;
	HEAD = TEMPLATE;
}
