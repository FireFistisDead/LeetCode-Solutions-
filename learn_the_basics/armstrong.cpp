#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class ArmstrongNumber{
    int n;
    public:
        ArmstrongNumber(int n){
            this -> n = n;
        }
        void isArmstrong(){
            if(n == 0){
                cout << "Zero is an Armstrong number";
                return;
            } 
            int temp = 0;
            int temp2 = n;
            int length = to_string(n).size();
            int sum = 0;
            while(temp2 > 0){
                temp = temp2 % 10;
                sum += (int)pow(temp, length);
                temp2 = temp2 / 10;
            }
            if(sum == n) cout << n << " is Armstrong number";
            else cout << n << " is not Armstrong number";
        }
};

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    ArmstrongNumber(n).isArmstrong();
}