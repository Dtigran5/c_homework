#include <stdio.h>
int main() {
	int year = 0;
	printf("Enter your year: ");
	scanf("%d", &year);
			
	if(year % 4 == 0){
			printf("leap year");
	}else {
			printf("year is not leap");

	}
	return 0;
}
