#include <iostream>
#include <vector>
using namespace std;
/**
 * @brief 
 * https://www.codingninjas.com/codestudio/problems/painter's-partition-problem_1089557
 */
*/
/**
 * @brief 
 * 
 * @param boards 
 * @param k 
 * @param size 
 * @param mid 
 * @return true 
 * @return false 
 */
bool isPossible(vector<int> &boards, int k, int size, int mid)
{
    int painterCount = 1;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (sum + boards[i] <= mid)
        {
            sum += boards[i];
        }
        else
        {
            painterCount++;
            if (painterCount > k || boards[i] > mid)
                return false;
            sum = boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0;
    int sum = 0;
    int ans = -1;
    int size = boards.size();

    for (int i = 0; i < size; i++)
    {
        sum += boards[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(boards, k, size, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    cout << 1;
    return 0;
}