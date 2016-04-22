/*
This Project will seem to be little tougher than before ones .But It can be done very easily
once you completed C-Recursion Project completely .

Note : You can use the functions specified as wrapper functions ,and write new functions 
which might take more parameters .

*/


#include <stdio.h>
#include <stdlib.h>
#include "FunctionHeadersBST.h"

struct node{
	struct node * left;
	int data;
	struct node *right;
};

struct node *newNode(int key)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->data = key;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
struct node * add(struct node *,int);
int main(){

	//Use it for testing ,Creating BST etc
	int arr[10] = { 5, 2, 10, 7, 12 }, i,a[10];
	struct node *root = NULL;
	for ( i = 0; i <5;i++)
	{
		
		root = add(root,arr[i]);

	}
	
	/*root->right = newNode(200);
	root->right->right = newNode(300);
	root->right->right->right = newNode(400);
	root->right->right->right->right = newNode(500);*/
	 inorder(root,a);
	 preorder(root, a);
	 postorder(root, a);
	/*for (i = 0; i < 5; i++)
		printf("%d\t", a[i]);*/
}
struct node * add(struct node *root, int data)
{
	if (root == NULL)
		return newNode(data);
	if (data <= root->data)
		root->left = add(root->left, data);
	else
		root->right = add(root->right, data);
	return root;
}
