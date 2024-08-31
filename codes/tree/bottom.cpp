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

 vector<int> verticalOrder(node *root)
    {vector<int>res;
        map<int,deque<int>>mp;
        queue<pair<node*,int>>q;
       q.push({root,0});
       q.push({NULL,0});

while (!q.empty())
{
    auto p=q.front();
    q.pop();
   node*curr= p.first;
 int hd= p.second;
 if(curr!=NULL){
    mp[hd].push_back(curr->data);
    if(curr->left!=NULL){
        q.push({curr->left,hd-1});
    }
    if(curr->right!=NULL){
        q.push({curr->right,hd+1});
    }
 }
 else{
    if(!q.empty()){
        q.push({NULL,0});
    }
 }

}
 for (auto it = mp.begin(); it != mp.end(); it++) {

            res.push_back(it->second.back() );
       
    }

    return res;




    }
int main(){

return 0;
}