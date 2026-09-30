#include <iostream>
#include <vector>
using namespace std;
int main(){
    int W,n;
    cout<<"Enter maximum Capcity: ";
    cin>>W;
    cout<<"\n Enter Number of elements: ";
    cin>>n;
    vector<int> val(n);
    vector<int> wt(n);
    cout<<"Enter Values: ";
    for(int i=1;i<=n;i++){
        cin>>val[i];
    }
    cout<<"Enter weight of values :";
     for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(W,0));
    for(int i=0;i<n;i++){
        for(int w=0;w<W;w++){
            if (wt[i - 1] <= w)
                dp[i][w] = max(dp[i - 1][w],
                               val[i - 1] + dp[i - 1][w - wt[i - 1]]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }
    cout<<"maximum profit is: "<<endl;
    cout<<dp[n][W];

}