//只考虑了输入的十进制数是正数的情况。
#include<iostream>
using namespace std;
int main(){
	int dec;
	int result=0;
	cin>>dec;
	char bin[100];
	int counter=99;
	if(dec>0){
		while(dec>0){
	if(dec%2==0){
		bin[counter]='0';
		counter--;
		dec=dec/2;
	}else{
		bin[counter]='1';
		counter--;
		dec=(dec-1)/2;
	}
	}
		for(int i=counter+1;i<100;i++){
			if(bin[i]=='1'){
				result++;
			}
		}
		cout<<result;
	}
	return 0;
}
