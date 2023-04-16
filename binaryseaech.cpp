#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <array>
using namespace std;
using std ::max;
using std ::min;

using std::array;
#include <algorithm>
#include <functional>
#define ll long long int
// typedef long long int ll;
// typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<int, int> mpii;
typedef set<int> seti;
typedef multiset<int> mseti;
typedef tuple<int, int, int> State;

// template <class T>  inline void chmax(T &x,T &y) {if(x < y) swap(x,y);}
// template <class T>  inline void chmin(T &x,T &y) {if(x > y) swap(x,y);}

/*----------------------Graph Moves----------------*/
// const int fx[]={+1,-1,+0,+0};
// const int fy[]={+0,+0,+1,-1};
// const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
// const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
// const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
// const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

const int MOD = 1e9 + 7;
const double EPS = 10e-10;

int Search(int a[],int b,int c,int x){
   while(b<=c)  {  
    if (a[b+(c-b)/2]==x)
    {
        return b+(c-b)/2;
    }
if (/* condition */x>a[b+(c-b)/2])
{
    /* code */return Search(a,b+1+(c-b)/2,c,x);
}
if (/* condition */x<a[b+(c-b)/2])
{
    /* code */return Search(a,b,b-1+(c-b)/2,x);
}
   }
return -1;

    
}


int main()
{

    // ll T;
    // cin >> T;
    // while (T--)
    // {
      
       
       
    // }

    int n=6;
    int a[n]={1,2,4,6,8,3};
    // sort(a,a+n);
    cout<<Search(a,0,5,9);


    return 0;
}
