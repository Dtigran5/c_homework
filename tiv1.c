#include <stdio.h>
int main(){
	int num = 0;
	int sum = 0;
	printf("Enter your number(num>12): ");
	do
	{
		scanf("%i", &num);
	}
	while(num < 12);

	
		while(num!=0){ 
			sum+=num % 10;
			num=num / 10;
	
		
	}

	printf("%i \n", sum);
	return 0;
}

