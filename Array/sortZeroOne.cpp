#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void countZeroOne(int arr[],int n){
    int zeroCount=0;
    int oneCount=0;

    for(int i=0; i<n; i++){
    if(arr[i]==0){
       zeroCount++;

    }
    if(arr[i]==1){
        oneCount++;
    }

}

//insertion

// for(int i=0; i<zeroCount; i++){
//     arr[i]=0;
// }
// for(int i=zeroCount; i<n; i++){
//     arr[i]=1;
// }

// using fill method

// fill(arr,arr+zeroCount,0);
// fill(arr+zeroCount,arr+n,1);
   
}
 int main(){
    int arr[]={0,0 ,1,0,1};
    int n=5;
    // countZeroOne(arr,n);
    //print
    sort(arr,arr+n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
   
   return 0;
 }