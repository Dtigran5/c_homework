#include <stdio.h>
int main() {
	int tiv = 0;
	printf("Please enter ypur number:");
	scanf("%d", &tiv);
	if(tiv%3 == 0 && tiv%5 == 0) {
		printf("program works exellent! \n");
	} else {
		printf("invalid program! \n");

	}
	return 0;
}
