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
// int calheight(Node*root){
// 	if (root==NULL)
// 	{
// 		/* code */return 0;
// 	}
	

// return max(calheight(root->left),calheight(root->right))+1;

// }

// int dia(Node*root){
// if (root==NULL)
// {
// 	/* code */return 0;
// }
// int lheight=calheight(root->left);
// int rheight=calheight(root->right);
// int tot=lheight+rheight+1;
// return max(tot,max(lheight,rheight));

// }
int dia(struct Node* root, int* height)
{
    // lh --> Height of left subtree
    // rh --> Height of right subtree
    int lh = 0, rh = 0;
  
    // ldiameter  --> diameter of left subtree
    // rdiameter  --> Diameter of right subtree
    int ldiameter = 0, rdiameter = 0;
  
    if (root == NULL) {
        *height = 0;
        return 0; // diameter is also 0
    }
  
    // Get the heights of left and right subtrees in lh and
    // rh And store the returned values in ldiameter and
    // ldiameter
    ldiameter = dia(root->left, &lh);
    rdiameter = dia(root->right, &rh);
  
    // Height of current Node is max of heights of left and
    // right subtrees plus 1
    *height = max(lh, rh) + 1;
  
    return max(lh + rh , max(ldiameter, rdiameter))+1;
}


int main(){
struct Node*st=new Node(1);
st->left=new Node(2);
st->right =new Node(3);
st->left->left=new Node(5);
st->left->right=new Node(7);
st->right->right =new Node(9);
st->right->left =new Node(10);
Node*root=st;
int height=0;
cout<<dia(root,&height);
return 0;


}