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
	int arr[10] = { 10, 5, 7, 12, 15 }, i, *m;
	struct node *root = NULL;
	for ( i = 0; i <10;i++)
	{
		
		root = add(root,arr[i]);

	}
	
	/*root->right = newNode(200);
	root->right->right = newNode(300);
	root->right->right->right = newNode(400);
	root->right->right->right->right = newNode(500);*/
	/*int ans[3][5] = {
		{ 2, 5, 7, 10, 12 },
		{ 5, 2, 10, 7, 12 },
		{ 2, 7, 12, 10, 5 }
	};
	int results[3][10];
	inorder(root, results[0]);
	preorder(root, results[1]);
	postorder(root, results[2]);

	for (int i = 0; i < 3; i++)
		for (int j = 0; j <10; j++)

			
				printf("%d\t",results[i][j]);*/
	/*m = BSTRighttoLeftRows(root);
	for (i = 0; i < 5; i++)
		printf("%d\t", m[i]);*/

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
