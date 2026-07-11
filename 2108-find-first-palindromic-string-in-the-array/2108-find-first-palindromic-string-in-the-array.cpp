class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (auto &w : words) {
            if (isPalindrome(w)) return w;
        }
        return "";
    }
private:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            if (s[i++] != s[j--]) return false;
        }
        return true;
    }
};
