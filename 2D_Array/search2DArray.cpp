#include<iostream>
#include<vector>
using namespace std;

//2d array with function

// bool search2dArray(int arr[][4],int rowSize,int colSize, int target){
//     for(int i=0; i<rowSize; i++){
//         for(int j=0; j<colSize; j++){
//             if(arr[i][j]==target){
//                 return true;
//             }
//         }

//     }
//     //agar element found nahi hua toh
//     return false;
// }
//vector pass by value
bool search2DArray(vector<vector<int>> arr,int target){
    int rowSize= arr.size();
    int colSize= arr[0].size();
for(int i=0; i<rowSize; i++){
    for(int j=0; j<colSize; j++){
        if(arr[i][j]==target){
        return true;
       }
    }
} 
   return false;
}

int main(){
//     int arr[3][4]={
//         {10,20,30,40},
//         {50,60,70,80},
//         {10,30,60,89}
//     };
// int rowSize=3;
// int colSize=4;
// int target=90;
// bool ans=search2dArray(arr,rowSize,colSize,target);
// cout<<"ans is: "<<ans;

//int arr[4][3]={0,0};

//vector<vector<int>> arr(4,vector<int>(3,0));

vector<vector<int>> arr(4,vector<int>(3,0));
int rowSize= arr.size();   //row size
int colSize = arr[0].size();  //column size 
int target =50;
cout<<"enter the array elements"<<endl; 
 for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
         cin>>arr[i][j];
            }
            cout<<endl;
        }

int ans=search2DArray(arr,target);
cout<<" ans is: "<<ans;
//print
//  for(int i=0; i<rowSize; i++){
//         for(int j=0; j<colSize; j++){
//             cout<<arr[i][j]<<" ";
//             }
//             cout<<endl;
//         }

return 0;
}