#include "Stack.h"
#include "Node.h"

Stack::Stack()
{
	top = NULL;
}

void Stack::push(int value)
{
	Node* temp = new Node;
	temp->Set_Data(value);
	temp->Set_Next(NULL);

	if (temp != NULL)
	{
		temp->Set_Next(top);
	}
	top = temp;
}

void Stack::pop()
{
	if (top == NULL)
	{
		cout << "Stack Underflow!" << endl;
	}

	Node* temp = top;
	top = temp->Get_Next();
	delete temp;
}

void Stack::ascending_sort()
{
	Node* q = top;
	Node* p = top->Get_Next();

	if (top == NULL)
	{
		return;
	}
	cout << "ASCENDING SORT" << endl;
	while (p != NULL)
	{
		if (q->Get_Data() < p->Get_Data())
		{
			int temp = p->Get_Data();
			q->Set_Data(p->Get_Data());
			p->Set_Data(temp);
		}
		p = p->Get_Next();
		q = q->Get_Next();
	}
}

void Stack::display()
{
	Node* current = top;
	cout << "The values in stack are: " << endl;
	while (current != NULL)
	{
		cout << current->Get_Data() << " ";
		current = current->Get_Next();
	}
	cout << endl;
}