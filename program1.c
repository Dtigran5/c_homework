#include <stdio.h>
struct Student{
	int age;
	char name[50];
	double grade;
};
int main(){
	struct Student arr[3];
	printf("write student data\n");
	for(int i=0;i<3;i++){
		printf("Student #%d\n", i+1);
		printf("age: ");
		scanf("%d", &arr[i].age);
		printf("name: ");
		scanf("%s", arr[i].name);
		printf("grade: ");
		scanf("%le", &arr[i].grade);
		printf("\n");
	}
	printf("write student data\n");
	for(int i=0;i<3;i++){
                printf("Student #%d\n", i+1);
                printf("age: %d\n ", arr[i].age);
                printf("name: %s\n ", arr[i].name);
                printf("grade: %le\n ", arr[i].grade);
                printf("\n");
        }

	int i;
	double a;
	for(i=0;i<3;i++){
		a=a+arr[i].grade;
	}
	double b=a/3;
	printf("%lf",b);
	double max=arr[0].grade;
	for(i=0;i<3;i++){
		if(arr[i].grade>b){

			max=arr[i].grade;
			printf("\n");

			printf("%s\n",arr[i].name);


		}
		
	}

	return 0;
}







	




	


