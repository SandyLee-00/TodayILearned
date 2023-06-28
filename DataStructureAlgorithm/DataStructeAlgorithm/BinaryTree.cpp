#pragma once

#include <iostream>

using namespace std;

class TreeNode
{
public:
	int data_;
	TreeNode* left_;
	TreeNode* right_;
	TreeNode(int data)
	{
		data_ = data;
		left_ = NULL;
		right_ = NULL;
	}
};

TreeNode* insert(TreeNode* node, int data)
{
	if (node == NULL)
	{
		// 메모리를 할당하고 새로운 노드를 만듬
		node = new TreeNode(data);
		return node;
	}
	if (node->data_ > data)
		node->left_ = insert(node->left_, data);

	if (node->data_ <= data)
		node->right_ = insert(node->right_, data);

	return node;
}

TreeNode* treeSearch(TreeNode* node, int data)
{
	while (node != NULL && data != node->data_)
	{
		if (data < node->data_)
		{
			cout << "Go left " << node->data_ << endl;
			node = node->left_;
		}
		else
		{
			cout << "Go right " << node->data_ << endl;
			node = node->right_;
		}

	}
	return node;
}
void preOrder(TreeNode* node, char h)
{
	if (node != NULL)
	{
		cout << h << " " << node->data_ << endl;
		preOrder(node->left_, 'L');
		preOrder(node->right_, 'R');
	}
}

void inOrder(TreeNode* node)
{
	if (node != NULL)
	{
		inOrder(node->left_);
		cout << node->data_ << endl;
		inOrder(node->right_);
	}
}
