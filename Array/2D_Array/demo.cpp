#include <iostream>
#include<vector>
using namespace std;

double mean(vector<int> &v){
    int n=v.size();
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=v[i];
    }
    double res= (double)sum/n;
    return res;
}


int main() {
    
    int n;
    cin>>n;
    
    vector<int> v;
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    double ans = mean(v);
    cout<<ans;

    return 0;
}