#include <iostream>
using namespace std;
int binarysearch(int arr[],int x,int i,int j){
	if(i>j){
		return 0;
	}
	int mid=(i+j)/2;
	if(x==arr[mid]){
		return mid+1;
	}
	else if(x>arr[mid]){
		binarysearch(arr,x,mid+1,j);
	}
	else
	binarysearch(arr,x,i,mid-1);
}
int main(){
	int a[10];
	int x,n;
	cout<<"enter the size"<<endl;
	cin>>n;
	cout<<"enter elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"enter the number to search"<<endl;
	cin>>x;
	cout<<"found at   "<<binarysearch(a,x,0,6);
}
