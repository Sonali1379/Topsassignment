#include<iostream>
using namespace std;
class Person{
    public :
    string name;
    int age;
    void getDataPerson(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
    }
    void showDataPerson(){
        cout<<"Name: "<<name;
        cout<<"Age: "<<age;
    }
};
class Student : public Person{
    public :
    int rollNo;
    void getDataStudent(){
        getDataPerson();
        cout<<"Enter Roll Number: ";
        cin>>rollNo;
    }
    void showDataStudent(){
        showDataPerson();
        cout<<"Roll Number: "<<rollNo;
    }
};
class Teacher : public Person{
    public :
    string subject;
    void getDataTeacher(){
        getDataPerson();
        cout<<"Enter Subject: ";
        cin>>subject;
    }
    void showDataTeacher(){
        showDataPerson();
        cout<<"Subject: "<<subject;
    }
};
int main(){
    Student s1;
    Teacher t1;
    s1.getDataStudent();
    t1.getDataTeacher();
}