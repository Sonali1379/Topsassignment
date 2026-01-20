#include<iostream>
using namespace std;
int main(){
    int number,i,mul;
    cout << "Enter a number: ";
    cin >> number;
    for(i = 1; i <= 10; i++){
        mul = number * i;
        cout << "\n "<< number << " * " << i << " = " << mul;
        
    }
}