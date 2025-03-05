class Solution {
public:
    long long coloredCells(int n) {
         long t = n;
         long long ans = 1+4*t*(t-1)/2;
         return ans;
    }
};