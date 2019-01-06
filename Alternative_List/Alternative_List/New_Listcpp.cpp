#include "New_List.h"
#define CLASS1 template <class T>

CLASS1 New_List_<T>::New_List_()
{
	*HEAD = new New_List_;
	*TAIL = HEAD;
	*prevPointer = nullptr;
	*nextPointer = nullptr;
}

template <class T> void New_List_<T>::PUSH_BACK(T *data)
{
	
}
