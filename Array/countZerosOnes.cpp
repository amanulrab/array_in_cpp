#include<iostream>
// #include <climits>
using namespace std;

int countZeros(int arr[],int size){
    int countZeros=0;
    for(int i=0; i<size; i++){
        if(arr[i]==0){
          countZeros++;
          }    
    

}
return countZeros;
}

int countOnes(int arr[],int size){
    int countOnes=0;
    for(int i=0; i<size; i++){
        if(arr[i]==1){
          countOnes++;
          }    
    

}
return countOnes;

}


int main(){
     int arr[]={1,1,0,0,0};
     int size=5;
     int ans1=countOnes(arr,size);
     int ans2=countZeros(arr,size);

     cout<<"Zeros\n"<<ans2;
     cout<<"\nOnes"<<endl<<ans1;

    

    return 0;
}