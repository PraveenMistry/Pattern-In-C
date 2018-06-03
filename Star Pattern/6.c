#include<stdio.h>

void main(){
	int i,j,k;
	// Upper pattern
	for(i=1; i<=5; i++){
		for (j = 5; j>i; j--)
		{
			printf(" ");
		}
		for (k = 1; k<=(2*i)-1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	// Lower Pattern
	for (i = 4; i >= 1; i--)
	{
		for(j=4;j>i;j--){
			printf(" ");
		}
		for(k=1;k<=(2*i);k++){
			printf("*");
		}
		printf("\n");
	}

}




 //   	    *
 //       * * * 
 //     * * * * *
 //   * * * * * * *
 // * * * * * * * * *
 //   * * * * * * *
 //     * * * * *
 //       * * *
 //         *