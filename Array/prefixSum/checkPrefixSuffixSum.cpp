#include<iostream>
#include<vector>
using namespace std;

//6 2 4 3 1
//total sum =16
//prefix sum = 6
//suffix sum = 10

bool checkPrefixSuffixSum(vector<int> &v){
    int total_sum=0;
    for(int i=0; i<v.size(); i++){
        total_sum+=v[i];
    }
    int prefix_sum=0;
    for(int i=1; i<v.size();i++){
        prefix_sum += v[i-1];
        int suffix_sum = total_sum - prefix_sum;

        if(suffix_sum==prefix_sum){
            return true;
        }
    }
    return false;
}

int main(){

    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    bool ans =checkPrefixSuffixSum(v);
    cout<<"ans is: "<<ans;
   

    return 0;
}