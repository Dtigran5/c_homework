#include <stdio.h>
int main() {
	 int num = 0;
	 printf("Enter num: ");
	 scanf("%d", &num);
	 if(num % 2 == 1) {
		 printf("%d num is odd.", num);
	 } else {
		 printf(" %d num is even.", num);
	 }
	return 0;
}
