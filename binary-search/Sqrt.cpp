/**
 * Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

* You must not use any built-in exponent function or operator.

* For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 

* Example 1:

* Input: x = 4
* Output: 2
* Explanation: The square root of 4 is 2, so we return 2.
* Example 2:

* Input: x = 8
* Output: 2
* Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
 

* Constraints:

* 0 <= x <= 231 - 1
*/
#include <iostream>
using namespace std;
int mySqrt(int x) {
    int start = 0;
    int end = x;
    long long int mid = start + (end - start ) / 2 ;
    long long int ans = 0;
    while (start <= end)
    {
        long long int square =  mid * mid;
        if(square > x ){
            end = mid - 1;
        }else  {
            start = mid + 1;
            ans = mid;
        }
         mid = start + (end - start ) / 2 ;
    }
    return ans;
    
}
int main()
{
    int a;
    cin >> a;
  cout << mySqrt(a);
    return 0;
}