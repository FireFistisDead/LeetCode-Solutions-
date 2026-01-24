#include<iostream>
#include<vector>
using namespace std;
class IS{
    public:
        IS(){}
        void insertion_sort(vector<int>& arr){
            int j = 0;
            for(int i = 0; i < arr.size(); i++){
                j = i;
                while(j >0 && arr[j-1] > arr[j]){
                    swap(arr[j - 1], arr[j]);
                    j--;
                } 
            }
            for(int i = 0; i < arr.size(); i++){
                cout << arr[i] <<" ";
            }
        }   
};

int main(){
    vector<int> arr = {45, 67, 89, 0, 87};
    IS().insertion_sort(arr);
    return 0;
}