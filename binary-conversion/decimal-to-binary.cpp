#include<iostream>
using namespace std;
 int main () {
    int input;
    cin >> input;
    int  quotient;
    int  remainder[32];
    for (int i = 0; i < sizeof(remainder)/sizeof(remainder[0]) ; i++)
    {
        remainder[i] = 2;
    }
    for (int count = 0; input > 0 ; count ++ ) {
        remainder[count] = (input % 2);
        quotient = input / 2;
        input = quotient;
    }
    for (int count = 31; count >= 0; count -- ){
        // cout <<remainder[count]; 
        if(  remainder[count] != 2 ){
            cout <<  remainder[count] ;
        }
    }
 
 } 