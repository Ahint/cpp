#include <iostream>

using namespace std;

void display(int);

int main()
{
    int n;

    while (1)
    {
        switch (n)
        {
        case 0:
            exit(0);

        default:
            cout << "Enter 0 to exit \nEnter the number till where you want to print factorial series: ";
            cin >> n;
            display(n);
        }
    }
}

void display(int a)
{
    int i = 1;
    while (i <= a)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;
}
