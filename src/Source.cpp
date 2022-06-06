#include <iostream>
#include "List.h"
#include <vector>

int main()
{
	List<int> list;
	list.pushBack(10);
	list.pushBack(14);
	list.pushBack(16);
    list.insert(20, 0);
	list.remove(2);

	list.print();

    std::cin.get();
}
