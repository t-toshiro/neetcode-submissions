class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> a(26,0);
        for(char c : s){
            a[c-'a'] += 1;
        }
        for(char c : t){
            if(a[c-'a']>0){
            a[c-'a'] -= 1;
            }else return false;
        }
        for(int i : a){
            if(i != 0)return false;
        }
        return true;
    }
};
