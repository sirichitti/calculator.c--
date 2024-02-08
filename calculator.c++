#include<iostream>
using namespace std;
int main()
{
    int i;
    float a,b;
    cout<<"enter the operands";
    cin>>a>>b;
    cout<<"1.addition,2.subtraction,3.multiplication,4.division";
    cout<<"enter your choice";
    cin>>i;
    switch(i){
        case 1:
            cout<<"addition of"<<a<<"+"<<b<<"is"<<a+b;
            break;
        case 2:
            cout<<"subtraction of"<<a<<"+"<<b<<"is"<<a-b;
            break;
        case 3:
            cout<<"multiplication of"<<a<<"+"<<b<<"is"<<a*b;
            break;
        case 4:
            cout<<"division of"<<a<<"+"<<b<<"is"<<a/b;
            break;
        default :
            cout<<"invalid operator";
    }
}
