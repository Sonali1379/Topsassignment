#include<iostream>
using namespace std;
int main(){
    float marks;
    cout << "Enter your marks: ";
    cin >> marks;

    char grade;

    if(marks >= 90){
        grade = 'A';
    }
    else if(marks >= 80){
        grade = 'B';
    }
    else if(marks >= 70){
        grade = 'C';
    }
    else if(marks >= 60){
        grade = 'D';
    }
    else{
        grade = 'F';
    }

    cout << "Your grade is: " << grade;

    return 0;
}