class Solution {
public:
    int countDigits(int num) {
        int ans = 0, n = num;
        while (n > 0) {
            int d = n % 10;
            if (d != 0 && num % d == 0) ans++;
            n /= 10;
        }
        return ans;
    }
};
