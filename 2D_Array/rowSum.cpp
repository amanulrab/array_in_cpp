#include<iostream>
#include<climits>
using namespace std;

// int findMinimum(int arr[][3],int rowSize, int colSize){
//     int minValue=INT_MAX;
//     for(int i=0; i<rowSize; i++){
//         for(int j=0; j<colSize; j++){
//             minValue=min(minValue,arr[i][j]);
//         }
//     }
//     return minValue;

// }

// void rowSum(int arr[][3],int rowSize, int colSize){
//      for(int i=0; i<rowSize; i++){
//         int sum=0;
//         //har row k liye starting me sum 0 hai
//         for(int j=0; j<colSize; j++){
//             sum=sum+arr[i][j];
//         }
//         // jab sare column ke elment add karliye hai
//         //toh fir print kar do
//         cout<<sum<<endl;
//     }
// }

// void colSum(int arr[][3],int rowSize, int colSize){
//      for(int j=0; j<colSize; j++){
//         int sum=0;
//         //har row k liye starting me sum 0 hai
//         for(int i=0; i<rowSize; i++){
//             sum=sum+arr[i][j];
//         }
//         // jab sare column ke elment add karliye hai
//         //toh fir print kar do
//         cout<<sum<<endl;
//     }
// }

int diagonalSum(int arr[][3],int rowSize, int colSize){
    int sum=0;
     for(int i=0; i<rowSize; i++){  
        for(int j=0; j<colSize; j++){
            if(i==j){
                sum=sum+arr[i][j];
            }
        }
    }
    return sum;
}
int main(){
    int arr[3][3]={
        {4,7,9},
        {8,11,87},
        {4,1,8}
    };
    int rowSize=3;
    int colSize=3;
    // int ans=findMinimum(arr,rowSize,colSize);
    // cout<<"ans is "<<ans;

    // rowSum(arr,rowSize,colSize);
    // colSum(arr,rowSize,colSize); 
      int ans = diagonalSum(arr,rowSize,colSize); 
      cout<<ans;
    return 0;
}