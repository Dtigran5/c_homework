#include <stdio.h>
int main() {
	int num;
	int i;
	int c = 0;
       printf("Enter num: ");
	scanf("%d", &num);

for(i=1;i<=num;i++) {
	if(num % i == 0) {
		c++;
	}
}

if(c == 2) {
	printf("%d  is a prime number", num);
} else {
	printf("%d is not a prime number", num);
}
	return 0;
}

