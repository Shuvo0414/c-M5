#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "HelloWorld";

    // string b = "A";

    // assign() replaces the entire current string with a new string.
    // a = "Gelo";
    // a.assign("Gelo");
    // cout << a << endl;

    // erase() removes characters from a string.
    // The first parameter is the starting index.
    // The second parameter is the number of characters to remove.
    //
    // a.erase(4, 1);
    // Starting from index 4, one character is removed.
    // "HelloWorld" → "HellWorld"
    //
    // If we provide only one parameter:
    // a.erase(4);
    // All characters from index 4 to the end are removed.
    // "HelloWorld" → "Hell"

    // replace() removes a specific number of characters and
    // puts a new string in their place.
    //
    // a.replace(4, 3, "so");
    // Starting from index 4, three characters are removed
    // and replaced with "so".
    // "HelloWorld" → "Hellsorld"
    //
    // a.replace(4, 0, "so");
    // Here, 0 characters are removed, so "so" is simply inserted
    // at index 4.
    // "HelloWorld" → "HellsoWorld"

    // insert() adds a string at a specific index without removing
    // any existing characters.
    //
    // The first parameter is the index where we want to insert.
    // The second parameter is the string we want to insert.
    //
    // "HelloWorld"
    //      ↓
    // Index 5 is between 'o' and 'W'.
    //
    // a.insert(5, "hui");
    // "HelloWorld" → "HellohuiWorld"

    a.insert(5, "hui");

    cout << a << endl;

    return 0;
}