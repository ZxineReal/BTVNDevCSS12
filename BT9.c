#include<stdio.h>

void addItem(int a, int b, int arr[a][b]){
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("Moi ban nhap vao gia tri cua phan tu arr[%d][%d]:\n",i,j);
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
void showCorner(int a,int b, int arr[a][b]){
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(i==0 && j==0 || i==0 && j==b-1 || i==a-1 && j==0 || i==a-1 && j==b-1){
				printf("%d\t",arr[i][j]);
			}
		}
		printf("\n");			
	}
	printf("\n");
}
void printBoundary(int a,int b,int arr[a][b]){
    for (int i=0;i<a;i++){
        for(int j=0;j<b;j++) {
            if(i==0||i==a-1||j==0||j==b-1){
                printf("%d\t",arr[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
}
void printDiagonals(int a, int b, int arr[a][b]){
    for(int i=0;i<a;i++){
        printf("%d\t",arr[i][i]);
    }
    printf("\n");
    for(int i=0;i<a;i++){
    	printf("%d\t",arr[i][b-i-1]);
	}
	printf("\n");
}
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
void printPrime(int a, int b, int arr[a][b]){
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            if(isPrime(arr[i][j])) {
                printf("%d\t", arr[i][j]);
            }
        }
    }
    printf("\n");
}

int main(){
	int menu;
	int a,b;
	int arr[100][100];
	
	do{
		printf("MENU\n");
		printf("1. Nhap gia tri cac phan tu cua mang\n");
		printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
		printf("3. In ra cac phan tu o goc theo ma tran\n");
		printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
		printf("5. In ra cac phan tu nam tren duong cheo chinh va duong cheo phu theo ma tran\n");
		printf("6. In ra cac so la so nguyen to theo ma tran\n");
		printf("7. Thoat\n");
		printf("Lua chon cua ban:\n");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				printf("Moi ban nhap vao so hang:\n");
				scanf("%d",&a);
				printf("Moi ban nhap vao so cot:\n");
				scanf("%d",&b);
				arr[a][b];
				addItem(a,b,arr);
				
				break;
			case 2:
				printf("Cac phan tu trong mang theo ma tran la:\n");
				printItem(a,b,arr);
				break;
			case 3:
				printf("Cac phan tu nam tren goc ma tran la:\n");
				showCorner(a,b,arr);
				break;
			case 4:
				printf("Cac phan tu nam tren duong bien la:\n");
				printBoundary(a,b,arr);
				break;
			case 5:
				printf("Cac phan tu nam tren duong cheo chinh va phu la:\n");
				printDiagonals(a,b,arr);
				break;
			case 6:
				printf("So nguyen to trong mang la:\n");
				printPrime(a,b,arr);
				break;
			case 7:
				printf("Thoat");
				break;
			default:
				printf("Khong hop le!!!");
		}
	}
	while(menu!=7);
}