#include <stdio.h>
int main() {
	int num = 0;
	printf("Enter num: ");
	scanf("%d", &num);
	if(num>10)
		num+=20;
		num*=10;
		num/=5;
		printf(" num is %d", num);
		return 0;
}
