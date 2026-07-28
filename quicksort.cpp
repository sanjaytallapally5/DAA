#include <iostream>
using namespace std;
int partition(int a[],int low,int high){
	int idx=low-1;
	int pivot=a[high];
	for(int i=low;i<high;i++){
		if(a[i]<pivot)
		{
		  idx++;
		swap(a[i],a[idx]);		
		}
	}
	idx++;
	swap(a[idx],a[high]);
	return idx;
}
void quicksort(int arr[],int low,int high){
	if(low>high){
		return ;
	}
	int pivot=partition(arr,low,high);
	quicksort(arr,low,pivot-1);
	quicksort(arr,pivot+1,high);
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
	quicksort(a,0,n-1);
	cout<<"sorted arry"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
