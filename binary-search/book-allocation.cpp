/**
 * @file book-allocation.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-07
 * 
 * @copyright Copyright (c) 2022
 * Problem Statement
https://www.codingninjas.com/codestudio/problems/allocate-books_1090540?leftPanelTab=0
    Detailed explanation ( Input/output format, Notes, Constraints, Images )
    Sample Input 1:
    2
    4 2
    12 34 67 90
    4 4
    5 17 100 11
    Sample Output 1:
    113
    100
    Explanation Of Sample Input 1:
    Test Case 1:

    Let’s consider ‘n=4’ (number of books ) and ‘m=2’ (number of students)
    ‘arr = { 12, 34, 67, 90 }’. And ‘m= 2’.
    All possible way to allocate the ‘4’ books in ‘2’ number of students is-

    12 | 34, 67, 90 - sum of all the pages of books which allocated to student 1 is ‘12’, and student two is ‘34+ 67+ 90 = 191’ so maximum is ‘max(12, 191)= 191’.
    12, 34 | 67, 90 - sum of all the pages of books which allocated to student 1 is ‘12+ 34 = 46’, and student two is ‘67+ 90 = 157’ so maximum is ‘max(46, 157)= 157’.
    12, 34, 67 | 90 - sum of all the pages of books which allocated to student 1 is ‘12+ 34 +67 = 113’, and student two is ‘90’ so maximum is ‘max(113, 90)= 113’.

    So possible maximum number of pages which allocated to a single student is { 191, 157, 113 } 
    But you have to return a minimum of this so return ‘min(191,157, 113) =113’.

    Hence answer is ‘113’.

    Test Case 2:

    ‘arr = { 5, 17, 100, 11 }’. And ‘m=4’.
    Only one is possible to allocate the ‘4’ books in ‘4’ student is 

    5 | 17 | 100 | 11 - maximum is ‘max(5, 17, 100, 11)= 100’.

    Hence answer is ‘100’.
    Sample Input 2:
    2
    5 4
    25 46 28 49 24
    3 2
    10 10 20
    Sample Output 2:
    71
    20
 */
#include <bits/stdc++.h>
#include <vector>

bool isPossibleSolution(vector<int> arr, int n, int m, int mid)
{

    int pageSum = 0;
    int studentCount = 1;
    for (int i = 0; i < n; i++)
    {

        if (pageSum + arr[i] <= mid)
        {

            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}
int allocateBooks(vector<int> arr, int n, int m)
{

    int start = 0;
    int ans = -1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (isPossibleSolution(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
}