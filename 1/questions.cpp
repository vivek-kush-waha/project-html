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

// #include <iostream>
// using namespace std;

// int findSum(int n) {
//     int sum = 0;
//     for (int i = 0; i <= n; i++) {
//         sum += i;
//     }
//     return sum;
// }

// int main() {
//     int n;
//     cin >> n; 
//     cout << findSum(n) << endl;
//     return 0;
// }


// Given an array, arr[] of n integers, and an integer element x, find whether element x is present in the array. Return the index of the first occurrence of x in the array, or -1 if it doesn't exist.
// Examples:
// Input: arr[] = [1, 2, 3, 4], x = 3
// Output: 2
// Explanation: For array [1, 2, 3, 4], the element to be searched is 3. Since 3 is present at index 2, the output is 2.
// Input: arr[] = [10, 8, 30, 4, 5], x = 5
// Output: 4
// Explanation: For array [10, 8, 30, 4, 5], the element to be searched is 5 and it is at index 4. So, the output is 4.
// Input: arr[] = [10, 8, 30], x = 6
// Output: -1
// Explanation: The element to be searched is 6 and it is not present, so we return -1.
// Constraints:
// 1 ≤ arr.size ≤ 106
// 0 ≤ arr[i] ≤ 106
// 0 ≤ x ≤ 105

// 

// Given a positive integer n, determine whether it is odd or even. Return true if the number is even and false if the number is odd.
// Examples:
// Input: n = 15
// Output: false
// Explanation: The number is not divisible by 2, Odd number.
// Input: n = 44
// Output: true
// Explanation: The number is divisible by 2, Even number.
// Constraints:
// 1 ≤ n ≤ 104


#include <iostream>
using namespace std;

class Solution {
  public:
    bool isEven(int n) {
        return n % 2 == 0;
    }
};

int main() {
    int n;
    cin >> n; 

    Solution obj;
    if (obj.isEven(n)) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

    return 0;
}