#include "New_List.h"
#define CLASS1 template <class T>

CLASS1 New_List_<T>::New_List_()
{
	*HEAD = new T;
	*TAIL = HEAD;
	*prevPointer = nullptr;
	*nextPointer = nullptr;
}

template <class T> void New_List_<T>::PUSH_BACK(T *data)
{
	
}
