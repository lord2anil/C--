#include<bits/stdc++.h>

using namespace std;
struct Node
{
	 int data;
	 struct Node*left;
	 struct Node*right;

	 Node(int val){
		data=val;
		right=NULL;
		left=NULL;
	 }
	
};

// int height(Node*root){
// 	if (root==NULL)
// 	{
// 		/* code */return 0;
// 	}
// 	return max(height(root->left),height(root->right))+1;
	

// }
// bool isbalance(Node*root){

// 	if (root==NULL)
// 	{
// 		/* code */return 1;
// 	}
	
// 	if (isbalance(root->left)==false)
// 	{
// 		/* code */return 0;
// 	}
// 	if (isbalance(root->right)==false)
// 	{
// 		/* code */return 0;
// 	}
// 	int lh=height(root->left);
// 	int rh=height(root->right);
// 	if (abs(lh-rh)>1)
// 	{
// 		/* code */return 0;
// 	}
	
// 	return 1;
bool isbalance(Node*root,int *height){

	if (root==NULL)
	{
		/* code */return 1;
	}
	int lh=0;
	int rh=0;
	
	if (isbalance(root->left,&lh)==false)
	{
		/* code */return 0;
	}
	if (isbalance(root->right,&rh)==false)
	{
		/* code */return 0;
	}
*height=max(lh,rh)+1;
	if (abs(lh-rh)>1)
	{
		/* code */return 0;
	}
	
	return 1;
	
	
}




int main(){
struct Node*st=new Node(1);
st->left=new Node(2);
// st->right =new Node(3);
st->left->left=new Node(5);
// st->left->right=new Node(7);
// st->right->right =new Node(9);
// st->right->left =new Node(10);
Node*root=st;
int height=0;
cout<<isbalance(root,&height);

return 0;


}