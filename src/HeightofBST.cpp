/*

1)Given a BST ,Find its Maximum Height 

Height of a NULL BST is 0

Height of a BST which has only one node is 1

Ex Input : 

    10 
    /\
   5 80
  /  /
 2  50
  \
   4

Height of above Tree is 4

Ex Output : Return the Height of the Tree , -1 if Invalid

2) Get Sum of Left subtree gets the sum of all nodes ,in the left subtree of the given node
Ex : get_sum_left for 10 in above Tree ,returns 11
get_sum_left for 80 returns 0
Return -1 for invalid inputs

3) Get Sum of Left subtree gets the sum of all nodes ,in the left subtree of the given node
Ex : get_sum_left for 10 in above Tree ,returns 130
get_sum_left for 80 returns 0
Return -1 for invalid inputs

*/
#include <stdlib.h>
#include <stdio.h>
int height(struct node *);
int lsum(struct node *);
int rsum(struct node *);
int ls, rs;
struct node{
	struct node * left;
	int data;
	struct node *right;
};


int get_height(struct node *root){
	if (root == NULL)
		return -1;
	return height(root);
}
int height(struct node *root)
{
	int l, r;
	if (root == NULL)
		return 0;
	else
	{
		l = height(root->left);
		r = height(root->right);
		if (l >= r)
			return l + 1;
		else
			return r + 1;

	}
}


int get_left_subtree_sum(struct node *root){
	if (root == NULL)
		return -1;
	return lsum(root->left);
}
int lsum(struct node *root)
{
	if (root == NULL)
		return ls;
	ls += lsum(root->left);
	ls += lsum(root->right);
	return ls;
	

}

int get_right_subtree_sum(struct node *root){
	if (root == NULL)
		return -1;
	return rsum(root->right);
}
int rsum(struct node *root)
{
	if (root == NULL)
		return rs;
	rs += rsum(root->left);
	rs += rsum(root->right);
	return rs;

}

