class Solution {
public:
    int reverseNum(int n) {
        int rev = 0;

        while (n > 0) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }

        return rev;
    }

    int countNicePairs(vector<int>& nums) {
        const long long MOD = 1e9 + 7;

        unordered_map<long long, long long> mp;
        long long ans = 0;

        for (int x : nums) {
            long long key = x - reverseNum(x);

            // All previous numbers with same key form nice pairs
            ans = (ans + mp[key]) % MOD;

            mp[key]++;
        }

        return ans;
    }
};