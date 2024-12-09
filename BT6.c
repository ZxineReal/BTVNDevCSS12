#include<stdio.h>

int perfect(int a){
	int sum=0;
	for(int i=1;i*i<=a;i++){
		if(a % i == 0){
            sum += i;
            if(i != a / i){
                sum += a / i;
            }
        }
    }
    if(sum - a == a){
        return 1;
    }
    return 0;
	}
int main(){
	int a,b;
	printf("Moi ban nhap vao so thu nhat:\n");
	scanf("%d",&a);
	printf("Moi ban nhap vao so thu hai:\n");
	scanf("%d",&b);
	
	if(perfect(a)==1){
		printf("%d la so hoan hao\n",a);
	}else{
		printf("%d khong phai la so hoan hao\n",a);
	}
	if(perfect(b)==1){
		printf("%d la so hoan hao\n",b);
	}else{
		printf("%d khong phai la so hoan hao\n",b);
	}
}