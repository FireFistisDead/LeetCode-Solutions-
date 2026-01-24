#include<iostream>
#include<vector>
using namespace std;

class BubbleSort{
    public:
    BubbleSort(){}
    void bsr(vector<int>& arr, int n){
        if(n == 1) return;
        for(int i = 0; i < n - 1; i++){
            if(arr[i] > arr[i + 1]) swap(arr[i], arr[i + 1]);
        }
        bsr(arr, n - 1);
    }
};

int main(){
    vector<int> arr = {9, 90, 78, 99, 101010, 653};
    BubbleSort().bsr(arr, arr.size());
    for(int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    return 0;
}