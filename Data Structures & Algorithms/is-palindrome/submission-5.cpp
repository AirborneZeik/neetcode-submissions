class Solution {
public:
    bool isPalindrome(string s) {
        string to_check;
        for (char c : s) {
            if (isalnum(c)) {
                to_check.push_back(static_cast<char>(std::tolower(static_cast<char>(c))));
            }
        }

        auto front = to_check.begin();
        auto back = to_check.end() - 1;

        while (true) {
            if (front == back + 1) { // the empty string base case
                return true;
            }
            if (front == back) { // the case where our string is one element, or we're down to one
                return true;
            }
            if (*front != *back) {
                return false;
            }
            front++;
            back--;
        }
        return true;

    }
};
