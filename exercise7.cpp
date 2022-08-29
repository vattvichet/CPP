#include <iostream>
#include <string>
using namespace std;
bool is_substring(string firstString, string secondString)
{

    if (secondString.size() > firstString.size())
    {
        return false;
    }

    for (int i = 0; i < firstString.size(); i++)
    {
        int j = 0;
        // If the first characters match
        if (firstString[i] == secondString[j])
        {
            int k = i;
            while (firstString[i] == secondString[j] && j < secondString.size())
            {
                j++;
                i++;
            }
            if (j == secondString.size())
            {
                return true;
            }
            else
            { // Re-initialize i to its original value
                i = k;
            }
        }
    }
    return true;
}

int main()
{
    string firstString, secondString;

    cout << "Enter first string:";
    getline(cin, firstString);

    cout << "Enter second string:";
    getline(cin, secondString);

    if (is_substring(firstString, secondString))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}