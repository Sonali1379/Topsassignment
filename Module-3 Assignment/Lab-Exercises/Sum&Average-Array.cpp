#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    float average;
    cout<<"\n Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"\n Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    average=(float)sum/n;
    cout<<"\n Sum of array elements = "<<sum;
    cout<<"\n Average of array elements = "<<average;
}