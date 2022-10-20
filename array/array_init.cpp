#include <iostream>
using namespace std;

int main()
{
    int number [15] = {1};
    for( int i = 0; i < sizeof(number)/sizeof(number[0]) ; i++){
        cout << number[i] << endl;
    }
    return 0;
}