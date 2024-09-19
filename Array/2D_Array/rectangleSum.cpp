#include<iostream>
#include<vector>
using namespace std;

//brute force approach
// int rectangleSum(vector<vector<int>> matrix,int l1,int r1,int l2, int r2){
//     int sum=0;
//     for(int i=l1; i<=l2; i++){
//         for(int j=r1; j<=r2; j++){
//             sum+=matrix[i][j];
//         }
//     }
//     return sum;
// }

//prefix sum in 2D array approach
int rectangleSum(vector<vector<int>> &matrix,int l1,int r1,int l2, int r2){
    int sum=0;

    //prefix sum array row wise
    for(int i =0; i<matrix.size(); i++){
        for(int j=1; j<matrix[0].size(); j++){
            matrix[i][j]+=matrix[i][j-1];
        }
    }
    //printing prefix sum array
    for(int i =0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=l1; i<=l2; i++){
        if(r1!=0){
        sum+=(matrix[i][r2]-matrix[i][r1-1]);//har col me r1 -> r2 ka sum including r1 and r2
        }
        else{
            //matrix [i][r1-1] =0
            sum+=matrix[i][r2];
        }
    }
    return sum;
}


int main(){

    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }

    int l1,r1,l2,r2;
    cout<<"enter l1,r1 and l2,r2"<<endl;
    cin>>l1>>r1>>l2>>r2;

    //printing the input array
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    int sum = rectangleSum(matrix,l1,r1,l2,r2);
    cout<<"sum is: "<<sum<<endl;

    return 0;
}