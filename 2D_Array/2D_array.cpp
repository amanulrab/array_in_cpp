#include<iostream>
using namespace std;

int main(){

    // //creation
    // int arr[4][3];// garbage value in static array only

    //initialisation
    int arr[4][3]={  
        {10,20,30},
        {11,12,13},
        {15,16,17}
    
    };
    // int arr[3][2]={10,20,30,40,50,60};//another method to initialize 2d array

    // int arr[3][2]= {10,20};//other element will be zero

//access
// cout<<arr[2][1]<<endl;

//traverse the entire array row wise

int rowSize=3;
//int colSize=3; 
// for(int rowIndex=0; rowIndex<rowSize; rowIndex++){
//     for(int colIndex=0; colIndex<colSize; colIndex++){
//         cout<<arr[rowIndex][colIndex]<<" ";
//     }
//     cout<<endl;
// }

// col wise traversal in square matrix only
// for(int rowIndex=0; rowIndex<rowSize; rowIndex++){
//     for(int colIndex=0; colIndex<colSize; colIndex++){
//         cout<<arr[colIndex][rowIndex]<<" ";
//     }
//     cout<<endl;
// }


//column wise traversal for all matrix including rectangular
// for(int col=0; col<colSize; col++){
//     for(int row=0; row<rowSize; row++){
//         cout<<arr[row][col]<<" ";
//     }
//     cout<<endl;
// }
// //diagonal traversal in matrix in square matrix only compelxity n square
// for(int rowIndex=0; rowIndex<rowSize; rowIndex++){ 
//     for(int colIndex=0; colIndex<colSize; colIndex++){
//         if(rowIndex==colIndex)
//         cout<<arr[colIndex][rowIndex]<<" ";
//     }
//     cout<<endl;
// }

//diagonal print in linear time complexity
for(int i=0; i<rowSize; i++){
    cout<<arr[i][i]<<" ";
}

    return 0;
}
