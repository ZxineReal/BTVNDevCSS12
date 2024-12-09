#include<stdio.h>

void array(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("arr[%d]: %d\t",i,arr[i]);
	}
}
int main(){
	int arr[5]={5,1,7,9,4};
	int size=sizeof(arr)/sizeof(arr[0]);
	array(arr,size);
}