#include<bits/stdc++.h>

using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	priority_queue <int, vector<int>, greater<int>> mp;
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	
	for (int i = 0; i < n; i++)
	{
		/* code */mp.push(a[i]);
	}

	int ans=0;

	while (mp.size()<=1)
	{
		/* code */int e1=mp.top();
		mp.pop();
		int e2=mp.top();
		mp.pop();
		ans=ans+e1+
		e2;
		mp.push(e1+e2);

	}
	
	
	
	
	


return 0;
}