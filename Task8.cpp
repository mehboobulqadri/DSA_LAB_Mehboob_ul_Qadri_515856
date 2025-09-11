// Mehboob ul Qadri 515856
#include <iostream>
#include <string>

using namespace std;

int naivePatternMatch(const string &text, const string &pattern);

int main()
{
    // Initializatoins
    string text, pattern;

    // Taking user input
    cout << "Enter the text: ";
    getline(cin, text);

    cout << "Enter the pattern: ";
    getline(cin, pattern);

    int result = naivePatternMatch(text, pattern);

    if (result != -1)
    {
        cout << "Pattern found at index " << result << endl;
    }
    else
    {
        cout << "Pattern not found" << endl;
    }

    return 0;
}

int naivePatternMatch(const string &text, const string &pattern)
{
    int n = text.length();
    int m = pattern.length();

    // Checking the edge case for null string
    if (m == 0)
        return 0;

    // Try every possible starting position
    for (int i = 0; i <= n - m; i++)
    {
        int j = 0;
        while (j < m && text[i + j] == pattern[j])
        {
            j++;
        }
        if (j == m)
        {
            return i;
        }
    }

    return -1;
}
