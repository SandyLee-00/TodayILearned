#include <iostream>
using namespace std;

class Node
{
public:
	int data_;
	Node* next_;
};
class Stack
{
private:
	Node* top_;
public:
	Stack()
	{
		top_ = NULL;
	}
	~Stack()
	{
		// Delete memory
		Node* tmpNode = top_;
		cout << "Delete : " << endl;
		while (tmpNode != NULL)
		{
			cout << top_->data_ << "  ";
			top_ = top_->next_;
			delete tmpNode;
			tmpNode = top_;
		}
		cout << endl;
	}

	void push(int data)
	{
		Node* newNode = new Node();
		newNode->data_ = data;
		if (top_ == NULL)
		{
			newNode->next_ = NULL;
		}
		else
		{
			newNode->next_ = top_;
		}
		top_ = newNode;
	}
	void pop()
	{
		Node* tmpNode;
		if (top_ == NULL)
		{
			cout << "Stack underflow" << endl;
			return;
		}
		int data = top_->data_;
		tmpNode = top_;
		top_ = top_->next_;
		delete tmpNode;
	}

	int peek()
	{
		if (top_ == NULL)
		{
			cout << endl << "Stack underflow";
			return -1;
		}
		return top_->data_;
	}
	void display()
	{
		Node* tmpNode = top_;
		if (top_ == NULL)
		{
			cout << endl << "Stack underflow";
		}
		else
		{
			while (tmpNode != NULL)
			{
				cout << tmpNode->data_ << "  ";
				tmpNode = tmpNode->next_;
			}
		}
		cout << endl;
	}
};
