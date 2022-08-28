#include <iostream>
using namespace std;
void verbose(int num)
{
    const char *first[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight",
                           "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
                           "eighteen", "nineteen"};
    const char *second[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if (num > 1000000)
    {
        cout << "Must be less than 1 million";
    }
    else if (num >= 1000)
    {
        verbose(num / 1000);
        cout << " thousand ";
        if (num % 1000)
        {
            if (num % 1000 > 100)
                verbose(num % 1000);
        }
    }
    else if (num >= 100)
    {
        verbose(num / 100);
        cout << " hundred ";
        if (num % 100)
        {
            verbose(num % 100);
        }
    }
    else if (num >= 20)
    {
        cout << second[num / 10];
        if (num % 10)
        {
            verbose(num % 10);
        }
    }

    else
    {

        cout << first[num];
    }

    return;
}
int main()
{
    int num;
    cout << "Enter number = ";
    cin >> num;
    verbose(num);
    return 0;
}