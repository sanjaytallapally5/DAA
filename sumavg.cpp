#include <iostream>
using namespace std;
int sumarr(int a[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+a[i];
	}
	return sum;
}
float avg(int a[],int n){
	int summ=sumarr(a,n);
	float avgg=summ/n;
	return avgg;
	
}
int main(){
	int arr[100],n;
	cout<<"enter size"<<endl;
	cin>>n;
	cout<<"enter elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Sum of the elemnts ="<<sumarr(arr,n)<<endl;
	cout<<"Avg of the elemnts ="<<avg(arr,n);
}
