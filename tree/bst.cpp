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

bool check(Node*root,int *height){
if(root==NULL){
    *height=0;
    return 1;
}

int lh=0;
int rh=0;

if(check(root->right,&rh)==0){
    return 0;
}
if(check(root->left,&lh)==0){
    return 0;
}

*height=max(rh,lh)+1;
if(abs(rh-lh)<=1){
    return 1;
}else{
    return 0;
}
}


int main(){
struct Node*st=new Node(1);
st->left=new Node(2);
// st->right =new Node(3);
st->left->left=new Node(5);
// st->left->right=new Node(7);
// st->right->right =new Node(9);
int x=0;
cout<<check(st,&x);
return 0;
}