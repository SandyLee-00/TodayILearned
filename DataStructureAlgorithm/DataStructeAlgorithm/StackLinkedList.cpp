#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	char data_ = 0;
	Node* next_ = nullptr;
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

	void push(char data)
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
		char data = top_->data_;
		tmpNode = top_;
		top_ = top_->next_;
		delete tmpNode;
	}

	char peek()
	{
		if (top_ == NULL)
		{
			cout << endl << "Stack underflow";
			return -1;
		}
		return (char)top_->data_;
	}

	void display()
	{
		Node* tmpNode = top_;
		if (top_ == NULL)
		{
			cout << endl << "Stack underflow";
			return;
		}
		while (tmpNode != NULL)
		{
			cout << tmpNode->data_;
			tmpNode = tmpNode->next_;
		}

		cout << endl;
	}

	void pushFirstString(string str)
	{
		for (int i = 0; i < str.length(); i++)
		{
			push(str[i]);
		}
	}

	string isSameString(string str)
	{
		Node* tmpNode = top_;
		for (int i = str.length()-1; i >= 0; i--)
		{
			cout << str[i] << " " << tmpNode->data_ << endl;

			if (str[i] != tmpNode->data_)
			{
				return "Not same";
			}
			tmpNode = tmpNode->next_;
		}
		return "Same";
	}
};
