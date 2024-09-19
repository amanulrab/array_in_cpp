#include<iostream>
#include<climits>
using namespace std;

int findMinimum(int arr[][3],int rowSize, int colSize){
    int minValue=INT_MAX;
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            minValue=min(minValue,arr[i][j]);
        }
    }
    return minValue;

}
int main(){
    int arr[3][3]={
        {4,7,9},
        {8,11,87},
        {4,1,8}
    };
    int rowSize=3;
    int colSize=3;
    int ans=findMinimum(arr,rowSize,colSize);
    cout<<"ans is "<<ans;
    return 0;
}