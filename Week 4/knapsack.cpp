#include<iostream>
#include<algorithm>
using namespace std;
void knapsack(float w[],float p[],int M,int n)
{
	float profit=0;
	float ratio[100];
	float ans[n]={0};
	int i;
	for( i=0;i<n-1;i++)
	{
		ratio[i]=p[i]/w[i];
	}
	int weight=0;
	sort(ratio,ratio+n);
	while(weight<M)
	{
		if(weight+w[i]<=M)
		{
	    	weight=weight+w[i];
	    	profit=profit+p[i];
	    	ans[i]=1;
    	}
    	else
    	{
	    	ans[i]=(M-weight)/w[i];
	    	profit=profit+(ans[i]*p[i]);
	    	weight=M;
    	}
    	i--;
	}
  	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<"  ";
	}
	cout<<"profit="<<profit<<endl;
    
}
int main()
{
	float w[100];
	float p[100];
	int M;
	float profit=0;
	int n;
	cout<<"enter size of array"<<endl;
	cin>>n;
	cout<<"enter total weight  ";
	cin>>M;
	cout<<"enter weight and profit"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"enter w and p "<< i <<endl;
		cin>>w[i];
		cin>>p[i];	
	}
    knapsack(w,p,M,n);
}
