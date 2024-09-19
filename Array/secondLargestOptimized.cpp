#include<iostream>
#include<climits>
using namespace std;

int secondLargestElement(int arr[],int size){
    int max=INT_MIN;
    int secondmax= INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"first largest: "<<max<<endl;
    
    for(int i=0; i<size; i++){
        if(arr[i]>secondmax && arr[i]!=max){
            secondmax=arr[i];
        }
    }
    return secondmax;
}

int main(){
    int arr[]= {2,3,5,7,6,1,7};
    int n=7;

    int ans= secondLargestElement(arr,n);
    cout<<"second largest: "<<ans;
    
    return 0;
}