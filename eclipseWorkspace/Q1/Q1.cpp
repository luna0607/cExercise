#include<iostream>
using namespace std;
int main(){
	int m,n,temp,counter;
	counter=0;
cin>>m;
cin>>n;
if(m<n){
	temp=m;
	m=n;
	n=temp;
}
for(int i=n;i<=m;i++){
	if(i%2!=0){
		counter+=i;
	}
}
cout<<counter;
	return 0;
}
