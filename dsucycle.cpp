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


int par[10000];
int siz[10000];



int find(int a){
    if(par[a]=a){
        return par[a];
    }
    
    return par[a]=find(par[a]);

}
void un(int a,int b){

    if(siz[b]>siz[a]){
        swap(a,b);
    }
    par[b]=a;
    siz[a]+=siz[b];
    
}








string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
   
   for (int i = 0; i <=n; i++)
   {
    par[i]=i;
    siz[i]=1;
   }
 
 for (auto i : edges)
 {
    int a=i[0];
    int b=i[1];
    a=find(a);
    b=find(b);
    if(a==b){
        return "NO";
    }
    un(a,b);

    


 }
 return "YES";
 
   
   



}




int main(){

return 0;
}