#include <iostream>

using namespace std;

void fibonaaci(int a)
{
    int fibobox[a];

    for (int i = 1; i <= a; i++)
    {
        if (i == 1)
        {
            fibobox[1] = 1;
        }
        else if (i == 2)
        {
            fibobox[2] = 1;
        }
        else if (i == 3)
        {
            fibobox[3] = 2;
        }
        else
        {
            fibobox[i] = (fibobox[i - 2] + fibobox[i - 1]);
        }
    }

    cout <<"\t \t"<< fibobox[a] << endl;
}

int main()
{
    while (1)
    {
        int n;
        cout << "\tEnter 0 to exit"<<endl<<"\tFor now 47th term has some problem"<<endl<<"\tEnter the term  where you want fibonaaci series's value: ";
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

47th term has some problem

-AS Software Development

*/