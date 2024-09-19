#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int i=0;
    int j=n-1;

        while(i<j){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
        }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
        }

int main(){
    int arr[]={ 3, 4, 6 ,2 ,8};
    int n=5;
    reverseArray(arr,n);
}