#include <iostream>
using namespace std;
void merge(int a[],int l,int mid,int h){
	int i=l;
	int j= mid+1;
	int b[100];
	int k=l;
	while(i<=mid&&j<=h){
		if(a[i]<a[j]){
			b[k]=a[i];
			i++;
		}
		else{
		   b[k]=a[j];
		   j++;
		}
	k++;
	}
while(i<=mid){
	b[k]=a[i];
	i++;
	k++;
}
while(j<=h){
	b[k]=a[j];
	j++;
	k++;
}
for(k=l;k<=h;k++){
	a[k]=b[k];
}
}
void mergesort(int arr[], int low, int high){
	if(low>=high){
		return;
	}
	int mid=(low+high)/2;
	mergesort(arr,low,mid);
	mergesort(arr,mid+1,high);
	merge(arr,low,mid,high);
}
int main(){
	int a[100];
	int n;
	cout<<"enter the size"<<endl;
	cin>>n;
	cout<<"enter elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	mergesort(a,0,n-1);
	cout<<"sorted arry"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
