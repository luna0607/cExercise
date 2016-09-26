#include<iostream>
using namespace std;
int main(){
int n=0;
cin>>n;
int array[n];
for(int i=0;i<n;i++){
	cin>>array[i];
}
int temp=array[0];
for(int i=0;i<n;i++){
if(array[i]<temp){
	temp=array[i];
}
}
cout<<temp;
	return 0;
}
