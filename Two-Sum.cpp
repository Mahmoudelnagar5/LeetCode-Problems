class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>> ans (n);
        for(int i = 0; i < n; i++){
           ans[i].first = nums[i];
            ans[i].second = i;
        }
        sort(ans.begin(),ans.end());
        int l = 0 , r = n - 1;
        while (l < r){
            if(ans[l].first + ans[r].first == target){
                return {ans[l].second , ans[r].second};
            }
            else if(ans[l].first + ans[r].first > target){
                r--;
            }
            else {
                l++;
            }
        }
        return {};
    }
};