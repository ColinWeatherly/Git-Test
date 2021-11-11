/* Name: Colin Weatherly
 * Date: 11/11/21
 * File: main.cpp
 * Description: For use with growing accustomed to git.
 */

#include <iostream>

using namespace std;

int sum(int n);
/* Description:
 *    This function sums all integers from 1 to n using
 *    a loop and returns this sum.
 *
 * Parameters:
 *    int n
 *       The top limit of the sum.
 *
 * Postconditions:
 *    All integers from 1 to n are summed and returned.
 */

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  cout << sum(n) << endl;
  return 0;
}

int sum(int n) {
  int totalSum = 0;
  for (int i = 1; i <= n; i++) {
    totalSum += i;
  }
  return totalSum;
}
    
