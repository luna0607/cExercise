//不知道为什么只通过了八个测试用例
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int up[n];
int down[n];
int temp=1;
for(int counter=0;counter<n;){
	if(temp%2==1){
	for(int i=0;i<temp;i++){
	up[counter]=temp-i;
	down[counter]=i+1;
	counter++;}
	}else{
		for(int i=0;i<temp;i++){
			up[counter]=i+1;
			down[counter]=temp-i;

			counter++;
			}
	}
	temp++;
}
cout<<up[n-1]<<"/"<<down[n-1];
	return 0;
}
