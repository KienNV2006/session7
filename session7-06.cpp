#include <stdio.h>
int main(){
	int array[] = {5,10,15,23};
	int i;
	for(i = 0; i < sizeof(array)/sizeof(int); i++){
		if(array[i] % 2 ==0){
			array[i]+=3;
		}else{
			array[i]+=2;
		}
	}	
	for(i = 0; i < sizeof(array)/sizeof(int); i++){
		printf("%d", array[i]);
	}	
	return 0;
}