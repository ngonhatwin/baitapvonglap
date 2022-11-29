#include "stdio.h"
int main () {
	
	int n,tong ;
	tong = 0;
	n=0;
	while ( tong < 10000) {
		tong = tong + n;
		n++;
		
	}
	printf ("\n so nguyen duong n nho nhat sao cho 1+2+... +n >10000 la = %d ", n);
	printf ("\n tong cac so tu 1 den n la = %d", tong );
}



