class Solution {
public:
    bool isPalindrome(string s) {
        string s_="";
        for(int i=0;i<s.size();i++){
            if(!isalnum(s[i])) continue;
            s_+=tolower(s[i]);
        }
        for(int i=0;i<s_.size()/2;i++){
            if(s_[i]!=s_[s_.size()-i-1]) return false;
        }
        return true;
    }
};
