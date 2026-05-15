class Solution {
public:

    void sortColors(vector<int>& nums) {
        int z = 0;
        int o = 0;
        int t = 0;
        for (int i =0;i<nums.size();i++){
            if (nums[i]==0){
                z++;
            }
            else if (nums[i]==1){
                o++;
            }
            else{
                t++;
            }
        }
        nums.resize(0);
        while (z>0){
            nums.push_back(0);
            z--;
        }
        while(o>0){
            nums.push_back(1);
            o--;
        }
        while (t>0){
            nums.push_back(2);
            t--;
        }
        
        
    }
};