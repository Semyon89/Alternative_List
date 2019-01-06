#pragma once
template<class T>class New_List_
{
protected:
	New_List_ *prevPointer, *HEAD, *nextPointer, *TAIL;
	T *data = nullptr;
public:
	New_List_();
	void PUSH_BACK(T*);
	void POP_BACK(T);
	void PUSH_FRONT(T);
	void POP_FRONT(T);

};