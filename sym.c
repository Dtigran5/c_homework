#include <stdio.h>
int main() {
	char sym = 'a';
	while(1) {
	printf("Enter capital letter: ");
	scanf(" %c", &sym);
		
		if(sym >= 65 && sym <= 90)
			printf("%c\n", sym + 32);

		else if (sym >=97 && sym <=122)
	
			printf("%c\n", sym-32);
		
		else 
			printf("Wrong letter\n");
	}
}
