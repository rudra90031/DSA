class Solution {
public:
    bool checkString(std::string& s) {
        int n = s.size();
        int i = 0;
        while (i < n && s[i] == 'a') {
            i++;
        }
        while (i < n && s[i] == 'b') {
            i++;
        }
        // Leftover char means an 'a' after a 'b'
        return i == n;
    }
};