#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number till where you want to print factorial series: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        cout << i << " ";
        i++;
    }
}