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
    int data ;
    node*left;
    node*right;
    node(int val){
data=val;
left=NULL;
right=NULL;
    }

};
node*insertinbst(node*&root,int d){
    if(root==NULL){
        root=new node(d);
        return root;
    }

    if(d<root->data){
insertinbst(root->left,d);
    }
    if(d>root->data){
insertinbst(root->right,d);
    }
    return root;
}



void input(node*&root){
    int data;
    cin>>data;
    while(data!=-1){
       root= insertinbst(root,data);
        cin>>data;
    }
}


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
            cout <<"level- "<<x<<endl;
            x++;
            if(!q.empty()){
                q.push(NULL);
            }
        }
    }
    
}


int max(node*root){
    node*temp=root->right;
    while (temp->right!=NULL)
    {
       temp=temp->right;
    }
    return temp->data;
    
}
int min(node*root){
    node*temp=root->left;
    while (temp->left!=NULL)
    {
       temp=temp->left;
    }
    return temp->data;
    
}

void delete_(node*root,int d){
    if(root->data==d){

    }
}







int main(){
node*root=NULL;
input(root);
level(root);
cout<<max(root)<<endl;
cout<<min(root)<<endl;
return 0;
}