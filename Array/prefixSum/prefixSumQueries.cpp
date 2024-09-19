#include<iostream>
#include<vector>
using namespace std;

//index-> 0 1 2 3 4 5 6 
//vector->0 x1 x2......

//0 based indexing -> 0.....n-1
//1 based indexing -> 1.....n

//5 1 2 3 4
//0 5 1 2 3 4
// 0 5 6 8 11 15 -> prefix sum array
//l=1, r=3
//ans = v[r]-v[l-1]= v[3]-v[0]=8-0=8


void prefixSum(vector<int> &v){
    for(int i=1; i<v.size(); i++){
        v[i]=v[i-1]+v[i];
    }
    return;
}

int main(){

    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    vector<int> v(n+1,0);
    cout<<"enter the array elements"<<endl;
    for(int i=1;i<=n;i++){
       cin>>v[i];
    }
    // calculate prefix sum array
    for(int i=1; i<=n; i++){
        v[i]+=v[i-1];
    }
    
    int q;
    cout<<"enter the no of queries"<<endl;
    cin>>q;

    while(q--){
        int l,r;
        cout<<"enter the value of l and r"<<endl;
        cin>>l>>r;

        int ans=0;
        //ans = prefixsumarray[r] - prefixsumarray[l-1];
        ans=v[r]-v[l-1];
        cout<<"ans is: "<<ans<<endl;
    }
    return 0;
}