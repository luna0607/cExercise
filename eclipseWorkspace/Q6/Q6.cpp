//passed8/9,no clue

#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int jieCheng(int n);
//double sin(double x);
int main(){

	int r,s;
	cin>>r;
	cin>>s;
	if(r*r<=s*s){
		 cout<<setiosflags(ios::fixed);
		 cout.precision(6);
		cout<<sqrt(sin(r)*sin(r)+sin(s)*sin(s));
	}else{
		 cout<<setiosflags(ios::fixed);
				 cout.precision(6);
		cout<<sin((double)((r*s)/2));
	}
return 0;
}


/*
double sin(double x){
double single;
double result=0;
for(int i=1;i<100;i++){
single=((pow(-1,i-1))*(pow(x,(double)2*i-1)))/(jieCheng(2*i-1));
cout<<single<<endl;
result=result+single;
}

return result;
}
*/
int jieCheng(int n){
	int resulT=1;
	for(int i=1;i<=n;i++){
		resulT=resulT*i;
	}
	return resulT;
}
