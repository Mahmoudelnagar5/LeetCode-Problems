class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int ans = 0, i , j;
        for ( i = 0, j = 0; i < s.size();i++){
             while (mp[s[i]] == 1){
                if(mp[s[j]] == 1){
                   mp.erase(s[j]);
                }
                j++;
             }
             mp[s[i]]++;
             ans = max(ans,(i - j + 1));
        }
         
        return ans;
    }
};