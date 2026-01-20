#include<iostream>
using namespace std;
int main(){
    cout<<"\n Enter a string: ";
    string str;
    cin>>str;
    string rev;
    for(int i=str.length()-1;i>=0;i--){
        rev+=str[i];
    }
    if(str==rev){
        cout<<"\n The string is a palindrome.";
    }
    else{
        cout<<"\n The string is not a palindrome.";
    }
}