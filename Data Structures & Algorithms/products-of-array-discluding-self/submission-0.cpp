class Solution {
public:
    void print(vector<int>nums){
        for (auto &p:nums){
            cout << p << " ";
           }
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>left(n,1);
        for (int i = 1;i<n;i++){
            left[i] = left[i-1]*nums[i-1];
        }
        print(left);
        int right = 1;
        for (int i = n-1;i>=0;i--){
            left[i] = left[i]*right;
            right = right*nums[i];
        }
        return left;
        

        
    }
};
