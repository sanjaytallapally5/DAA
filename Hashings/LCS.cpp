#include <bits/stdc++.h>
using namespace std;
int lcs(vector<int> &a){
    unordered_set<int> set(a.begin(),a.end());
    int longest=0;
    for (int x : set) {
        if (set.find(x - 1)==set.end()) {
            int length=1;
            while(set.find(x+length)!=set.end()) {
                length++;
            }
            longest=max(longest,length);
}
    }
    return longest;
}
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    cout<<"\n enter elements: ";
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=lcs(a);
    cout<<"ANS: "<<ans;
}
