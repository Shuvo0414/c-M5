#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // Access the first character using the [] operator.
    // This is the most commonly used way to access a character by index.
    cout << s[0] << endl;

    // at() can also be used to access a character by its index.
    // at(0) gives the first character, just like s[0].
    cout << s.at(0) << endl;

    // s.size() gives the number of characters in the string.
    // Since indexing starts from 0, s.size() - 1 gives the index of the last character.
    cout << s[s.size() - 1] << endl;

    // back() is a shortcut for accessing the last character of the string.
    cout << s.back() << endl;

    // front() is a shortcut for accessing the first character of the string.
    // It works similarly to s[0] and s.at(0).
    cout << s.front() << endl;

    return 0;
}