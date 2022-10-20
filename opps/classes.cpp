#include <iostream>
using namespace std;
class Base
{
protected:
    int number1;

protected:
    int number2;

    // constrictor
public:
    Base(int a, int b)
    {
        // cout << "Contructor Method " << endl;
        this->number1 = a;
        this->number2 = b;
    }

    ~Base()
    {
        cout << "Sum of two number is : " << this->number1 + this->number2 << endl;
    }

public:
    void PrintHello()
    {
        cout << " Hello World" << endl;
    }
};

int main()
{
    // Base BaseCl(12, 12);
    int age;
    cin >> age;
    try
    {
      if(age < 18){
        throw 500;
      }else{
        cout << "you are 18 +";
      }
    }
    catch( int a)
    {
        cout << "you are not 18+ " << a;
    }
    
    return 0;
}