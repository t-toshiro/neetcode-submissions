class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int l,r;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1])continue;
            l=i+1;
            r=nums.size()-1;
            while(l<r){
                int tmp=nums[l]+nums[r];
                if(tmp+nums[i]==0) {
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                    while(nums[l]==nums[l-1])l++;
                    while(nums[r]==nums[r+1])r--;
                }

                if(tmp+nums[i]>0)r--;
                if(tmp+nums[i]<0)l++;
            }
        }
        return ans;
    }
};
