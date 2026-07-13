// Last updated: 7/13/2026, 11:12:23 AM
class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        HashMap<Integer, Integer> map=new HashMap<>();
        List<Integer> result=new ArrayList<>();

        for(int n:nums1){
            map.put(n, map.getOrDefault(n,0)+1);
        }
        for(int n:nums2){
            if(map.getOrDefault(n,0)>0){
                result.add(n);
                map.put(n, map.get(n)-1);
            }
        }
        int[] ans =new int[result.size()];
        for(int i=0;i<result.size();i++){
            ans[i]=result.get(i);
        }
        return ans;
    }
}