#include "List.h"
#include "Node.h"

List::List()
{
	head = NULL;
}

void List::insert(int value)
{
	Node* temp = new Node;
	temp->Set_Data(value);
	temp->Set_Next(NULL);

	if (temp != NULL)
	{
		temp->Set_Next(head);
	}
	head = temp;
}

void List::ascending_sort()
{
	Node* p = head;
	Node* q;

	if (head == NULL)
	{
		return;
	}
	cout << "ASCENDING SORT" << endl;
	while (p != NULL)
	{
		q = p->Get_Next();

		while (q != NULL)
		{
			if (q->Get_Data() < p->Get_Data())
			{
				int temp = q->Get_Data();
				q->Set_Data(p->Get_Data());
				p->Set_Data(temp);
			}
			q = q->Get_Next();
		}
		p = p->Get_Next();
	}
	
}

void List::display()
{
	Node* current = head;
	cout << "The values in stack are: " << endl;
	while (current != NULL)
	{
		cout << current->Get_Data() << " ";
		current = current->Get_Next();
	}
	cout << endl;
}