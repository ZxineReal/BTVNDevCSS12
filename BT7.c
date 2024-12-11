#include<stdio.h>

void addItem(int a, int b, int arr[a][b]){
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("Moi ban nhap vao gia tri cua phan tu arr[%d][%d]:\n",a,b);
			scanf("%d",&arr[i][j]);
		}
	}
}
void printItem(int a, int b, int arr[a][b]){
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("arr[%d][%d]: %d\t",i,j,arr[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int a,b;
	printf("Moi ban nhap vao so hang: \n");
	scanf("%d",&a);
	printf("Moi ban nhap vao so cot:\n");
	scanf("%d",&b);
	int arr[a][b];
	addItem(a,b,arr);
	printItem(a,b,arr);
	
	return 0;
}