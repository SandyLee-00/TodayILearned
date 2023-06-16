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
	// 현재 배열의 크기가 최대 인덱스(max_)보다 작거나 같을 경우
	if (max_ < size_ + 1)
	{
		// 최대 인덱스(max_)를 두 배로 증가시킴
		max_ *= 2;
		// 새로운 크기의 임시 배열(temp)을 생성
		int* temp = new int[max_];
		// 기존 배열(arrayholder_)의 요소를 임시 배열(temp)로 복사
		for (int i = 0; i < size_; i++)
		{
			temp[i] = arrayholder_[i];
		}
		// 기존 배열(arrayholder_) 삭제
		delete[] arrayholder_;
		// 기존 배열(arrayholder_)을 임시 배열(temp)로 대체
		arrayholder_ = temp;
	}
	// 요소(n)를 다음 인덱스(size_)에 추가
	arrayholder_[size_] = n;
	// 배열의 크기(size_)를 1 증가
	size_++;
}

void DynamicArray::show()
{
	for (int i = 0; i < size_; i++)
	{
		std::cout << Get(i) << " ";
	}
}
