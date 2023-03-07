class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int searchValue = 0;
        for(int i = 0; i < nums.size(); i++){
            searchValue = target - nums[i];
            for(int n=0; n < nums.size(); n++){
                if(i != n){
                    if(nums[n] == searchValue){
                        ans.push_back(i);
                        ans.push_back(n);
                        return ans;
                    }
                }
            }
        }
        return ans;
    }
};
