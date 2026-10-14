class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); ++i) {
            if (seen.contains(target - nums[i])) {
                return vector{seen[target - nums[i]], i};
            }
            seen[nums[i]] = i;
        }
        return vector{0,0};
    }
};
