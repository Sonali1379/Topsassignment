#include<iostream>
using namespace std;
class Rectangle{
    float length,width;
    public:
    void getData(){
        cout<<"\n Enter length & width of rectangle: ";
        cin>>length>>width;
    }
    void showData(){
        cout<<"\n Area of rectangle = "<<length * width;
    }
};
int main(){
    Rectangle rect;
    rect.getData();
    rect.showData();
}