#include "stdio.h"
int main () {
	int n ;
	float tong, i;
	printf ("\n hay nhap n = ");
	scanf ("\n%d", &n);
	
	tong = 0;
	
	for ( i=1 ; i<=n ; i++) {
		
		tong = tong + 1/i;
		
	} printf ("\n tong(%d) = %f",n, tong);
}
