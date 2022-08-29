#include <iostream>
using namespace std;

void remove_int_from_arrays(int num[5], int deleteNumber, int length)
{

    for (int i = 0; i < length; i++)
    {
        if (num[i] == deleteNumber)
        {

            for (int j = i; j < length; j++)
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
            i--;
            length--;
        }
    }
    cout << "the number are: ";
    for (int i = 0; i < length; i++)
    {
        cout << num[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int deleteNumber;
    int num[5];
    //
    cout << "Enter five numbers: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
    }
    //
    int length = sizeof(num) / sizeof(num[0]);
    //
    cout << "Enter number for deleting: " << endl;
    cin >> deleteNumber;

    remove_int_from_arrays(num, deleteNumber, length);

    return 0;
}