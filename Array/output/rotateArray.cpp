#include<iostream>
using namespace std;

void rotateArray(int arr[],int n,int shift){
    int finalShift= shift%n;
    if(finalShift==0){
        //no need to anything
        return;
    }
    // step 1: copy last finalShift elements into a temp array
    int temp[10000];
    int index=0;
    for(int i=n-finalShift; i<n; i++){
        temp[index]= arr[i];
        index++;
    }
    //step 2: shift array elements by finalShift places
    for(int i=n-1; i>=0; i--){
             arr[i]=arr[i-finalShift];
       
    }
    
    //step 3: copy temp elements into original array
    for(int i=0; i<finalShift; i++){
        arr[i]=temp[i];
    }
  
}



int main(){
    int arr[]= {10,20,30,40};
    int n=4;
    //cylindrically rotate array by 2 places

    int shift =2;

    cout<<"before:"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rotateArray(arr,n,shift);

    cout<<"After:"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
   

    return 0;
}