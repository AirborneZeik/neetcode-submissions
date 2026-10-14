class Solution {
public:
    bool isAnagram(string s, string t) {
        std::map<char, int> s_map;
        for (unsigned i = 0; i < s.size(); ++i) {
            if (!s_map.contains(s[i])) {
                s_map[s[i]] = 1;
            } else {
                s_map[s[i]] = s_map[s[i]] + 1;
            }
        }
        std::map<char, int> t_map;
        for (unsigned i = 0; i < t.size(); ++i) {
            if (!t_map.contains(t[i])) {
                t_map[t[i]] = 1;
            } else {
                t_map[t[i]] = t_map[t[i]] + 1;
            }
        }
        return s_map == t_map;
    }
};
