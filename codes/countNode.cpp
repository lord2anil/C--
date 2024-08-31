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
int count(Node*root){
static int  x=0;
if (root==NULL)
{
	/* code */return 0;
}

if (root!=NULL)
{
	/* code */x=x+root->data;
}
count(root->left);
count(root->right);
return x;

}




int main(){
struct Node*st=new Node(1);
st->left=new Node(2);
st->right =new Node(3);
st->left->left=new Node(5);
st->left->right=new Node(7);
st->right->right =new Node(9);
// st->right->left =new Node(10);
Node*root=st;
cout<<count(root);
return 0;


}