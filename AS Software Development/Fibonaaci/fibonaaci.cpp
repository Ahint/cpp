#include <iostream>

using namespace std;

void fibonaaci(int a)
{
    int fibobox[a];

    for (int i = 1; i <= a; i++)
    {
        if (i == 1 || i == 2)
        {
            fibobox[i] = 1;
        }
        else
        {
            fibobox[i] = (fibobox[i - 2] + fibobox[i - 1]);
        }
    }

    cout<<"\t\t";
    
   for (int b = 1; b <= a; b++)
    {
        if (b == a)
        {
            cout << fibobox[a]<<".";
        }
        else
        {
            cout << fibobox[b] << ",";
        }
    }
}

int main()
{
    while (1)
    {
        int n;
        cout << "\n\tEnter 0 to exit\n\tWARNING: Program is limited till 46th term.\n\tEnter the term till where you want fibonaaci series: ";
        cin >> n;

        if (n==0)
        {
            exit(0);
        }
        
        fibonaaci(n);
    }

    return 0;
}

/*

Program is limited till 46th term.

-AS Software Development

*/
