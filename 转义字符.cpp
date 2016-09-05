#include <iostream>
#include<unistd.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
		using std::cout;
		for(int i=0;i<100;i++) {
			 sleep(1);
            cout << "\a";
        }
return 0;
}
