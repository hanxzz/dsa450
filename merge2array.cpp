#include<iostream>
using namespace std;
int main(){
    int arr1[4] = {2, 4, 7, 10};
    int n = 4;

    int arr2[2] = {2, 3};
    int m = 2;

    int left = n-1;
    int right = 0;

    while(left>=0 && right<m){
        if(arr1[left] > arr2[right]){
            swap(arr1[left], arr2[right]);
        }
        left--;
        right++;
    }
    for(int i = 0;i<n;i++){
        cout << arr1[i]<<" ";
    }
    cout << endl;
    for(int i = 0;i<n;i++){
        cout << arr2[i]<<" ";
    }
}