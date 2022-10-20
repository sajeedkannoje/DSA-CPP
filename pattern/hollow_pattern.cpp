#include <iostream>
using namespace std;
int main(){
//      *****
//      *   *
//      *****
int row =3;
int col = 5;

for ( int rowCount = 1; rowCount <= row; rowCount ++ ) 
{
    for ( int colCount = 1; colCount <= col; colCount ++)
    {
        if(rowCount == 1 || rowCount == row){
                 cout << "*";
        }else  if( colCount == 1 || colCount == col) {
            cout << "*";
        }else{
            cout << " ";
        }
    }
    cout << endl;
}

}