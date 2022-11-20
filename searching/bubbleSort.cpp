#include <iostream>
using namespace std;
  
int main()
{
  int arr [] = {1,2,6,4,3,5};

int size = 6;
    for(int i =0; i < size; i ++   ){
        for (int j = 0; j < size - 1; j++)
        {
            if(arr[i] < arr[j]){
               swap(arr[i],arr[j]);
            }
        }
    }

for (int i = 0; i < 6; i++)
{
        cout << arr[i] <<endl;
    
}

    return 0;
}