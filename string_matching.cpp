#include <iostream>
#include <string>
using namespace std;

int findPattern(string text, string pattern)
{
    if (pattern.empty())
        return 0;

    for (int i = 0; i <= text.length() - pattern.length(); i++)
    {
        int j = 0;

        while (j < pattern.length() && text[i + j] == pattern[j])
            j++;

        if (j == pattern.length())
            return i;
    }

    return -1;
}

int main()
{
    cout << "Pattern at beginning: "
         << findPattern("hello world", "hello") << endl;

    cout << "Pattern at end: "
         << findPattern("hello world", "world") << endl;

    cout << "Pattern not present: "
         << findPattern("hello world", "abc") << endl;

    cout << "Empty pattern: "
         << findPattern("hello world", "") << endl;

    return 0;
}
