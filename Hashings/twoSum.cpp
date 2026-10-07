#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &arr,int target){
    unordered_map<int,int> map;
    for(int i=0;i<arr.size();i++){
        int x=target-arr[i];
        if(map.find(x)!=map.end()){
            return {map[x],i};
        }
        map[arr[i]]=i;
    }
    return{};
}
int main(){
    int n;
    cout<<"enter number of elments: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"\n enter the elemnts: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the target: ";
    int target;
    cin>>target;
    vector<int> ans=twoSum(arr,target);
    cout<<"The two numbers are:"<<ans[0]<<"  "<<ans[1]<<endl;

    
}