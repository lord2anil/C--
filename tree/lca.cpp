#include<bits/stdc++.h>

using namespace std;
#include <vector>
#include <array>
using namespace std;
using std ::max;
using std ::min;
#include <set>
using std::pair;
using std::array;
#include <algorithm>
#include <functional>
#define ll long long int
Node* lca(Node* root ,int n1 ,int n2 ){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1||root->data==n2){
        return root;
    }

    Node*left=solve(root->left,n1,n2);
    Node*right=solve(root->right,n1,n2);

    if(left!=NULL&&right!=NULL){
        return root;
    }
    else if(left==NULL&&right!=NULL){
        return right;
    }
    else if(left!=NULL&&right==NULL){
        return left;
    }else{
        return NULL;
    }
}
  Node* lca(Node* root ,int n1 ,int n2 )
    {
       return solve(root,n1,n2);
    }
int main(){


return 0;
}