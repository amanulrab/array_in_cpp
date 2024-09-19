#include<iostream>
using namespace std;

// bool twoSum(int arr[], int n,int target){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(arr[i]+arr[j]==target){
//                 return true;
//           }
//         }
//     }
// }
 
 // using pair method
// pair<int,int> twoSum(int arr[], int n,int target){
//     pair<int,int> ans= make_pair(-1,-1);//if pair not found
//     //check all pairs
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(arr[i]+arr[j]==target){
//                 //found a pair that sum to target
//                 ans.first=arr[i];
//                 ans.second=arr[j];
//                 return ans;
//             }
//         }
//     }
// }
// by using array
void twoSum(int arr[], int n,int target,int ans[]){
   
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]+arr[j]==target){
                //found a pair that sum to target
                ans[0]=arr[i];
                ans[1]=arr[j];
                return;
            }
        }
    }
}


int main(){
    int arr[]= {10,5,20,15,30};
    int n=5;
    int target=35;
    // bool ans=twoSum(arr,n,target);
    // if(ans==true){
    //     cout<<"pair found";
    // }
    // else{
    //     cout<<"not found";
    // }

    // pair<int,int> ans= twoSum(arr,n,target);
    // if(ans.first==-1 && ans.second==-1){
    //     cout<<"pair not found\n";
    // }
    // else{
    //     cout<<"pair found: "<<ans.first<<", "<<ans.second<<endl;
    // }
    int ans[2]={-1,-1};
    
    twoSum(arr,n,target,ans);

    cout<<ans[0]<<" "<<ans[1];

    return 0;
}