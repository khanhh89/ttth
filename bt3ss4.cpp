#include<stdio.h>
int main(){
	int num;
	printf("moi ban nhap vao 1 so nguyen  ");
	scanf("%d", &num);
	
	if (num % 3 == 0 && num % 5 == 0 ){
	printf("%d chia het cho ca 3 va 5.\n", num);
} 
	else if (num % 3 == 0){
		printf("%d chia het cho 3 khong chia het cho 5.\n ", num);
		
	} 
	else if (num % 5 == 0 ){
		printf("%d chia het cho 5 khong chia het cho 3.\n", num);
		
	}
	else {
		printf(" %d khong chia het cho ca 3 va 5.\n ",num );
	}
	
	return 0;
}
	
