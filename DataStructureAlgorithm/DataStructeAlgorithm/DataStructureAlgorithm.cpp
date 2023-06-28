#pragma once

#include <iostream>
#include <string.h>
#include "BinaryTree.cpp"

using namespace std;

int main()
{

	TreeNode* root = NULL;
	root = insert(root, 150);
	insert(root, 80);
	insert(root, 200);
	insert(root, 40);
	insert(root, 160);
	insert(root, 90);
	cout << "preOrder : " << endl;
	preOrder(root, 'C');
	cout << "inOrder : " << endl;
	inOrder(root);

	cout << (treeSearch(root, 90))->data_ << endl;
	return 0;

}

