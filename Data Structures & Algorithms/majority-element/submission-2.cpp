class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 1;
        int candidate = nums[0];
        for (int i = 1;i<nums.size();i++){
            if (candidate==nums[i]){
	            cnt++;
	        }
	        else{
	            cnt--;
	        }
	        if (cnt==0){
	            candidate = nums[i];
                cnt = 1;
	        }
        }
        return candidate;
    }
};