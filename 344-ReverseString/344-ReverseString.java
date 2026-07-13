// Last updated: 7/13/2026, 11:12:24 AM
class Solution {
    public void reverseString(char[] s) {
     if (s==null){
        throw new IllegalArgumentException("input arr can't be null");
     }
     int left=0;
     int right =s.length-1;

     while(left<right){
        char temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        left++;
        right--;
     }
    }
}