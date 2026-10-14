class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> returnable;
        vector<int> prefix_produtti;
        vector<int> postfix_produtti;
        int running_total = 1;
        for (unsigned i = 0; i < nums.size(); ++i) {
            prefix_produtti.push_back(running_total *= nums.at(i));
        }
        running_total = 1;
        for (unsigned i = nums.size(); i > 0; i--) {
            postfix_produtti.insert(postfix_produtti.begin(), running_total *= nums.at(i - 1));
        }

        for (unsigned i = 0; i < nums.size(); ++i) {
            int left = (i > 0) ? prefix_produtti[i - 1] : 1;
            int right = (i < nums.size() - 1) ? postfix_produtti[i + 1] : 1;
            returnable.push_back(left * right);
        }
        return returnable;
    }
};
