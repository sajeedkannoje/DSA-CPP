#include <iostream>
using namespace std;
int main()
{
    int number;
    char symbol;
    cout << "enter the number" << endl;
    cin >> number;
    cout << "enter the symbol:" << endl;
    cin >> symbol;
    int count = 1;
    while (count <= number)
    {
        int j = 1;
        while (j <= number)
        {
            cout << symbol;
            j++;
        }
        cout << endl;
        count++;
    }
}