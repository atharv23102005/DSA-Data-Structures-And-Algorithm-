#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      int findMax(vector<int>& piles) {
        int maxi = piles[0];
        for (int x : piles) maxi = max(maxi, x);
        return maxi;
    }

    long long calculateHours(vector<int>& piles, int speed) {
        long long total = 0;
        for (int x : piles) {
            total += (x + speed - 1) / speed;  // no ceil(), no double, SAFE
        }
        return total;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = findMax(piles), ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long totalH = calculateHours(piles, mid);

            if (totalH <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
   

    }
};
