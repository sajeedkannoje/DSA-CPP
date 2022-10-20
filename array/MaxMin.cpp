#include <iostream>
using namespace std;
  
int main()
{
  int num [10];
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i = 0; i < 10; i++)
    {
        mini = min(num[i], mini);
        maxi = max(num[i],maxi);
    }
    cout << "Max Number is:"<< mini<< endl << "Min number is: "<< maxi<< endl;  
    
    return 0;
}