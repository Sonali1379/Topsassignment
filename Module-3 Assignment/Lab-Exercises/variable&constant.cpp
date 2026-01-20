#include<iostream>
using namespace std;
int main(){
    int num1,num2,sum,age;
    float r;
    const float pi=3.14;
    double Area;
    char name[20];

    cout<<"\n Enter 2 values: ";
    cin>>num1>>num2;
    sum=num1+num2;
    cout<<"\n Sum of 2 numbers = "<<sum;
    cout<<"\n Enter your name : ";
    cin>>name;
    cout<<"\n Enter your age : ";
    cin>>age;
    cout<<"\n Enter the radius of circle : ";
    cin>>r;
    Area=pi*r*r;
    cout<<"\n Area of circle = "<<Area;
    
}