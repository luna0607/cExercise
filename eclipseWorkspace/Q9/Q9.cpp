#include<iostream>
using namespace std;
int prime(int x);
int main(){
	int m,n;
	cin>>m;
	cin>>n;
	if(m<n){
		int temp;
		temp=m;
		m=n;
		n=temp;
	}
	int result=0;
	for(int i=n;i<=m;i++){
		if(prime(i)==1){
			result=result+i;
		}
	}
	cout<<result;
return 0;
}
int prime(int x){
	if(x==1||x==0){
		return 0;
	}
	if(x==2){
		return 1;
	}
	for(int i=2;i<x;i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
