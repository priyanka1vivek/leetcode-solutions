// Last updated: 7/13/2026, 11:13:42 AM
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