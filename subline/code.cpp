#include<bits/stdc++.h>
using namespace std;
#define int long long


/*----------------------Graph Moves----------------*/
int dx[4] = {+1, -1, +0, +0};
int dy[4] = {+0, +0, +1, -1};
// int dx[8]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
// int dy[8]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
// int dx[8]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//  int dy[8]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/
const int MOD = 1e9 + 7;
// unsigned int NO_OF_BITS= sizeof(n) * 8;



int count(int x){
  int ans=0;
  while(x>0){
    ans++;
    x=x/10;

  }
  return ans;
}
int pow1(int x,int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return x;
    }
    
     if(n%2==0){
         
        int t=pow1(x,n/2);
         return t*t;
     }else{
         int t=pow1(x,n/2);
         return x*t*t;
     }
    
    
}

void fuck(){
int n,d,s;
cin>>n>>d>>s;
// cout<<(count(10));
    int nt=count(n);
    int st=count(s);
    // cout<<nt<<"  "<<st<<endl;
    
    
    int nx=n;
    vector<int>v;
    int last=0;
    int cnt= st;
    int sd=1;
    while(nx>0){
        v.push_back(nx%10);
        
        if(cnt>0){
            
        last+=(nx%10)*sd;
        sd=sd*10;}
        cnt--;
        nx=nx/10;
    }
    // cout<<last<<endl;
    // put(last,st);
  
    int ans=0;
    
    if(last>=s){
    int ans2=1;
    int sz=v.size();
    
    for(int i=st;i<sz;i++){
        int y=0;
        if(i==sz-1){
                    y=min(d,v[i]);
        }else{

        y=min(d+1,v[i]+1);}
        ans2=ans2*y;
        
    }
    ans+=ans2;
    }
    // cout<<ans<<endl;
    // cout<<nt<<st<<endl;
    
    
    for(int i=1;i<=nt-1;i++){
        if(i-st>0){
            
            int x=i-st;
            // cout<<x<<endl;
            
            int y=1;
            if(x-1>=0){
            y=pow1(d+1,x-1);}
            y=y*d;
            ans+=y;
            // cout<<ans<<endl;
        }
        if(i-st==0){
            ans++;
        }
    }
    cout<<ans<<endl;

}
signed main()
{// ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  // #ifndef ONLINE_JUDGE
  //freopen("input.txt","r", stdin);
  //freopen("output.txt","w", stdout);
  // #endif
  int T;
  // int t;
  cin>>T;
  // t = T;
  while (T--)
  {
     
      
      fuck(); }
  // cout<<fixed<<setprecision(10);
  // cerr<<"Time:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<" ms\n";
  return 0;}