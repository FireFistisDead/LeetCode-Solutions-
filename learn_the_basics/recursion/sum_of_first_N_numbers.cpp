#include<iostream>
using namespace std;

class SumofNnumbers{
    public:
        void printNumbers(int n){
            if(n == 0) return;
            printNumbers(n - 1);
            cout << n<<" ";
        }
};

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    SumofNnumbers().printNumbers(n);
}