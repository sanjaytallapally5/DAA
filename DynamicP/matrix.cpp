#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    int p[] = {10, 20, 30, 40};
    int n = 4;
    vector<vector<int>> dp(n,vector<int>(n,0));
    for(int len=2;len<n;len++) {
        for(int i=1;i<n-len+1;i++){
            int j=i+len-1;
            dp[i][j]=INT_MAX;
            for(int k=i;k<j;k++) {
                int cost=dp[i][k] + dp[k + 1][j]+ p[i - 1] * p[k] * p[j];
                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }
    cout << "Minimum multiplications = " << dp[1][n - 1];
    return 0;
}