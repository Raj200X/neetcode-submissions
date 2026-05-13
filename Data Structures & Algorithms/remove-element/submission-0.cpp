class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans = nums.size();
        unordered_map<int,int>mp;
        for (int i =0;i<nums.size();i++){
            if (nums[i]==val){
                mp[val]++;
            }
        }
        vector<int>ansv;
        for (int i =0;i<nums.size();i++){
            if (nums[i]!=val){
                ansv.push_back(nums[i]);
            }
        }
        nums = ansv;
        return ans-mp[val];
    }
};