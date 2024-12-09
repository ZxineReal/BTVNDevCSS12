#include<stdio.h>

int heirloom(int a){
	int result=1;
	for(int i=1;i<=a;i++){
		result*=i;
	}
	printf("Giai thua cua %d la: %d",a,result);
}
int main(){
	int num;
	printf("Moi ban nhap vao mot so:\n");
	scanf("%d",&num);
	heirloom(num);
	
	return 0;
}