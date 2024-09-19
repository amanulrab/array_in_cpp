#include<iostream>
using namespace std;
// in same matrix
// void transposeMatrix(int arr[][3],int rowSize, int colSize){
//     for(int i=0; i<rowSize; i++){
//         for(int j=i; j<colSize; j++){
//             swap(arr[i][j],arr[j][i]);
//         }
//     }
// }
void transposeMatrix(int arr[3][3],int rowSize, int colSize){
    int temp[3][3];
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            temp[i][j]=arr[j][i];
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int arr[3][3]={
        {4,7,9},
        {8,9,8},
        {4,1,8}
    };
    int rowSize=3;
    int colSize=3;
    transposeMatrix(arr,rowSize,colSize);
    // for(int i=0; i<rowSize; i++){
    //     for(int j=0; j<colSize; j++){
    //         cout<<arr[i][j]<<" ";
    //         }
    //         cout<<endl;
    //     }
    
    return 0;
}