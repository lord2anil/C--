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

struct node{
    int data;
    node*left;
    node*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;

    }
};
int search(int in[],int start,int end,int curr){
    for (int i = start; i <=end; i++)
    {
       if(in[i]==curr){

        return i;
       }
    }
    
 }

node*bulidtree(int post[],int in[],int start,int end){
    if(start>end){
        return NULL;
    }
    static int idx=4;
    int curr=post[idx];
    idx--;
    node*n=new node(curr);
    if(start==end){
        return n;
    }
    int pos=search(in,start,end,curr);
    n->right=bulidtree(post,in,pos+1,end);
    n->left=bulidtree(post,in,start,pos-1);
return  n;

}



void in_print(node*root){
    if(root==NULL){
        return;
    }
    in_print(root->left);
    cout<<root->data<<" ";
    in_print(root->right);
}

int main(){
int post[]={4,2,5,3,1};
int in[]={4,2,1,5,3};
node*root=bulidtree(post,in,0,4);
in_print(root);

return 0;
}