class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }


        vector<int> vect = nums;
        sort(vect.begin(), vect.end());
        int longest_sequence = 1;
        int curr_length = 1;
        for (unsigned i = 0; i < vect.size() - 1; ++i) {
            if (vect.at(i + 1) - vect.at(i) == 0) {
                continue;
            }
            if (vect.at(i + 1) - vect.at(i) == 1) {
                curr_length++;
                continue;
            }
            // this following else is the case where we have ended the incremental sequence or there isn't one
            if (curr_length > longest_sequence) {
                longest_sequence = curr_length;
            }
            curr_length = 1;
        }
        if (curr_length > longest_sequence) { // extra check for the last 2 elements
            longest_sequence = curr_length;
        }

        return longest_sequence;
    }
};
