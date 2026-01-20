#include<iostream>
using namespace std;
class Arithmetic {
public:
    int a,b;
    
    void getData(){
        cout<<"\n Enter 2 numbers : ";
        cin>>a>>b;
    }
    void showData(){
        cout<<"\n ----- Arithmatic Operator -----";
        cout<<"\n Addition = "<<a+b;
        cout<<"\n Substraction = "<<a-b;
        cout<<"\n Division = "<<a/b;
        cout<<"\n Multiplication = "<<a*b;
        cout<<"\n Modulo = "<<a%b;
    }
};
int main(){
    Arithmetic arith;
    arith.getData();
    arith.showData();
}