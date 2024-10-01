#pragma once

#include "Node.h"
using namespace std;

class Stack
{
private:
	Node* top;

public:
	Stack();
	void push(int);
	void pop();
	void ascending_sort();
	void display();
};

