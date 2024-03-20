//WAP TO TAKE A INPUT AS A NUMBER AND CHECK WETHER IT IS POSITIVE,NEGATIVE OR ZERO

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    if(a>0)
    {
        cout<<"Positive number";
    }
    else if(a==0)
    {
        cout <<"Zero";
    }
    else
    {
        cout <<"Negative number";
    }
    return 0;
}
