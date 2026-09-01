#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    // getline() is used to take the complete line as input,
    // including spaces.
    getline(cin, s);

    /*
    stringstream is used to read and separate data from a string
    just like cin reads data from the keyboard.

    When we use:
        stringstream ss(s);

    the string s is given to the stringstream object.

    Then, when we use:
        ss >> word;

    stringstream reads one word at a time.
    It automatically uses whitespace (such as spaces) to separate
    the words.

    Example:
        Input: "Hello Deng Hui"

        First  -> "Hello"
        Second -> "Deng"
        Third  -> "Hui"

    The while loop continues until there are no more words to read.
    */

    // We can also create an empty stringstream first and then
    // put the string into it using <<.
    // stringstream ss;
    // ss << s;

    // Here, the string s is passed directly to the stringstream
    // constructor when the object is created.
    stringstream ss(s);

    string word;
    int cnt = 0;

    // ss >> word reads one word at a time.
    // Each successful extraction gives us the next word.
    while (ss >> word)
    {
        cout << word << endl;
        cnt++;
    }

    // cnt stores the total number of words.
    cout << cnt << endl;

    /*
    Input:
        Hello Deng Hui

    Output:
        Hello
        Deng
        Hui
        3
    */

    return 0;
}