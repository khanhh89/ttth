#include<stdio.h>
int main(){
	int age;
	printf("moi ban nhap vao 1 so nguyen  ");
	scanf("%d", &age);
	
	if (age > 0){
	printf("la so nguyen duong", age);
	} else {
		printf("la so nguyen am", age);
		
	}
	return 0;
	
}
