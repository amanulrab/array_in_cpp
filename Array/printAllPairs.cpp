#include<iostream>
using namespace std;

void printAllPairs(int arr[],int n){

//     for(int i=0; i<n; i++){
//         //for every i , we are running looping variable j from start to end
//         for(int j=0; j<n; j++){
//             cout<<arr[i]<<" "<<arr[j]<<endl;
//         }
//     }

//   //  if we start with inner loop i it will print lower triangle
//      for(int i=0; i<n; i++){
//         //for every i , we are running looping variable j from start to end
//         for(int j=i; j<n; j++){
//             cout<<arr[i]<<" "<<arr[j]<<endl;
//         }
//     }
    
//      for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<arr[i]<<" "<<arr[j]<<endl;
//         }
//     }

//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<" "<<arr[i]<<" "<<arr[j];
//         }
//         cout<<endl;
//     }

// for(int i=0; i<n; i++){
//         for(int j=n-1; j>=0; j--){
//             cout<<" "<<arr[i]<<" "<<arr[j];
//         }
//         cout<<endl;
//     }

// for(int i=0; i<n; i++){
//         for(int j=n-1; j>i; j--){
//             cout<<" "<<arr[i]<<" "<<arr[j];
//         }
//         cout<<endl;
//     }
   
   for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            cout<<" "<<arr[i]<<" "<<arr[j];
        }
        cout<<endl;
    }

}
 int main(){
    int arr[]={10,20,30,40};
    int n=4;
    printAllPairs(arr,n);

 }