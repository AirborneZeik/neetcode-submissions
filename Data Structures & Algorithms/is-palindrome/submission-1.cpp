class Solution {
public:
    bool isPalindrome(string s) {
        string to_check;
        for (unsigned i = 0; i < s.size(); ++i) {
            if (isalnum(s.at(i))) {
                to_check.push_back(s.at(i));
            }
        }

        for (char &c : to_check) {
            c = static_cast<char>(static_cast<char>(tolower(static_cast<char>(c))));
        }
        return isPalindromeHelper(to_check);
    }
    bool isPalindromeHelper(string s) {
        if (s.size() == 0) {
            return true;
        }
        if (s.size() == 1) { // base case
            return true;
        }
        if (s.size() == 2) {
            if (s.at(0) == s.at(1)) { // other base case
                return true;
            }
            return false;
        }
        if (s.at(0) != s.at(s.size() - 1)) {
            return false;
        }
        return isPalindromeHelper(s.substr(1, s.size() - 2));
    }
};
