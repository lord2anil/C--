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
void level(Node*root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    while (/* condition */!q.empty())
    {
    int x=q.size();
   for (int i = 0; i<x; i++)
   {
    /* code */
        Node*n=q.front();
        q.pop();
   
   
        if(i==0/* i==n-1*/){
        cout<<n->data<<" ";}
        if(n->left!=NULL){
            q.push(n->left);
        }
        if(n->right!=NULL){
            q.push(n->right);
        }
        
       
            }
    }
    
}






int main(){
struct Node*st=new Node(1);
st->left=new Node(2);
st->right =new Node(3);
st->left->left=new Node(5);
st->left->right=new Node(7);
st->right->right =new Node(9);
level(st);
return 0;
}