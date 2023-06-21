#include <iostream>
#include "DynamicArray.cpp"
#include "DynamicArray2.cpp"
#include "DoublyLinkedList.cpp"

using namespace std;

int main()
{
// Dynamic array test code

// 	DynamicArray darr;
// 	for (int i = 0; i < 15; i++)
// 	{
// 		darr.add(i);
// 	}
// 
// 	for (int i = 0; i < 15; i++)
// 	{
// 		cout << darr.get(i) << endl;
// 	}
// 	cout << endl;
// 
// 	DynamicArray2 darr2;
// 
// 	for (int i = 0; i < 15; i++)
// 	{
// 		darr2.prepend(i);
// 	}
// 
// 	for (int i = 0; i < 15; i++)
// 	{
// 		darr2.insert(i*2 + 1, i);
// 	}
// 
// 	for (int i = 0; i < 30; i++)
// 	{
// 		cout << darr2.get(i) << endl;
// 	}
// 
// 	cout << endl;

// Doubly linked list test code

	DoublyLinkedList dll;
	dll.append(1);
	dll.append(2);
	dll.resetIterator();
	dll.append(3);

	dll.show();

	return 0;
}

