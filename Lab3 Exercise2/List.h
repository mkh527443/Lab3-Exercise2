#pragma once

#include "Node.h"
using namespace std;

class List
{
private:
	Node* head;

public:
	List();
	void insert(int);
	void ascending_sort();
	void display();
};

