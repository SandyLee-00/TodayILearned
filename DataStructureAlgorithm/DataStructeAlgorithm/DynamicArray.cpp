#include <assert.h>
#include <iostream>

class DynamicArray
{
private:
	int idx_;
	int max_;
	int* arrayholder_;

public:
	DynamicArray()
	{
		idx_ = 0;
		max_ = 5;
		arrayholder_ = new int[5];
	}

	~DynamicArray()
	{
		delete[] arrayholder_;
	}

	int& get(int i)
	{
		assert(i < idx_);
		return arrayholder_[i];
	}

	void add(int n)
	{
		if (max_ < idx_ + 1)
		{
			max_ *= 2;
			int* temp_ = new int[max_];
			for (int i = 0; i < idx_; i++)
			{
				temp_[i] = arrayholder_[i];
			}
			delete[] arrayholder_;
			arrayholder_ = temp_;
		}
		arrayholder_[idx_] = n;
		idx_++;
	}
};
