#include <iostream>
using namespace std;

class Node
{
public:
	int data_;
	Node* next_;
};

class Queue
{
private:
	Node* front_;
	Node* rear_;
public:
	Queue()
	{
		front_ = rear_ = NULL;
	}

	~Queue() 
	{
		Node* tmpNode = front_;
		cout << "Delete : " << endl;
		while (tmpNode != NULL)
		{
			cout << front_->data_ << "  ";
			front_ = front_->next_;
			delete tmpNode;
			tmpNode = front_;
		}
		cout << endl;
	}

	void enQueue(int data)
	{
		Node* newNode = new Node();
		newNode->data_ = data;
		newNode->next_ = NULL;
		if (front_ == NULL)
		{
			front_ = rear_ = newNode;
		}
		else
		{
			rear_->next_ = newNode;
			rear_ = newNode;
		}
		cout << data << " Element inserted" << endl;
	}
	void deQueue()
	{
		if (front_ == NULL)
		{
			cout << "Queue underflow" << endl;
			return;
		}
		Node* tmpNode = front_;
		if (front_ == rear_)
			front_ = rear_ = NULL;
		else
			front_ = front_->next_;
		cout << tmpNode->data_ << " Element deleted" << endl;
		delete tmpNode;
	}

	void display()
	{
		if (front_ == NULL)
		{
			cout << "Queue underflow" << endl;
		}
		Node* tmpNode = front_;
		while (tmpNode != NULL)
		{
			cout << tmpNode->data_ << "  ";
			tmpNode = tmpNode->next_;
		}
		cout << endl;
	}
};
