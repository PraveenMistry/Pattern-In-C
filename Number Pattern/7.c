#include<stdio.h>

void main(){
	int n, c, d, num = 1, space;
	
	printf("Enter any number (1-10): ");
	scanf("%d",&n);
	space=n-1;
	for(d=1; d<=n; d++)
	{
		num=d;
		for(c=1; c<=space; c++)
			printf(" ");
		space--;
		for(c=1; c<=d; c++)
		{
			printf("%d", num);
			num++;
		}
		num--;
		num--;
		for(c=1; c<d; c++)
		{
			printf("%d", num);
			num--;
		}
		printf("\n");
	}
}



// ---1
// --232
// -34543
// 4567654