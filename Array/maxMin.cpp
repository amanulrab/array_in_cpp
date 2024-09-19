#include<iostream>
#include <climits>
using namespace std;

int findMax(int arr[],int size){
    int maxAns= INT_MIN;
    for(int i=0; i<size; i++){
        maxAns=max(maxAns,arr[i]);
       
    }
     return maxAns;
}

int findMin(int arr[],int size){
    int minAns= INT_MAX;
    for(int i=0; i<size; i++){
        minAns=min(minAns,arr[i]);
       
    }
     return minAns;
}



int main(){
     int arr[]={10,20,30,40,50};
     int size=5;
     int Min= findMin(arr,size);
     cout<<"min ans\n"<<Min;
     int Max= findMax(arr,size);
     cout<<"\nMax ans\n"<<Max;
     

    return 0;
}