// Last updated: 10/3/2026, 8:06:09 PM
class Solution {
    public int maximumWealth(int[][] accounts) {
        int ans=0;
        for(var e:accounts){
            int s=0;
            for(var v:e){
                s+=v;
            }
            ans=Math.max(ans,s);
        }
        return ans;
    }
}