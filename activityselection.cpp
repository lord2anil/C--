#include<bits/stdc++.h>

using namespace std;
int main(){
	int n;
	cin>>n;
	vector<vector<int>>v;
	for (int i = 0; i < n; i++)
	{int start,end;

		/* code */
		cin>>start>>end;
		v.push_back({start,end});
	};
	sort(v.begin(),v.end(),[&](vector<int>&a,vector<int>&b){
		return a[1]<b[1];
	});
	int take=1;
	int end=v[0][1];
	for (int i = 0; i < n; i++)
	{
		/* code */if (v[i][0]>=end)
		{
			/* code */take++;
			end=v[i][1];
		}
		
	}
	cout<<take;
	
	
	


return 0;
}