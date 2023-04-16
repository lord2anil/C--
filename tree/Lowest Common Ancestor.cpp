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
struct Node{
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int main(){

struct Node*st=new Node(1);
st->left=new Node(2);
st->right =new Node(3);
st->left->left=new Node(5);
st->left->right=new Node(7);
st->right->right =new Node(9);
return 0;
}