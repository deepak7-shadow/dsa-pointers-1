#include <iostream>
using namespace std;

int main()
{
    char word[] = "programming";
    char *ptr = word;
    int length = 0;
    int vowels = 0;

    while (*ptr != '\0')
    {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' ||
            *ptr == 'o' || *ptr == 'u')
        {
            vowels++;
        }
        ptr++;
        length++;
    }

    cout << "Word: " << word << endl;
    cout << "Length: " << length << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Reverse: ";

    while (length > 0)
    {
        length--;
        cout << word[length];
    }

    cout << endl;
    return 0;
}
