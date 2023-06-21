#include <iostream>
using namespace std;

class Node
{
public:
	int value = 0;
	Node* next = nullptr;
	Node* previous = nullptr;

	Node(int value)
	{
		this->value = value; // this 삭제하면 안됨!
		this->next = nullptr;
		this->previous = nullptr;
	}
};

class DoublyLinkedList
{
private:
	int size_;
	Node* head_ = NULL;
	Node* tail_ = NULL;
	Node* itr_ = NULL;

public:
	DoublyLinkedList()
	{
		size_ = 0;
	}

	void append(int value)
	{
		if (head_ == NULL)
		{
			head_ = new Node(value);
			tail_ = head_;
		}
		else
		{
			tail_->next = new Node(value);
			tail_->next->previous = tail_;
			tail_ = tail_->next;
		}
		size_ += 1;
	}

	void prepend(int value)
	{
		if (head_ == NULL)
		{
			head_ = new Node(value);
			tail_ = head_;
		}
		else
		{
			head_->previous = new Node(value);
			head_->previous->next = head_;
			head_ = head_->previous;
		}
		size_ += 1;
	}

	Node* iterate()
	{
		if (itr_ == NULL)
		{
			itr_ = head_;
		}
		else
		{
			itr_ = itr_->next;
		}
		return itr_;
	}

	int ptr()
	{
		return itr_->value;
	}

	void resetIterator()
	{
		tail_ = NULL;
	}

	void show()
	{
		Node* temp = head_;
		while (temp != NULL)
		{
			cout << temp->value << endl;
			temp = temp->next;
		}

	}
};


