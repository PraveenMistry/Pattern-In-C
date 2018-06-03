#include<stdio.h>

void main(){
	int i,j,k=1;
	for(i=1;i<=7;i+=2)
	{
		for(j=1;j<=i;j++)
			printf("%d",j);
		
		printf("\n");
	}
	for(i=5;i>=1;i-=2)
	{
		for(j=1;j<=i;j++)
			printf("%d",j);
		
		printf("\n");
	}
}


// 1
// 123
// 12345
// 1234567
// 12345
// 123
// 1