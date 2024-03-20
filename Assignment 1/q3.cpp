//WAP TO ACCEPT A NUMBER AND PRINT THE SUM OF THE DIGITS USING WHILE LOOP

#include <iostream>
using namespace std;
int main()
{
    int n,s=0,d;
    cout<<"Enter a number:";
    cin>>n;
    do
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }while(n!=0);
    cout<<"Sum of the digits:"<<s;
    return 0;
}