#include<iostream>
using namespace std;


class RecursiveReversePrint{

    public:
        void printreverse(int n){
            if(n == 0) return;
            cout << n << " ";
            printreverse(n - 1);
        }
};


int main(){
    int n;
    cout << "Enter N: ";
    cin >> n;
    RecursiveReversePrint().printreverse(n);
}