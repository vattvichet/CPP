#include <iostream>

using namespace std;

void sort_arrays(string country[5])
{
    string tempCountry;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (country[i] > country[j])
            {
                tempCountry = country[i];
                country[i] = country[j];
                country[j] = tempCountry;
            }
        }
    }
    cout << "The countries are :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << country[i] << endl;
    }
}

int main()
{
    string country[5];
    cout << "Enter 5 country : " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> country[i];
    }
    sort_arrays(country);

    return 0;
}