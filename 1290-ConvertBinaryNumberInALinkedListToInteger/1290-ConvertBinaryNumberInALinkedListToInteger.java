// Last updated: 10/3/2026, 8:06:08 PM
class Solution {
    public int getDecimalValue(ListNode head) {

        int c = 0;
        ListNode temp = head;

        while (temp != null) {
            c++;
            temp = temp.next;
        }

        int[] arr = new int[c];

        temp = head;
        int i = 0;

        while (temp != null) {
            arr[i++] = temp.val;
            temp = temp.next;
        }

        int ans = 0;

        for (i = 0; i < c; i++) {
            int exponent = c - 1 - i;
            ans += arr[i] * (int)Math.pow(2, exponent);
        }

        return ans;
    }
}