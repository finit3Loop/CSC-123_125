#include <iostream>

using namespace std;

int main()
{
    int number1 = 30;
    int a[10];
    int number2 = 10;

    cout << "Number1 is " << number1
         << " and Number 2 is " << number2
         << endl;

    a[-1] = 999;

    cout << "After setting a[-1], number1 is " << number1
         << " and Number 2 is " << number2
         << endl;

    // printing the addresses in memory to see why this happened

    cout << "Number 1 is stored at memory location "
         << &number1 << endl;
    cout << "Number 2 is stored at memory location "
         << &number2 << endl;
    cout << "a is stored at memory location "
         << a << endl;   // notice no & here!
    cout << "a[-1] is stored at memory location "
         << &a[-1] << endl;

    return 0;
}
