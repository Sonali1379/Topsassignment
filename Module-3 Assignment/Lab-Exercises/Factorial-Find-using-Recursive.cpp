#include <iostream>
using namespace std;
class Factfind
{
public:
    int num;
    int fact(int num){
        if(num==0 || num==1){
            return 1;
        }
        else{
            return num*fact(num-1);
        }
    }
    
         void getData()
        {
            cout << "\n Enter a number to find factorial: ";
            cin >> num;
        }
        void showData()
        {
            cout << fact(num);
        }

};
int main()
{
    Factfind f;
    f.getData();
    f.showData();
}