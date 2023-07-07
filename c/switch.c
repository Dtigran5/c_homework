#include <stdio.h>
int main() {
int mood=0;
int day=0;
printf("mood(1 if happy, 2 if bad): " );
scanf("%i", &mood);
printf("choose day(1-7): ");
scanf("%i", &day);
switch(day) {
	case 1:
		if(mood==1) { 
				printf( "read happy book1 \n");
		} else {
				printf(" read bad book1 \n");
		}
		break;
		
	case 2:
		if(mood==1) {
			       printf("read happy book2 \n");
		} else {
			       printf("read bad book2 \n");
		}
		break;
	case 3:
                if(mood==1) {
                               printf("read happy book3 \n");
                } else {
                               printf("read bad book3 \n");
                }
                break;
	case 4:
                if(mood==1) {
                               printf("read happy book4 \n");
                } else {
                               printf("read bad book4 \n");
                }
                break;
	case 5:
                if(mood==1) {
                               printf("read happy book5 \n");
                } else {
                               printf("read bad book5 \n");
                }
                break;
	case 6:
                if(mood==1) {
                               printf("read happy book6 \n");
                } else {
                               printf("read bad book6 \n");
                }
                break;
	case 7:
                if(mood==1) {
                               printf("read happy book7 \n");
                } else {
                               printf("read bad book7 \n");
                }
                break;
	default:
		printf(" don't read today is not your day \n");
	}
	return 0;

}
