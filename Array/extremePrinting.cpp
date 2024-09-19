#include<iostream>
// #include <climits>
using namespace std;

void extremePrint(int arr[],int size){
    int i=0;
    int j= size-1;

    while(i<=j){
        if(i==j){
            cout<<arr[i];
        }
        else{
    
        cout<<arr[i]<<" ";
       
        cout<<arr[j]<<" ";
        }
         i++;
        j--;
        }
    }




int main(){
     int arr[]={1,1,0,9,0};
     int size=5;
     extremePrint(arr,size);
    

    return 0;
}