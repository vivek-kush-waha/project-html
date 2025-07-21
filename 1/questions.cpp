// Given a positive integer, n. Find the factorial of n.
// Examples :
// Input: n = 5
// Output: 120
// Explanation: 1 x 2 x 3 x 4 x 5 = 120
// Input: n = 4
// Output: 24
// Explanation: 1 x 2 x 3 x 4 = 24
// Constraints:
// 0 ≤ n ≤ 12

#include <iostream>
using namespace std;

class Solution {
  public:
    void factorial(int n) {
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        cout << fact << endl;
    }
};

int main() {
    int n;
    cin >> n; 
    Solution obj;
    obj.factorial(n); 
    return 0;
}