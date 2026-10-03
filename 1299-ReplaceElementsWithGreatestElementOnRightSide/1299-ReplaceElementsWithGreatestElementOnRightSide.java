// Last updated: 10/3/2026, 8:06:11 PM
class Solution {
    public int[] replaceElements(int[] arr) {
        int max=-1;
        for(int i =arr.length-1; i>=0; i--){
            int newMax=Math.max(max, arr[i]);
            arr[i]=max;
            max=newMax;
        }
        return arr;
    }
}