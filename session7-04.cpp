#include <stdio.h>
int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int array[n];
    printf("Nhap cac phan tu cua mang:\n");
    for(int i = 0; i < sizeof(array)/sizeof(int); i++){
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Cac phan tu trong mang la:\n");
    for(int i = 0; i < sizeof(array)/sizeof(int); i++){
    	printf("%d ", array[i]);
    }
    return 0;
}
