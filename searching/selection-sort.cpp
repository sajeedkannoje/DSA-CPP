#include <iostream>
using namespace std;
  void function (int arr[],int size){
    for(int i= 0; i< size; i++ ){
        int minIndex= i;
        for(int j = i; j< size-1; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
  }

int main()
{
  int selectionSortArray[] = {1,4,2,5,7,5};

    return 0;
}