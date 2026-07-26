class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max1 = -1001, max2 = 0, max3 = 0;
        int min1 = 1001, min2 = 0;

        for (auto it : nums) {
            // Find the three largest numbers
            if (it > max1) {
                max3 = max2;
                max2 = max1;
                max1 = it;
            } else if (it > max2) {
                max3 = max2;
                max2 = it;
            } else if (it > max3) {
                max3 = it;
            }

            // Find the two smallest numbers
            if (it < min1) {
                min2 = min1;
                min1 = it;
            } else if (it < min2) {
                min2 = it;
            }
        }

        return max(max1 * max2 * max3, max1 * min1 * min2);
    }
};