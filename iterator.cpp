#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // We can access each character using its index.
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }

    // begin() returns an iterator that points to the first character
    // of the string.
    //
    // An iterator behaves similarly to a pointer, so if we want to get
    // the actual character instead of the iterator, we need to
    // dereference it using *.
    //
    // *s.begin() → gives the first character of the string.
    cout << *s.begin() << endl;

    // end() returns an iterator that points to the position just AFTER
    // the last character of the string.
    //
    // It does NOT point to a valid character, so we cannot use *s.end()
    // to get the last character.
    //
    // By doing s.end() - 1, we move the iterator one position backward
    // and reach the last character.
    cout << *(s.end() - 1) << endl;

    /*
    Iterator:

    An iterator is an object used to move through the elements of a
    container, such as a string or vector.

    It works similarly to a pointer. begin() gives an iterator pointing
    to the first element, and we can move the iterator forward using ++.

    For example:

    s.begin() → points to the first character
    ++it       → moves to the next character
    s.end()   → points just after the last character

    We use *it to access the actual value at the position where the
    iterator is pointing.
    */

    // string::iterator can be used to declare a string iterator manually.
    //
    // string::iterator it;
    //
    // Here, string is the class/type and iterator is a type defined
    // inside the string class.

    // auto automatically detects the type of 'it'.
    // Here, the compiler understands that it is a string iterator
    // because s.begin() returns a string iterator.
    for (auto it = s.begin(); it < s.end(); it++)
    {
        // *it gives the actual character where the iterator is pointing.
        cout << *it << endl;
    }

    return 0;
}

/*
### String Iterator

An **iterator** is an object used to move through the elements of a container such as a `string` or `vector`. It works similarly to a pointer. `begin()` returns an iterator pointing to the **first character**, while `end()` returns an iterator pointing **just after the last character**. To get the actual character from an iterator, we use the dereference operator `*`. For example, `*s.begin()` gives the first character and `*(s.end() - 1)` gives the last character. We can declare an iterator using `string::iterator`, or use `auto` so C++ automatically detects the iterator type. In a loop, `it++` moves the iterator to the next character and `*it` gives the current character.

**Example:**

cout << *s.begin();       // First character
cout << *(s.end() - 1);   // Last character

for (auto it = s.begin(); it < s.end(); it++)
{
    cout << *it;
}


*/