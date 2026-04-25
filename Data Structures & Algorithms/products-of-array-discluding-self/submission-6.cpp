class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);
        int tmp=1;
        for(int i=1;i<nums.size();i++){
            ans[i] *= tmp*nums[i-1];
            tmp *=nums[i-1];
        }
        tmp=1;
        for(int i=nums.size()-2;i>=0;i--){
            ans[i] *= tmp*nums[i+1];
            tmp*=nums[i+1];
        }
        return ans;
    }
};
