#include<iostream>
using namespace std;
int main(){
    int A[2][2], B[2][2], C[2][2],i,j;
    cout<<"\n Enter elements of matrix-A: ";
    for(i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>A[i][j];
        }
    }
    cout<<"\n Enter elements of matrix-B: ";
    for(i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>B[i][j];
        }
    }
    cout<<"\n Matrix-A is: ";
    for(i=0;i<2;i++){
        cout<<"|";
        for(int j=0;j<2;j++){
            cout<<"\t"<<A[i][j];
        }
        cout<<"|\n";
    }
    cout<<"\n Matrix-B is: ";
    for(i=0;i<2;i++){
        cout<<"|";
        for(int j=0;j<2;j++){
            cout<<"\t"<<B[i][j];
        }
        cout<<"|\n";
    }
    cout<<"\n Addition of two matrices: ";
    for(i=0;i<2;i++){
        cout<<"|";
        for(int j=0;j<2;j++){
            C[i][j]=A[i][j]+B[i][j];
            cout<<"\t"<<C[i][j];
        }
        cout<<"|\n";
    }
}