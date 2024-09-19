#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int target){
    //traverse the array
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}

int main(){
     int arr[]={10,20,30,40,50};
     int size=5;
     int target=40;
    bool ans= linearSearch(arr,size,target);
    cout<<"ans is\n"<<ans;
    return 0;
}