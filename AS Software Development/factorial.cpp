#include <iostream>

using namespace std;

void factorial(int a) //3
{
    int arr1[a]; //3

    for (int b = 0; i <=a; i++)
    {
        b>>arr1
    }
    
                                                
    for (int i = 0; i <= a; i++)         //i<=3       
    {
        if ((arr1[i-2] * arr1[i - 1])<0)
        {
            arr1[i]=1;
        }else{
            arr1[i] = (arr1[i-2] * arr1[i - 1]);   
        }
                                                        
    }

    cout<<arr1[a]*arr1[a+1];
}

int main()
{
    int n;
    cout << "Enter the number for factorial: ";
    cin >> n;

    factorial(n);

    return 0;
}

/*

2!

*/