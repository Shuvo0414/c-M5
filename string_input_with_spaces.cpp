#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;

    cin >> x;

    // When we enter an integer and press Enter, cin >> x reads only
    // the integer. The Enter key (newline '\n') remains in the input buffer.
    //
    // If we call getline() immediately, getline() sees that leftover
    // '\n' and thinks the input line is empty. Therefore, it does not
    // wait for us to enter the string.
    //
    // cin.ignore() removes that leftover '\n', so getline() can then
    // take the next complete line, including spaces.
    cin.ignore();

    // getchar() can also be used in a similar way.
    // getchar();

    string s;

    // getline() is used when we need to take a complete line as input,
    // including spaces.
    getline(cin, s);

    cout << x << endl;
    cout << s << endl;

    return 0;
}