#include <iostream>
using namespace std;
void maxmin(int arr[],int &min,int &max,int i,int j){
	if(i==j){
	max=min=arr[i];
	}
	else if(i==j-1){
		if(arr[i]>arr[j]){
			max=arr[i];
			min=arr[j];
		}
		else {
			max=arr[j];
			min=arr[i];
			
		}
	}
	else {
		int mid=(i+j)/2;
		int min1,max1;
		maxmin(arr,min,max,i,mid);
		maxmin(arr,min1,max1,mid+1,j);
		if(max<max1){
			max=max1;
		}
		if(min>min1){
			min=min1;
		}
	}
}
int main(){
int a[100];
	int x,n;
	cout<<"enter the size"<<endl;
	cin>>n;
	cout<<"enter elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int min,max;
	maxmin(a,min,max,0,n-1);
	cout<<"max=  "<<max<<endl;
	cout<<"min=  "<<min<<endl;
}
