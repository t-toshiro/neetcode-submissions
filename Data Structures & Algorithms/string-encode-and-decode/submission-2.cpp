class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(string s: strs){
            res += to_string(s.size()) + '#' + s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while(i < s.size()){
            string num = "";
            while(s[i] != '#'){
                num+=s[i];
                i++;
            }
            i++;
            int len = stoi(num);
            string tmp = "";
            for(int j=0; j<len; j++){
                tmp+=s[i];
                i++;
            }
            res.push_back(tmp);
        }
        return res;
    }
};
