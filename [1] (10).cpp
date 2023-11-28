#include <iostream>
using namespace std;

void replaceCharInString(string& str, char oldChar, char newChar)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == oldChar)
        {
            str[i] = newChar;
        }
    }
}

int main()
{
    string inputString;
    char oldChar, newChar;
    cout << "Enter a string: ";
    getline(cin, inputString);
    cout << "Enter the character to replace: ";
    cin >> oldChar;
    cout << "Enter the new character: ";
    cin >> newChar;
    replaceCharInString(inputString, oldChar, newChar);
    cout << "Modified string: " << inputString << endl;
    return 0;
}
