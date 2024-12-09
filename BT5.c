#include<stdio.h>

int prime(int n){
	int count=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		return 1;
	}
}
int main(){
	int a,b;
	printf("Moi ban nhap vao so thu nhat: \n");
	scanf("%d",&a);
	printf("Moi ban nhap vao so thu hai: \n");
	scanf("%d",&b);
	if(prime(a)==1){
		printf("%d la so nguyen to\n",a);
	}else{
		printf("%d khong phai la so nguyen to\n",a);
	}
	if(prime(b)==1){
		printf("%d la so nguyen to\n",b);
	}else{
		printf("%d khong phai la so nguyen to\n",b);
	}
	
	return 0;
}