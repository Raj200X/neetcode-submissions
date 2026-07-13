class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>&nums,int i,vector<int>&temp){
        if (i>=nums.size()){
            ans.push_back(temp);
            return;
        }
        solve(nums,i+1,temp);
        temp.push_back(nums[i]);
        solve(nums,i+1,temp);
        temp.pop_back();
    }
    int subsetXORSum(vector<int>& nums) {
        vector<int>temp;
        int sum = 0;
        solve(nums,0,temp);
        for (int i = 0;i<ans.size();i++){
            int xo = 0;
            for (int j = 0;j<ans[i].size();j++){
                xo = xo ^ ans[i][j];
            }
            sum = sum + xo;
        }
        return sum;
    }
};