#include <iostream>
using namespace std;

void swapNumbers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int first = 15;
    int second = 25;
    int *pointer1 = &first;
    int *pointer2 = &second;

    cout << "Before swap: " << *pointer1 << " " << *pointer2 << endl;
    swapNumbers(pointer1, pointer2);
    cout << "After swap: " << *pointer1 << " " << *pointer2 << endl;

    if (*pointer1 > *pointer2)
    {
        cout << "First number is larger." << endl;
    }
    else
    {
        cout << "Second number is larger." << endl;
    }

    int *larger = (*pointer1 > *pointer2) ? pointer1 : pointer2;
    cout << "Larger value: " << *larger << endl;

    return 0;
}
