#pragma once
#include "New_List.h"

 class Iterator : public template <class T> New_List_<T>
{
	Iterator() {}
	Iterator* operator=(New_List_*);
	Iterator* operator++();
	bool operator!=(New_List_*);
	friend std::ostream& operator<<(std::ostream&, const Iterator&);
	bool operator==(New_List_*);
};