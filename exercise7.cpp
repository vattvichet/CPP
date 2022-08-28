#include <iostream>
#include <string>
using namespace std;
int isSubstring(string s1, string s2);
string s1, s2;
int result;
int String1 = s1.length();
int String2 = s2.length();
int j;

int main()
{
    cout << "user input s1 :";
    cin >> s1;
    cout << "user input s2 :";
    cin >> s2;
    result = isSubstring(s1, s2);
    if (result == -1)
        cout << "Not present it is false ";
    else if (result != -1)
        cout << "Present at index: " << result << " it is true";
    return 0;
}
// Returns true if s1 is substring of s2

int isSubstring(string s1, string s2)
{
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= String2 - String1; i++)
    {
        /* For current index i, check for
        pattern match */
        for (j = 0; j < String1; j++)
        {
            if (s2[i + j] != s1[j])
            {

                break;
            }
        }
        if (j == String1)
        {
            return i;
        }
    }
}