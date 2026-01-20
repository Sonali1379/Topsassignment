#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"\n Enter 2 numbers : ";
    cin>>a>>b;
    cout<<"\n ----- Arithmatic Operator -----";
    cout<<"\n Addition = "<<a+b;
    cout<<"\n Substraction = "<<a-b;
    cout<<"\n Division = "<<a/b;
    cout<<"\n Multiplication = "<<a*b;
    cout<<"\n Modulo = "<<a%b;


    cout<<"\n ----- Relational Operator -----";
    cout<<"\n Equal to : "<<(a==b);
    cout<<"\n Greater than : "<<(a>b);
    cout<<"\n Less than : "<<(a<b);
    cout<<"\n Not equal to : "<<(a!=b);
    cout<<"\n Greater than or equal to : "<<(a>=b);
    cout<<"\n Less than or equal to : "<<(a<=b);


    cout<<"\n ----- Logical Operator -----";
    cout<<"\n AND : "<<(a>b && a>0);
    cout<<"\n OR : "<<(a>b || a>0);
    cout<<"\n NOT : "<<!(a==b);


    cout<<"\n ----- Bitwise Operator -----";
    cout<<"\n Bitwise AND : "<<(a & b);
    cout<<"\n Bitwise OR : "<<(a | b);
    cout<<"\n Bitwise exclusive OR : "<<(a ^ b);
    cout<<"\n Bitwise complement : "<<(~a);
    cout<<"\n Shift left : "<<(a << 1);
    cout<<"\n Shift right : "<<(a>>1);


}