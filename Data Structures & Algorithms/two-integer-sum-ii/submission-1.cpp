class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>::iterator first = numbers.begin();
        vector<int>::iterator back = numbers.end() - 1;
        while (true) {                
            if (*first + *back == target) {
                return {static_cast<int>(distance(numbers.begin(), first)) + 1, static_cast<int>(distance(numbers.begin(), back)) + 1};
            } else if (*first + *back > target) {
                back--;
            } else {
                first++;
            }
            
        }

        return {0, 0}; // dummy return statement for compilation
    }
};
