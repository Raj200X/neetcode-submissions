class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int candidate1 = 0;
        int candidate2 = 1;
        int cnt1 = 0;
        int cnt2 = 0;
        for (int i =0;i<nums.size();i++){
            if (nums[i]==candidate1){
                cnt1++;
            }
            else if (nums[i]==candidate2){
                cnt2++;
            }
            else if (cnt1==0){
                candidate1 = nums[i];
                cnt1 = 1;
            }
            else if (cnt2==0){
                candidate2 = nums[i];
                cnt2 = 1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0;
        cnt2 = 0;
        for (int i=0;i<nums.size();i++){
            if (candidate1==nums[i]) cnt1++;
            else if (candidate2==nums[i]) cnt2++;
        }
        vector<int>ans;
        int n = nums.size()/3;
        if (cnt1>n) ans.push_back(candidate1);
        if (cnt2>n) ans.push_back(candidate2);
        return ans;
    }
};