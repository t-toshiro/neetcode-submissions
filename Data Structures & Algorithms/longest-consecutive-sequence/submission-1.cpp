class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]-1]){
                mp[nums[i]]=mp[nums[i]-1]+1;
            }else{
                mp[nums[i]]=1;
            }
        }
        int longest=0;
        for(auto& i:mp){
            longest=max(longest,i.second);
        }
        return longest;
    }
};
