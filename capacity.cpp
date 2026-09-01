#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s = "Hello world";

    // size() returns the current number of characters in the string.
    // cout << s.size() << endl;

    // max_size() returns the maximum number of characters that the string
    // can theoretically hold.
    // cout << s.max_size() << endl;

    string a = "sdkcslkvsnvvevpcmmksvmcsovns kvdsocns";

    // capacity() returns the amount of memory currently allocated for the string.
    // A string can automatically increase its capacity when more space is needed.
    // cout << a.capacity() << endl;

    // clear() removes all characters from the string and makes its size 0.
    // a.clear();

    string s = "hello";

    s.clear();

    // empty() checks whether the string contains any characters.
    // It returns true if the string is empty and false if it is not empty.
    // We can directly use it in an if condition.
    if (s.empty() == true)
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;

    string c;
    cin >> c;

    // resize(5) changes the size of the string to 5 characters.
    // If the original string is longer, the extra characters are removed.
    c.resize(5);

    // resize(8, 'x') increases the string size to 8.
    // If new characters need to be added, 'x' is used to fill the new positions.
    c.resize(8, 'x');

    cout << c.size() << endl;
    cout << c << endl;

    return 0;
}