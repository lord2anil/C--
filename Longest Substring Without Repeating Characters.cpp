class Solution {
public:
    int lengthOfLongestSubstring(string s) {
		int a[256]={0};
		int n=s.size();
		int x,y;
		int l=0;
		int r=0;
		int ans=0;
		while(r<n){
			a[s[r]]++;
			
				while (a[s[r]]>1)
				{
                    a[s[l]]--;
					/* code */l++;
				}
				
			
			

// 			if(ans<r-l+1){
// 				ans=r-l+1;
// 				x=l;
// 				y=r;
// 			}
            ans=max(ans,r-l+1);
			r++;

		}
        // cout<<s.substr(x,y-x+1)<<endl;

		return ans;
    }
};