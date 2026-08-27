#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int *numbers = new int[size];
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        numbers[i] = (i + 1) * 10;
        sum += *(numbers + i);
        cout << numbers[i] << " ";
    }

    cout << endl;
    cout << "Sum: " << sum << endl;
    int *average = new int;
    *average = sum / size;
    cout << "Average: " << *average << endl;

    delete[] numbers;
    delete average;
    numbers = nullptr;
    average = nullptr;
    return 0;
}
