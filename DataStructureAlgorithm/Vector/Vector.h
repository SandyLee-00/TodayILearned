#pragma once
// Non-STL Version-----

// template <typename T> class Vector
// {
// public:
// 	Vector();
// 	~Vector();
// 
// private:
// 	T* arr;
// 	int capacity;
// 	int current;
// 
// public:
// 	void Push(T data);
// 	void Push(T data, int index);
// 	T Get(int index);
// 	void Pop();
// 	int Size();
// 	int GetCapacity() { return capacity; }
// 	void Print();
//  };

// Non-STL Version-----

// STL Version-----

#include <memory>

template<class T, class Allocator = std::allocator<T>> 
class Vector
{
public:
	Vector();
	~Vector();
	operator =();
	assign();
	assign_range();
	get_allocator();

// Element access
public:
	at();
	operator[];
	front();
	back();
	data();

// Iterators 
public:
	begin();
	end();
	rbegin();
	rend();

// Capacity
public:
	empty();
	size();
	max_size();
	reserve();
	capacity();
	shrink_to_fit();

// Modifiers
public:
	clear();
	insert();
	insert_range();
	emplace();
	erase();
	push_back();
	emplace_back();
	append_range();
	pop_back();
	resize();
	swap();

// STL Version-----
};
