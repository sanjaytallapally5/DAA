#include<iostream>
#include<algorithm>
using namespace std;
float fknapsack(int w[],int p[],int M,float profit){
	int ans[100];
	float ratio[100];
	int n=sizeof(w);
	int i;
	for( i=0;i<n;i++){
		ans[i]=0;
		ratio[i]=w[i]/p[i];
	}
	int weight=0;
	sort(ratio[0],ratio[n]);
	while(weight<M){
		if(weight+w[i]<=M){
		weight=weight+w[i];
		profit=profit+ratio[i];
		ans[i]=1;
	}
	else{
		ans[i]=(M-weight)/w[i];
		profit=profit+(ans[i]*ratio[i]);
		weight=M;
	}
	i++;
	}
  	for(int i=0;i<n;i++){
		cout<<ans[i]<<"  ";
}
return profit;
}
int main(){
	int w[100];
	int p[100];
	int M;
	float profit=0;
	int n;
	cout<<"enter size of array"<<endl;
	cin>>n;
	cout<<"enter total profit  ";
	cin>>M;
	cout<<"enter weight and profit"<<endl;
	for(int i=0;i<n;i++){
		cout<<"enter p and w of"<<i<<endl;
		cin>>w[i];
		cin>>p[i];	
	}
    fknapsack(w,p,M,profit);
	cout<<"profit="<<profit<<endl;
	}

