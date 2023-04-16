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


void level(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    int x=0;
    while (/* condition */!q.empty())
    {
        node*n=q.front();
        q.pop();
        if(n!=NULL){
        cout<<n->data<<" ";
        if(n->left!=NULL){
            q.push(n->left);
        }
        if(n->right!=NULL){
            q.push(n->right);
        }
        }
        else
        {cout<<endl;
            cout <<x<<" -level"<<endl;
            x++;
            if(!q.empty()){
                q.push(NULL);
            }
        }
    }
    
}



int main(){
node*root=new node(1);
root->left=new node (2);
root->right=new node (3);
root->left->left=new node (4);
root->left->right=new node (5);
root->right->left=new node (6);
root->right->right=new node (7);
level(root);
return 0;
}