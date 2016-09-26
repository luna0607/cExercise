#include<iostream>
using namespace std;
int main(){
	string str;
	cin>>str;
	for(int i=0;i<str.size()-1;i++){
		cout<<str.at(i);
		cout<<" ";
	}
	cout<<str.at(str.size()-1);
	return 0;
}
