#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node* left,*right;
	Node(int data)
	{
	this->data=data;
	left=right=NULL;	
	}
};
void inorder(struct Node *node)
{ 
	if(node==NULL)
	return;
	
//	inorder(node->right);
	inorder(node->left);
	cout<<node->data<<"->";
	inorder(node->right);
// inorder(node->left);
}
int main()
{
struct Node* root=new Node(1);	
root->left=new Node(12);
root->right=new Node(9);
root->left->left=new Node(5);
root->left->right=new Node(6);
cout<<"inorder traversal \n";
inorder(root);
}

