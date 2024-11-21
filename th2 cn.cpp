#include<stdio.h>
int main(){
	int n;
	printf("moi ban nhap so nguyen tu 2-8");
	scanf("%d", &n);
	
	switch (n){
		case 2: 
		    printf("hom nay la thu 2");
		     break;
		case 3: 
		    printf("hom nay la thu 3");
		      break;
		case 4: 
		    printf("hom nay la thu 4");
		     break;
		case 5: 
		    printf("hom nay la thu 5");
		      break;
		case 6: 
		     printf("hom nay la thu 6");
		      break;
		      case 7: 
		    printf("hom nay la thu 7");
		      break;
		case 8: 
		     printf("hom nay la thu 8");
		      break;
		default:
			printf("sai dinh dang");
	}
	return 0;
}
