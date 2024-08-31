#include<bits/stdc++.h>

using namespace std;
struct node
{
	 int data;
	 struct node*left;
	 struct node*right;

	 node(int val){
		data=val;
		right=NULL;
		left=NULL;
	 }
	
};
void preorder(struct node*root){
	if (root==NULL)
	{
		/* code */return;
	}
	
	cout<<root->data<<" ";
	preorder(root->left);
   preorder(root->right);
}
;

int main(){
struct node*st=new node(1);
st->left=new node(2);
st->right =new node(3);
st->left->left=new node(5);
st->left->right=new node(7);
st->right->right =new node(9);
st->right->left =new node(10);
preorder(st);
return 0;


}