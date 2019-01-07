#pragma once
#include <iostream>

template<class T>class New_List_
{
protected:
	New_List_ *prevPointer, *HEAD, *nextPointer, *TAIL;
	T data = nullptr;
	New_List_ *Pointer, *TEMPLATE;
	static int SIZE;
public:
	explicit New_List_();
	void PUSH_BACK(T);
	void POP_BACK();
	void PUSH_FRONT(T);
	void POP_FRONT();
	int SIZE();
};