class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> returnable;
        vector<int> workable = nums;
        sort(workable.begin(), workable.end());
        for (unsigned i = 0; i < workable.size(); ++i) {
            if (i > 0 && workable[i] == workable[i - 1]) {
                continue;
            }
            unsigned front = i + 1;
            unsigned back = workable.size() - 1;

            while (front < back) {                
                int sum = workable[i] + workable[front] + workable[back];
                if (sum < 0) {
                    front += 1;
                } else if (sum > 0) {
                    back -= 1;
                } else {
                    returnable.push_back({workable[i], workable[front], workable[back]});
                    front += 1;
        back -= 1;
        while (front < back && workable[front] == workable[front - 1]) {
            front += 1;
        }
                }
            }
        }
        return returnable;
    }
};
