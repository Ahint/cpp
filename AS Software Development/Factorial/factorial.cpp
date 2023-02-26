#include <iostream>

using namespace std;

class Factorial
{
    int arr1[101];

public:
    void series(int n)
    {
        if (n == 0) // 0! factorial condition
        {
            arr1[0] = 1;
        }

        for (int i = 0; i < n; i++) // calculations
        {
            arr1[i] = (i + 1); // 1*2
        }
    }

    void display(int n)
    {
        for (int i = 0; i < n; i++) // print factorial series
        {
            cout << arr1[i] << " ";
        }
    }
};

int main()
{
    int n;

    while (1)
    {
        cout << "\n\tWARNING: Program is limited till 100th factorial series printing " << endl
             << "Enter the number: ";
        cin >> n;

        Factorial number;
        number.series(n);
        number.display(n);
    }

    return 0;
}

/*

Factorial of any number from 0 to 100:-

- AS Software Development

*/