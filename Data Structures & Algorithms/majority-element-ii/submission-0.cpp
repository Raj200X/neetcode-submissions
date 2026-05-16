class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for (int i =0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector <int>ans;
        int n = nums.size()/3;
        for (auto &p:mp){
            if (p.second>n){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};