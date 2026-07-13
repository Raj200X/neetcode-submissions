class Solution {
public:
    void solve(vector<int>& nums,int i,vector<vector<int>> &ans,vector<int>temp){
        if (i>=nums.size()){
            ans.push_back(temp);
            return;
        }
        int val = nums[i];
        temp.push_back(val);
        //pick
        solve(nums,i+1,ans,temp);
        temp.pop_back();
        // not pick
        solve(nums,i+1,ans,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int i =0;
        vector<vector<int>> ans;
        vector<int> tm;
         solve(nums,i,ans,tm);
         return ans;

    }
};
