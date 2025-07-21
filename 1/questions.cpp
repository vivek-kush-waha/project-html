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

// #include <iostream>
// using namespace std;

// class Solution {
//   public:
//     void factorial(int n) {
//         int fact = 1;
//         for (int i = 1; i <= n; i++) {
//             fact *= i;
//         }
//         cout << fact << endl;
//     }
// };

// int main() {
//     int n;
//     cin >> n; 
//     Solution obj;
//     obj.factorial(n); 
//     return 0;
// }


// Given an integer n, your task is to compute the sum of all natural numbers from 1 to n (inclusive). If n is 0, the sum should be 0.
// Examples:
// Input: n = 3
// Output: 6
// Explanation: For n = 3, the sum will be 6. 1 + 2 + 3 = 6.
// Input: n = 5
// Output: 15
// Explanation: For n = 5, the sum will be 15. 1 + 2 + 3 + 4 + 5 = 15.
// Constraints:
// 1 ≤ n ≤ 104

#include <iostream>
using namespace std;

int findSum(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    cin >> n; // Input from the user
    cout << findSum(n) << endl;
    return 0;
}
