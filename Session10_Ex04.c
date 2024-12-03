#include<stdio.h>

int main(){
	//cho nguoi dung khai bao kich thuoc mang
	int n;
	printf("Moi ban nhap kich thuoc mang: ");
	scanf("%d", &n);
	//tien hanh gan gia tri vua nhap cho mang
	int arr[n];
	//tien hanh nhap phan tu cho mang
	int i;
	for(i = 0; i < n; i++){
		printf("phan tu thu %d la: \n", i + 1);
		scanf("%d", &arr[i]);
	}
	//hien thi mang khi chua sap xep
	printf("Mang khi chua sap xep la: \n");
	for(i = 0; i < n; i++){
		printf("number[%d] = %d\n", i, arr[i]);
	}
	//sap xep theo insertion
	int j;
	for(i = 0; i < n - 1; i++){
		//gia su tai arr[i] co gia tri la nho nhat
		int min_idx = i;
		for(j = i + 1; j < n; j++){
			if(arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}
		if(min_idx != i){
			int temp = arr[i];
			arr[i] = arr[min_idx];
			arr[min_idx] = temp;
		}
	}
	//in mang sau khi sap xep ra 
	printf("mang sau khi sap xep la: \n");
	for(i = 0; i < n; i++){
		printf("number[%d] = %d\n", i, arr[i]);
	}
	//ket thuc chuong trinh
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	

