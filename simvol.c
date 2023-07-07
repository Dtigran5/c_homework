#include <stdio.h>
int main(){
	char simvol='a';
	printf("Enter yoor simvol(a-z,A-Z): ");
	scanf("%c", &simvol);
	if(simvol>=65 &&  simvol<=90) {
		printf("good \n");
	}else if(simvol>=97 && simvol<=122) {
			printf("Exellent \n");
		 } else {
			 printf("invalid simvol \n");
		}
	return 0;
}




