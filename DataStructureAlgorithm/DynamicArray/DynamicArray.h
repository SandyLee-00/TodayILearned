#pragma once
class DynamicArray
{
public:
	DynamicArray();
	~DynamicArray();

private:
	int size_;
	int max_;
	int* arrayholder_;

public:
	int& Get(int i);
	void add(int n);
	void show();


};

