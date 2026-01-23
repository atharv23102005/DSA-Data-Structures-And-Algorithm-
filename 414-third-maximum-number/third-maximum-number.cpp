class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;

        for (int x : nums) {
            if (x == first || x == second || x == third)
                continue;

            if (x > first) {
                third = second;
                second = first;
                first = x;
            }
            else if (x > second) {
                third = second;
                second = x;
            }
            else if (x > third) {
                third = x;
            }
        }

        // If third max doesn't exist, return the maximum
        return (third == LLONG_MIN) ? first : third;
    }
};
