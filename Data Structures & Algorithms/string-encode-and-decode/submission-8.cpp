class Solution {
public:

    string encode(vector<string>& strs) {
        string returnable;

        for (unsigned i = 0; i < strs.size(); i++) {
            returnable += to_string(strs[i].size());
            returnable += '#';
            returnable += strs[i];
        }

        return returnable;
    }

    vector<string> decode(string s) {
        vector<string> output;
        int index = 0;
        while (index < s.size()) {
            int j = index;
            string str_length;
            while (s[j] != '#') {
                str_length += s[j];
                j++;
            }
            int int_length = stoi(str_length);
            index += str_length.size() + 1;
            output.push_back(s.substr(index, int_length));
            index += int_length;
        }
        return output;
    }
};
