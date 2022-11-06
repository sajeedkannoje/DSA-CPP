#include <iostream>
#include <vector>
using namespace std;
/**
 * @brief 
 * 
 * @param nums 
 * @param target 
 * @return int 
 * 704. Binary Search
Easy

7124

155

Add to List

Share
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4
Example 2:

Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1
 

Constraints:

1 <= nums.length <= 104
-104 < nums[i], target < 104
All the integers in nums are unique.
nums is sorted in ascending order.
 */
int binarySearch(vector<int>& nums, int target) {
 int start = 0;
        int end = nums.size() -1;
        int mid = start + (end - start) / 2;
        while (start <= end)
        {
            if (nums[mid] == target )return mid;
            else if (nums[mid] > target )end = mid -1;
            else if (nums[mid] < target) start = mid + 1;
            mid = start + (end - start) / 2;
        }
        return -1;
    }
    void getVectorValueFromTestCase(vector<int>& tempArray )
    {
        int a;
        while (cin >> a)
        {
            tempArray.push_back(a);
        }
    }
int main()
{
    vector<int> tempArray;
    getVectorValueFromTestCase(tempArray);
     cout << binarySearch(tempArray,11 );

    return 0;
}