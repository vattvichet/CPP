#include <iostream>
#include <cstring>
using namespace std;
void display_longest_word(string str)
{
    int strLength = str.length();
    int startIndex = 0, endIndex = 0;
    int minLength = strLength, maxLength = 0, currentLength;
    string largest;
    while (endIndex <= strLength)
    {
        if (str[endIndex] != '\0' && str[endIndex] != ' ')
            endIndex++;
        else
        {
            currentLength = endIndex - startIndex;

            if (currentLength > maxLength)
            {
                largest = str.substr(startIndex, currentLength);
                maxLength = currentLength;
            }
            endIndex++;
            startIndex = endIndex;
        }
    }
    cout << "The longest Word from our string is " << largest;
    //
    cout << endl;
}
int main()
{
    string a;
    cout << "Enter your string here: " << endl;
    getline(cin, a);
    display_longest_word(a);
}