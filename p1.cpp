#include <iostream>
using namespace std;

void doubleValue(int *ptr)
{
    *ptr = *ptr * 2;
}

int main()
{
    int number = 10;
    int *pointer = &number;

    cout << "Original value: " << number << endl;
    cout << "Address: " << pointer << endl;
    cout << "Pointer value: " << *pointer << endl;

    *pointer = 20;
    cout << "The Changed value is: " << number << endl;

    doubleValue(pointer);
    cout << "The Doubled value is: " << number << endl;

    return 0;
}
