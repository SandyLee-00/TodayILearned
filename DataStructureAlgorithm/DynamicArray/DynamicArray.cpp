#include "DynamicArray.h"
#include <assert.h>
#include <iostream>

DynamicArray::DynamicArray()
{
	size_ = 0;
	max_ = 5;
	arrayholder_ = new int[max_];
}

DynamicArray::~DynamicArray()
{
	delete[] arrayholder_;
}

int& DynamicArray::Get(int index)
{
	assert(index < size_);
	return arrayholder_[index];
}

void DynamicArray::add(int n)
{
	// ���� �迭�� ũ�Ⱑ �ִ� �ε���(max_)���� �۰ų� ���� ���
	if (max_ < size_ + 1)
	{
		// �ִ� �ε���(max_)�� �� ��� ������Ŵ
		max_ *= 2;
		// ���ο� ũ���� �ӽ� �迭(temp)�� ����
		int* temp = new int[max_];
		// ���� �迭(arrayholder_)�� ��Ҹ� �ӽ� �迭(temp)�� ����
		for (int i = 0; i < size_; i++)
		{
			temp[i] = arrayholder_[i];
		}
		// ���� �迭(arrayholder_) ����
		delete[] arrayholder_;
		// ���� �迭(arrayholder_)�� �ӽ� �迭(temp)�� ��ü
		arrayholder_ = temp;
	}
	// ���(n)�� ���� �ε���(size_)�� �߰�
	arrayholder_[size_] = n;
	// �迭�� ũ��(size_)�� 1 ����
	size_++;
}

void DynamicArray::show()
{
	for (int i = 0; i < size_; i++)
	{
		std::cout << Get(i) << " ";
	}
}
