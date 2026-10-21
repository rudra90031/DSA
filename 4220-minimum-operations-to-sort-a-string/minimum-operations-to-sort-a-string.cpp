class Solution {
public:
    int minOperations(string s) {
        int n = s.size();

        if (n == 2 && s[0] > s[1]) {
            return -1;
        }

        if (is_sorted(s.begin(), s.end())) {
            return 0;
        }

        auto [mnIt, mxIt] = minmax_element(
            s.begin() + 1, s.end() - 1
        );

        char mn = *mnIt;
        char mx = *mxIt;

        char left = s[0];
        char right = s.back();

        if (left <= min(right, mn) ||
            right >= max(left, mx)) {
            return 1;
        } else if (right >= mn || left <= mx) {
            return 2;
        } else {
            return 3;
        }
    }
};