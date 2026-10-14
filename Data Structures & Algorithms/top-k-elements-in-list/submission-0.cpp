class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> map;
        for (unsigned i = 0; i < nums.size(); ++i) {
            if (map.contains(nums[i])) {
                map[nums[i]]++;
            } else {
                map[nums[i]] = 1;
            }
        }
        int counter = 0;
        vector<int> returnable;
        while (counter < k) {
            int largest_count = 0;
            int num = std::numeric_limits<int>::min();
            for (const auto& [key, value] : map) {
                if (value > largest_count) {
                    largest_count = value;
                    num = key;
                }
            }
            if (num != std::numeric_limits<int>::min()) {
                returnable.push_back(num);
                map.erase(num);
            }
            counter++;
        }
        return returnable;
    }
};
