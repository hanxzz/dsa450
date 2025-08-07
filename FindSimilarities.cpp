#include<iostream>
using namespace std;
int main(){
        int n = 5;
    int arr1[5] = {1,2,3,4,5};
    int m = 4;
    int arr2[4] = {2,4,6,8};

    int simCount = 0;
	for(int i = 0;i<n;i++){
		for(int j = 0; j<m;j++){
			if(arr1[i] == arr2[j]){
				simCount++;
                break;
			}
		}
	}  
	cout <<simCount;
}