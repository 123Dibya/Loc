//WAP TO ENTER TWO NUMBER AND PERFORM ALL ARITHMETIC OPERATION USING SWITCH CASE

#include <iostream>
using namespace std;
int main()
{
    int a,b,ch;
    cout<<"Enter two number:";
    cin>>a>>b;
    cout<<"1.ADDITION \n2.SUBSTRACTION \n3.MULTIPLICATION \n4.DIVISION \n5.MOD";
    cout<<"\nEnter your choice:";
    cin>>ch;
    switch(ch)
    {
        case 1:
        {
            cout<<"Addition:"<<a+b;
        }
        break;
        case 2:
        {
            cout<<"Substraction:"<<a-b;
        }
        break;
        case 3:
        {
            cout<<"Multiplication:"<<a*b;
        }
        break;
        case 4:
        {
            cout<<"Division:"<<a/b;
        }
        break;
        case 5:
        {
            cout<<"Mod:"<<a%b;
        }
        break;
        default:
        cout<<"Sorry,Invalid Choice";
    }

    return 0;
}