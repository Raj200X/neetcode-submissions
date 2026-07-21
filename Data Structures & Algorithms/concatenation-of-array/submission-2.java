class Solution {
    public int[] getConcatenation(int[] nums) {
        int len = 2 * nums.length;
        int arr[] = new int[len];
        for (int i = 0;i<nums.length;i++){
            arr[i] = nums[i];
        }
        for (int i = nums.length;i<len;i++){
            arr[i] = nums[i%nums.length];
        }
        return arr;

    }
}