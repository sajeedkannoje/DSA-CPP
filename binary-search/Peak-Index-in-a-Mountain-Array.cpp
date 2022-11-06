#include <iostream>
#include <vector>
using namespace std;
  int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        
        if (arr[mid] < arr[mid + 1])start = mid + 1;
       
        else  end = mid - 1;
    }
        return start;
    }
int main()
{
    vector<int> arry{0, 10, 5, 2};
    cout << peakIndexInMountainArray(arry);
    return 0;
}