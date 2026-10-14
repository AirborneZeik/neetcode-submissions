class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.size() == 1) {
            return {{strs[0]}};
        }
        
        // create maps for each string that maps char to unsigned
        // compare them
        // iterate through them, put them into a returnable and delete  them as we go

        map<map<char, unsigned>, vector<string>> understood;

        for (unsigned i = 0; i < strs.size(); ++i) {
            string curr_string = strs[i];
            map<char, unsigned> curr_map;

            for (unsigned j = 0; j < curr_string.size(); ++j) {
                if (!curr_map.contains(curr_string[j])) {
                    curr_map[curr_string[j]] = 1;
                } else {
                    curr_map[curr_string[j]]++;
                }
            }
            understood[curr_map].push_back(strs[i]);
        }

        
        vector<vector<string>> returnable;

        for (const auto [key, value] : understood) {
            returnable.push_back(value);
        }


        if (returnable.empty()) {
            return {{""}};
        }

        return returnable;

    }
};
