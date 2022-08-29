#include <iostream>
#include <cstring>

using namespace std;

string swap_case(string &str)
{
    int length = str.length();
    for (int i = 0; i < length; i++)
    {
        int c = str[i];
        if (islower(c))
        {
            str[i] = toupper(c);
        }
        else if (isupper(c))

        {
            str[i] = tolower(c);
        }
    }
    return str;
}

int main()
{

    string str;
    cout << "Enter the strings" << endl;
    //
    getline(cin, str);
    //
    string newString = swap_case(str);
    //
    cout << "The new strings are: " << str << endl;
    return 0;
}