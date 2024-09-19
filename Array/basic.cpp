#include<iostream>
using namespace std;
void solve(int arr[],int size){
    arr[1]=50;

}

int main(){
    //creation
    // int arr[10];
    // bool arr[10];
    // char arr[15];
    //initialization
    // int arr[5]={10,20}; // [10 20 0 0 0 ]

    //input in array 
    // int arr1[10];
    // for(int i=0; i<5; i++){
    //     cin>>arr1[i];
    // }

    // //output in array
    // for(int i=0; i<5; i++){
    //     cout<<arr1[i];
    // }
    
    // fill method
    // int arr[4];
    // fill(arr,arr+4,101);
    // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3];
    // cout<<endl;
    int arr[]={10,20,30};
    int size=3;
    solve(arr,size);
    cout<<arr;
    return 0; 
}