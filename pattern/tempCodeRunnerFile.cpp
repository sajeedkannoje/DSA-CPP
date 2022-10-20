#include <iostream>
using namespace std;

int main()
{
    for (int rowCount = 1; rowCount <= 6; rowCount++)
    {

        for (int colCount = 1; colCount <= rowCount; colCount++)
        {
            cout << "*";
        }
        cout << endl;
    }
}