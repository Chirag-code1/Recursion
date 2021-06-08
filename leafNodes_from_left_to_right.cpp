
#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *left, *right;
};


void printLeafNodes(Node *root)
{
	// if node is null, return
	if (!root)
		return;
	
	// if node is leaf node, print its data
	if (!root->left && !root->right)
	{
		cout << root->data << " ";
		return;
	}

	// if left child exists, check for leaf
	// recursively
	if (root->left)
	printLeafNodes(root->left);
		
	// if right child exists, check for leaf
	// recursively
	if (root->right)
	printLeafNodes(root->right);
}


Node* newNode(int data)
{
	Node *temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}


int main()
{

	Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->right->left = newNode(5);
	root->right->right = newNode(8);
	root->right->left->left = newNode(6);
	root->right->left->right = newNode(7);
	root->right->right->left = newNode(9);
	root->right->right->right = newNode(10);

	// print leaf nodes of the given tree
	printLeafNodes(root);
	
	return 0;

}
