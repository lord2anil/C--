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
vector<int> level(Node*root){
    vector<int>result;
    deque<int>ans;

    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    // bool p=1;
    while (!q.empty())
    {
        Node*n=q.front();
        q.pop();
        if(n!=NULL){
            ans.push_back(n->data);
            if(n->left!=NULL){
                q.push(n->left);

            }
            if(n->right!=NULL){
                q.push(n->right);

            }
       
       

       
        
        }
        else{
            result.push_back(ans.front())
            //  if(p){
            //     for(auto i:ans){
            //         result.push_back(i);

            //     }
            //     ans.clear();
            //     p=p^1;
            //  }else{
            //     reverse(ans.begin(), ans.end());
            //     for(auto i:ans){
            //         result.push_back(i);

            //     }
            //     ans.clear();
            //     p=p^1;
                
            //  }
            if(!q.empty()){
                q.push(NULL);
            }
        }
    }
    return result;
    




}
int main(){

return 0;
}