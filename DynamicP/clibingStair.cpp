#include <iostream>
using namespace std;
int cs(int n){
    if(n<=2){
        return n;
    }
    int pre1=2,pre2=1;
    for(int i=3;i<=n;i++){
        int curr=pre1+pre2;
        pre2=pre1;
        pre1=curr;
    }
    return pre1;
}
int main(){
    int n;
    cout<<"enter n value: ";
    cin>>n;
    cout<<" Steps :"<<cs(n);
}