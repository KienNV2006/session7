#include <stdio.h>
int main(){
	int array[5];
	int i;
	printf("Moi ban nhap 5 phan tu trong mang\n");
	
	for(i = 0; i < 5;i++ ){
		printf("Moi ban nhap phan tu thu %d : ", i+1);
		scanf("%d", &array[i]);	
	}
	printf("Mang da duoc nhap la :  \n");
	for(i = 0; i < 5; i++){
		printf("array[%d] %d\n", i, array[i]);
	}
	return 0;
}