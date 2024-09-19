#include<iostream>
#include<vector>
using namespace std;

void ReverseArray(int arr[],int size){
    int i=0;
    int j=size-1;

    // while(i<j){
    //     swap(arr[i],arr[j]);
    //     i++;
    //     j--;
    // }
    //pro ki tarah

    // while(i<j){
    //     swap(arr[i++],arr[j--]);
    // }

   
   
}
 int main(){
    int arr[]={2,4 ,1,4,1};
    int size=5;
    ReverseArray(arr,size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
   return 0;
 }