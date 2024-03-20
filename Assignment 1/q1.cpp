//WAP TO PRINT NUMBERS FROM 1 TO 100 AND REPLACE MULTIPLES OF 3 WITH FIZZ ,MULTIPLES OF 5 WITH BUZZ 

#include <iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%3==0)
        {
            cout<<"Fizz"<<" ";
        }
        else if(i%5==0)
        {
            cout <<"Buzz"<<" ";
        }
        else
        {
            cout <<i<<" ";
        }
    }
    return 0;
}