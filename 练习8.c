//输出 9*9 口诀。

#include <stdio.h>

int main(){
	printf("输出 9*9 口诀:\n");
	for(int i=1;i<=9;i++){
		for(int j=1;j<=i;j++){
			int k;
			k=i*j;
			printf("%d*%d=%d. ",i,j,k);
		}
		printf("\n");
	}
	return 0;
}
