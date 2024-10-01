#include "List.h"
#include "Node.h"

int main()
{
	List li;
	li.insert(17);
	li.insert(33);
	li.insert(21);
	li.insert(9);
	li.display();
	li.ascending_sort();
	li.display();
}