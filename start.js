/**
 * @param {number[]} stoneValue
 * @return {number}
 */


const solve=(sto,pre,n,l,r){

    if(l==r){
        return 0;
    }


    int ans=-1;

    for (let i = l; i <r; i++) {
       let left=pre[i]-(l==0)?0:pre[l-1];
       let right=pre[r]-pre[i];
       if(left>right){
        ans=max(ans,solve(sto,pre,n,i+1,r)+right);
       }
       if(left<right){
        ans=max(ans,solve(sto,pre,n,l,i)+left);
       }
       if(left==right){
        ans=max(ans,solve(sto,pre,n,l,i)+left);
        ans=max(ans,solve(sto,pre,n,i+1,r)+right);

       }

       return ans;
      
        
    }
}

var stoneGameV = function(sto) {
    let n=sto.length();
    const pre=[];
  
  pre[0]=sto[0];
  for (let i = 1; i < n; i++) {
    pre[i]=pre[i-1]+sto[i];
  }
  return solve(sto,pre,n,0,n-1);
};
