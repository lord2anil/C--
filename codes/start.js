


const solve=(nums,i,n,pr){
 if(i==n){
  return pr;
 }

  let ans=-1e16;
  ans=Math.max(ans,Math.max(pr,solve(nums,i+1,n,nums[i])));
  ans=Math.max(ans,solve(solve(nums,i+1,n,pr*nums[i])));
  return ans;

}

var maxProduct = function(nums) {



  return solve(nums,nums.length,1);
    
};


