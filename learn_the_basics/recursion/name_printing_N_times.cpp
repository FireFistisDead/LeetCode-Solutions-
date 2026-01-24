#include<iostream>
using namespace std;
class NamePrint{
    int n;
    public:
        NamePrint(int n){
            this -> n = n;
        }
        void printName(int n){
            if(n == 0) return;
            cout << "puja ";
            printName(n - 1);
        }

};


int main(){
    int n;
    cout << "Enter The N: ";
    cin >> n;
    NamePrint(n).printName(n);
}