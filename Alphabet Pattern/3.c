#include<stdio.h>

void main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=5;j>=i;j--){
			printf("%c",'A'-1 +i);
		}
		printf("\n");
	}
}


  // AAAAA
  // BBBB
  // CCC
  // DD
  // E