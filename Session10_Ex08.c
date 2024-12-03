#include<stdio.h>

int main(){
	int n, m;
	printf("moi ban nhap so dong: \n");
	scanf("%d", &n);
	printf("moi ban nhap so cot: \n");
	scanf("%d", &m);
	//gan gia tri cho mang hai chieu
	int arr[n][m];
	//cho nguoi dung nhap gia tri vao mang hai chieu
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("moi ban so dong la %d, so cot la %d\n", i + 1, j + 1);
			scanf("%d", &arr[i][j]);
		}
	}
	// in truoc khi sap xep
	printf("mang khi chua sap xep la: \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("number[%d][%d] = %d\n", i, j, arr[i][j]);
		}
	}
	
	// tien hanh sap xep
	int k;
	int temp;
	for(i = 0; i < n; i++){
		for(j = 0; j < m - 1; j++){
			for(k = i + 1; k < n; k++){
				if(arr[i][j] > arr[k][j]){
			temp = arr[i][j];
			arr[k][j] = arr[i][j];
			arr[k][j] = temp;
		}
			}
		}
	}
	
	//in ra ket qua 
printf(" mang sau khi da duoc sap xep la: \n");
for(i = 0; i < n; i++){
	for(j = 0; j < m; j++){
		 printf("%d ", arr[i][j]);
	}
	printf("\n");
}
	
	
	
	
	
	
	
	
	
	
	
return 0;	
	
}
  
