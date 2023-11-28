#include <iostream>
#include <string>
using namespace std;

bool findWordInStatement(string statement, string word)
{
    int pos = statement.find(word);
    return (pos != string::npos);
}

int main()
{
    string statement, word;
    cout << "Enter a statement: ";
    getline(cin, statement);
    cout << "Enter the word to find: ";
    cin >> word;
    if (findWordInStatement(statement, word))
    {
        cout << "The word is present in the statement." << endl;
    }
    else
    {
        cout << "The word is not present in the statement." << endl;
    }
    return 0;
}

