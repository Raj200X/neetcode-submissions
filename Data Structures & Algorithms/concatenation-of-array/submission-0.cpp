class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        nums.resize(2*n,-1);
        int j =0;
        for (int i = n;i<2*n;i++){
            nums[i] = nums[j++];
        }
        return nums;
    }
};