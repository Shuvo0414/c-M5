#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Unlike a normal character array, a C++ string can dynamically manage
    // its memory and automatically increase its size when needed.
    string s1 = "hello";

    // We can change the value of the string whenever we want.
    // s1 = "gelo";

    string s2 = "Hello";

    // We can directly compare two strings using the == operator.
    // It compares their contents, not their memory addresses.
    if (s1 == s2)
    {
        cout << "Same";
    }
    else
    {
        cout << "Not Same";
    }

    return 0;
}