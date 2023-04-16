#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define N 10000
ll dp[N][N];

int coin(int arr[],int m,int x){

    if(x==0){
        return 1;
    }
    if(x<0){
        return 0;
    }
    if(m<=0){

        return 0;
    }
    if (dp[m][x]!=-1)
    {
        /* code */return dp[m][x];
    }
    dp[m][x]=coin(arr,m-1,x)+coin(arr,m,x-arr[m-1]);
    return dp[m][x];
    
}






int main(){



for (int i = 0; i < N; i++)
{
    for (int j = 0; j < N; j++)
    {
    /* code */dp[i][j]=-1;
        /* code */
    }
    
}int a[3]={1,2,3};
cout<<coin(a,3,6);

return 0;
}


// greedy
// #include<bits/stdc++.h>

// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	vector<int>v;
// 	for (int i = 0; i < n; i++)
// 	{
// 		/* code */int x;
// 		cin>>x;
// 		v.push_back(x);
// 	}
// 	int x;
// 	cin>>x;
// 	sort(v.begin(),v.end(), greater<int>());
// 	int ans=0;
// 	for (int i = 0; i < n; i++)
// 	{
// 	if(x>=v[i]){
// // 		ans+=x/a[i];
// // x-=x/a[i]*a[i];|

// 		ans=ans+x/v[i];
// 		x=x%v[i];
// 	}
// 	}
	
// cout<<ans;

// return 0;
// }