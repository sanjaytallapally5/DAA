#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct job{
	char id;
	int deadline;
	int profit;
};
bool compare(job a,job b){
	return a.profit>b.profit;
}
int main(){
	int n;
	cout<<"enter no of jobs"<<endl;
	cin>>n;
	vector<job> jobs(n);
	for(int i=0;i<n;i++){
		cout<<"jobname  deadline    profit of"<<i<<endl;
		cin>>jobs[i].id>>jobs[i].deadline>>jobs[i].profit;
	}
	sort(jobs.begin(),jobs.end(),compare);
	int maxdeadline=0;
	for(auto job:jobs){
		maxdeadline=max(maxdeadline,job.deadline);
	}
	vector<char>slot(maxdeadline,'-');
	int totalprofit=0;
	int jobcount=0;
	for(auto job:jobs){
		for(int j=job.deadline;j>=0;j--){
			if(slot[j]=='-'){
				slot[j]=job.id;
				jobcount++;
				totalprofit+=job.profit;
				break;
			}
		}
	}
	for(int i=0;i<maxdeadline;i++){
		cout<<slot[i]<<endl;
	}
	cout<<"totalprofit: "<<totalprofit<<endl;
	cout<<"job count:"<<jobcount;
}
