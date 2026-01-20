#include<iostream>
using namespace std;
class Calculator {
public:
    double num1, num2;
    void getData() {
        cout << "\n Enter 2 numbers (num1>num2): ";
        cin >> num1 >> num2;
    }
    void showData(){
        cout<<"\n Addition = "<<(num1 + num2);
        cout<<"\n Subtraction = "<<(num1 - num2);
        cout<<"\n Multiplication = "<<(num1 * num2);
        if(num2 != 0){
            cout<<"\n Division = "<<(num1 / num2);
        } 
        else {
            cout<<"\n Division = Undefined (division by zero)"; 
        }
    }
};
int main() {
    Calculator calc;
    calc.getData();
    calc.showData();
}