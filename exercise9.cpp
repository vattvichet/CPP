#include <iostream>
#include <cstring>

using namespace std;

void capitalize(string &str)
{
    int length = str.length();
    for (int i = 0; i < length; i++)
    {
        int c = str[i];
        if (islower(c))
        {
            str[i] = toupper(c);
        }
    }
}

// Driver code
int main()
{

    string str;
    cout << "enter the string" << endl;
    getline(cin, str);
    capitalize(str);
    cout << str << endl;
}