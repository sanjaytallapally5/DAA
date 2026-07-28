#include <iostream>
using namespace std;
void powercheck(int a){
	if(a>0 && (a & (a-1))==0){
		cout<<"IT is a power of 2"<<endl;
	}
	else 
	cout<<"not a power"<<endl;
} 
int main(){
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	powercheck(n);
}
