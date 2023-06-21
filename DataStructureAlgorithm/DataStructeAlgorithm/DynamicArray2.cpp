#include <cassert>
#include <iostream>

using namespace std;

class DynamicArray2
{
private:
	int size_;
	int max_;
	int* arrayholder_;

public:
	DynamicArray2()
	{
		size_ = 0;
		max_ = 5;
		arrayholder_ = new int[5];
	}

	~DynamicArray2()
	{
		delete[] arrayholder_;
	}

	int get(int idx)
	{
		assert(idx < size_);
		return arrayholder_[idx];
	}

	int& at(int idx)
	{
		assert(idx < size_);
		return arrayholder_[idx];
	}

	void insert(int idx, int val)
	{
		if (max_ < size_ + 1)
		{
			increaseSize();
		}

		for (int k = size_ - 1; k >= idx; k--)
		{
			arrayholder_[k + 1] = arrayholder_[k];
		}
		arrayholder_[idx] = val;

		size_++;
	}

	void append(int n)
	{
		if (max_ < size_ + 1)
		{
			increaseSize();
		}
		arrayholder_[size_] = n;
		size_++;
	}

	void show()
	{
		cout << "show array" << endl;
		for (int i = 0; i < size_; i++)
		{
			cout << get(i) << " ";
		}
		cout << endl;
	}

private:
	void increaseSize()
	{
		max_ *= 2;
		int* temp_ = new int[max_];
		for (int i = 0; i < size_; i++)
		{
			temp_[i] = arrayholder_[i];
		}
		delete[] arrayholder_;
		arrayholder_ = temp_;
	}

public:
	void prepend(int val)
	{
		insert(0, val);
	}

};