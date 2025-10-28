#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int climbStairs(int n) {
        // Base cases
        if (n <= 2) return n;

        // dp[i] represents number of ways to reach step i
        vector<int> dp(n + 1);
        dp[1] = 1;
        dp[2] = 2;

        // Build up from step 3 to n
        for (int i = 3; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};
int main()
{
    int n;
    cout << "Enter number of steps: ";
    cin >> n;

    Solution sol;
    cout << "Number of distinct ways: " << sol.climbStairs(n) << endl;

    return 0;
}
