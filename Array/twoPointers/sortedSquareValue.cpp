#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//-10 -3 2 4 5
//left ptr =3
//right ptr= 2
//ans=[100,25,16,9,4]

void sortedSquareArray(vector<int> &v){
   vector<int> ans;
   int left_ptr=0;
   int right_ptr=v.size()-1;

   while(left_ptr<=right_ptr){
   if(abs(v[left_ptr])<abs(v[right_ptr])){
    ans.push_back(v[right_ptr]*v[right_ptr]);
    right_ptr--;
   } 
   else{
    ans.push_back(v[left_ptr] * v[left_ptr]);
    left_ptr++;
   }  
}
reverse(ans.begin(),ans.end());
   for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
   }
   cout<<endl;
// for(int a : ans){
//     cout<<a<<" ";
// }
// cout<<endl;
}
int main(){

    int n;
    cin>>n;

    vector<int> v;
    

    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sortedSquareArray(v);
    
    return 0;
}

