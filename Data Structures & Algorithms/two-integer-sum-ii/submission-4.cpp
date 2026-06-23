class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size()-1;
        while (l<h){
            int sum = nums[l]+nums[h];
            if (sum==target){
                return {l+1,h+1};
            }
            else if (sum>target){
                h--;
            }
            else{
                l++;
            }
        }
        return {-1,-1};

    }
};
