#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "Hello";
    string b = "World";

    // The + operator is overloaded for the string class.
    // Behind the scenes, when we use + with strings, C++ knows that
    // the strings should be concatenated (joined) together.
    // a += b;

    // append() performs the same type of string concatenation as +=.
    // We usually use += because it is shorter and easier to write.
    // a.append(b);

    // cout << a << endl;
    // cout << b << endl;

    /*
    The [] operator can be used to access or modify an existing character,
    but it cannot increase the size of the string.

    For example, "Hello" has a size of 5, so its valid indexes are 0 to 4.

    a[5] = 'A'; // This cannot be used to add a new character because
                // index 5 is outside the current string size.

    If we want to add a new character to the end, we need to use an
    operation such as push_back(), +=, or append(). These operations
    can increase the string's size and manage the required memory.

    For example:

    a[4] = 'A';        // Replaces the existing last character → "HellA"
    a.push_back('A');  // Adds a new character → "HelloA"
    a = "HelloA";     // Assigns a new string → "HelloA"

    std::string can dynamically manage its memory, so when we assign
    a larger string or add characters, it can allocate more memory when
    necessary.
    */

    // We can also assign a completely new string to the variable.
    // The old string is replaced by the new string.
    // a = "HelloA";

    string c = "A";

    // We can concatenate another string using the + operator.
    // a = a + c;

    // push_back() adds one character to the end of the string.
    // It increases the string's size by 1.
    a.push_back('A');

    // pop_back() removes the last character from the string.
    a.pop_back();
    a.pop_back();

    cout << a << endl;

    return 0;
}