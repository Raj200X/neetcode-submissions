class Solution {
public:
    vector<vector<int>>ans;
    void solve(int i,vector<int>&nums,vector<int>&temp,int target){
        if (target==0){
            ans.push_back(temp);
            return;
        }
        if (target<0){
            return;
        }
        if (i==nums.size()){
            return;

        }
        temp.push_back(nums[i]);
        solve(i,nums,temp,target-nums[i]);
        temp.pop_back();
        solve(i+1,nums,temp,target);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>temp;
        solve(0,nums,temp,target);
        return ans;
    }
};
