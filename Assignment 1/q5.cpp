//WAP TO ENTER RADIUS OF CIRCLE AND PRINT THE CIRCUMFERENCE,DIAMETER AND AREA

#include <iostream>
using namespace std;
int main()
{
    double r;
    cout<<"Enter radius of circle:";
    cin>>r;
    cout<<"Diameter:"<<2*r;
    cout<<"\nCircumference:"<<2*3.14*r;
    cout<<"\nArea:"<<3.14*r*r;
    return 0;
}