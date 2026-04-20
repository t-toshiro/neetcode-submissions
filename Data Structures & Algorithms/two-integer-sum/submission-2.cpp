class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> a;
        for(int i;i<nums.size();i++)a[nums[i]]=i;
        for(int i;i<nums.size();i++){
            int diff = target-nums[i];
            if(a.count(diff)&&a[diff]!=i){
                return {i,a[diff]};
            }
        }

    }
};
