class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i = 0;
        while (i < nums.size()) {
            // Use long to prevent overflow when calculating correct = nums[i] - 1
            long long correct = (long long)nums[i] - 1;
            // Only swap if the value is within the valid index range [0, n-1]
            if (correct >= 0 && correct < nums.size() && nums[i] != nums[correct]) {
                swap(nums[i], nums[correct]);
            } else {
                i++;
            }
        }
        for (auto &p:nums){
            cout << p << " ";
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }
        return nums.size() + 1;
    }
};