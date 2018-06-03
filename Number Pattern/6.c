#include<stdio.h>

void main(){
	int i,j,k;
	for(i=5;i>=1;i--){
		for(j=5;j>=1;j--){
			if(j>i)
				printf(" ");
			else
				printf("%d",j);
		}
		printf("\n");
	}
}


// 54321
//  4321
//   321
//    21
//     1