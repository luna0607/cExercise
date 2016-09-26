#include<iostream>
using namespace std;
int main(){
	int x,y;
	cin>>x;
	int initialX=x;
	cin>>y;
	if(y!=0){
	for(int i=0;i<y-1;i++){
		x=x*initialX;
	}
	cout<<x;
	}
	else{
		cout<<1;
	}
	return 0;
}
