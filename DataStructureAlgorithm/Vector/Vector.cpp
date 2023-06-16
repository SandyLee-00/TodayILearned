#include "Vector.h"

// Non-STL Version-----

// // allocating storage using dynamic allocation
// template <typename T>
// Vector<T>::Vector()
// {
// 	arr = new T[1];
// 	capacity = 1;
// 	current = 0;
// }
// 
// // deallocate storage allocated by dynamic allocation
// template <typename T>
// Vector<T>::~Vector()
// {
// 	delete[] arr;
// }
// 
// // add an element at the last
// template <typename T>
// void Vector<T>::Push(T data)
// {
// 	if (current == capacity)
// 	{
// 		T* temp = new T[2 * capacity];
// 
// 		for (int i = 0; i < capacity; i++)
// 		{
// 			temp[i] = arr[i];
// 		}
// 
// 		// double the capacity
// 		capacity *= 2;
// 		// deleting previous array
// 		delete[] arr;
// 		arr = temp;
// 	}
// 	arr[current] = data;
// 	current++;
// }
// 
// // add an element at any index
// template <typename T>
// void Vector<T>::Push(T data, int index)
// {
// 	if (index == capacity)
// 	{
// 		Push(data);
// 	}
// 	else
// 	{
// 		arr[index] = data;
// 	}
// }
// 
// // extract element at any index
// template <typename T>
// T Vector<T>::Get(int index)
// {
// 	if (index < current)
// 	{
// 		return arr[index];
// 	}
// }
// 
// template <typename T>
// void Vector<T>::Pop()
// {
// 	current--;
// }
// 
// template <typename T>
// int Vector<T>::Size()
// {
// 	return current;
// }
// 
// template <typename T>
// void Vector<T>::Print()
// {
// 	for (int i = 0; i < current; i++)
// 	{
// 		std::cout << arr[i] << " ";
// 	}
// 	std::cout << std::endl;
// }

// Non-STL Version-----

// STL Version-----



// STL Version-----









