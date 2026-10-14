class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> returnable;
        int large_product = 1;
        for (unsigned i = 0; i < nums.size(); ++i) {
            large_product *= nums.at(i);
        }
        for (unsigned i = 0; i < nums.size(); ++i) {
            if (nums.at(i) == 0) { // special case for no div by 0
                returnable.push_back(1);
                for (unsigned j = 0; j < nums.size(); j++) {
                    if (i !=j) {
                        returnable[i] *= nums[j];
                    }
                }
                continue;
            }
            returnable.push_back(large_product / nums[i]);
        }
        return returnable;
    }
};
