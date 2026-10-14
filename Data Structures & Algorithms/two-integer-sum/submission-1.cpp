class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> seen;
        for (int i = 0; i < nums.size(); ++i) {
            if (seen.contains(target - nums[i])) {
                return vector<int>{seen[target - nums[i]], i};
            }
            seen[nums[i]] = i;
        }
        return vector<int>{0,0};
    }
};
