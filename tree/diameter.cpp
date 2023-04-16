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

struct node
{
    int data;
    node*left;
    node*right;
node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};

int height(node*root){
    if(root==NULL){
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}
int claculateDia(node*root){
    if(root==NULL){
        return 0;
    }
    int lheight=height(root->left);
    int Rheight=height(root->right);
    int currdia=lheight+Rheight+1;
    int ldia=claculateDia(root->left);
    int Rdia=claculateDia(root->right);
    return max(currdia,max(ldia,Rdia));


}

int dia(node*root, int * height){
    if(root==NULL){
        *height=0;
        return 0;
    }
    int lh=0;
    int rh=0;
    int lDia=dia(root->left,&lh);
    int rDia=dia(root->right,&rh);
    int currdia=lh+rh+1;
    *height=max(lh,rh)+1;
    return max(currdia,max(lDia,rDia));

}




int main(){
node*root=new node(1);
root->left=new node (2);
root->right=new node (3);
root->left->left=new node (4);
root->left->right=new node (5);
root->right->left=new node (6);
root->right->right=new node (7);
int x=0;
cout<<dia(root,&x);
return 0;
}