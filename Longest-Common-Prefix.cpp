class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    int n = INT_MAX;
    string t = \\;
    for (int i = 0; i < strs.size(); ++i) {
        if(n > strs[i].size()){
            n = strs[i].size();
            t = strs[i];
        }
    }
    string ans = \\;
        for (int j = 0,i = 0; j < t.size(); j++) {
            bool alt = true;
            for (int k = 0; k < strs.size(); k++) {
                if (t != strs[k]) {
                    alt &= (t.substr(i, j + 1) == strs[k].substr(i, j + 1));
                }
            }
            if (alt) {
                if(ans.size() < t.substr(i,j + 1).size()) {
                    ans = t.substr(i, j + 1);
                }
        }
    }
        return ans;
    }
};