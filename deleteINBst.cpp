#include<bits/stdc++.h>

using namespace std;
struct Node
{
   int data;
   Node*left,*right;

   Node(int val){
       data=val;
       left=NULL;
       right=NULL;
   }
};
Node*insertBST(Node*root,int val){

    if (root==NULL)
    {
        /* code */return new Node(val);
    }
    
    if (root->data>val)
    {
        /* code */root->left=insertBST(root->left,val);
    }
    if (root->data<val)
    {
        /* code */root->right=insertBST(root->right,val);
    }
    return root;
    
}




int main(){
    Node*root=NULL;
    root=insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    
    insertBST(root,7);
   

return 0;
}