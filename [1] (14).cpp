#include <iostream>
using namespace std;

void concatenateStrings(char* dest, const char* src)
{
    while (*dest)
    {
        dest++;
    }
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main()
{
    const int MAX_LENGTH = 100;
    char str1[MAX_LENGTH], str2[MAX_LENGTH];

    cout << "Enter the first string: ";
    cin.getline(str1, MAX_LENGTH);

    cout << "Enter the second string: ";
    cin.getline(str2, MAX_LENGTH);

    concatenateStrings(str1, str2);

    cout << "Concatenated string: " << str1 << endl;

    return 0;
}

