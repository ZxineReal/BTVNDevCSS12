#include<stdio.h>

int UCLN(int a, int b){
	while(b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
int main(){
	int a;
	int b;
	printf("Moi ban nhap vao so thu nhat:\n");
	scanf("%d",&a);
	printf("Moi ban nhap vao so thu hai:\n");
	scanf("%d",&b);
	printf("Uoc chung lon nhat cua %d va %d la: %d",a,b,UCLN(a,b));
	return 0;
}