#include<iostream>
#include<math.h>
using namespace std;
 int main () {
    int bin_dig;
    cin >> bin_dig;
    int count = 0;
    int ans = 0;
    while ( bin_dig != 0 ){
        if( bin_dig % 10 == 1){
            ans +=  pow(2 ,count);
        }
        bin_dig = bin_dig/10;
        count ++;
    }
    cout << ans ;
 }