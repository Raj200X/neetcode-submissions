class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp1;
        unordered_map<char,int>mp2;
        if (s.size()!=t.size()){
            return false;
        }
        for (int i =0;i<s.size();i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        for (auto p:mp1){
            if (mp2.count(p.first)){
                if (p.second!=mp2[p.first]){
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
};
