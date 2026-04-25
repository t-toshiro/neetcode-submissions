class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1;
        for(int i=0;i<numbers.size();i++){
            int tmp=numbers[l]+numbers[r];
            if(tmp==target) return {l+1,r+1};
            if(tmp>target) r--;
            if(tmp<target) l++;
        }
    }
};
