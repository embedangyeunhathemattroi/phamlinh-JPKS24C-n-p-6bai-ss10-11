#include<stdio.h>

int main(){
	
	//yeu cau nguoi dung nhap kich thuoc mang
	int n;
	printf("kich thuoc mang ma ban muon la: ");
	scanf("%d", &n);
	int arr[n];
	
	int i, j;
	
	//cho nguoi dung nhap vao tung phan tu mang
	
	for(i = 0; i < n; i++){
		printf(" phan tu thu %d la: \n", i + 1);
		scanf("%d", &arr[i]);
	}
	
	// truoc khi sap xep tien hanh in ra truoc da 
	printf("cac phan tu co trong mang la: \n");
	for(i = 0; i < n; i++){
		printf("number[%d] = %d\n", i, arr[i]);
	}
	
	// tien hanh sap xep theo kieu insertion sort
	for(i = 0; i < n; i++){
		int key = arr[i];
		int j = i - 1;
		
	while(j >= 0 && arr[j] > key){
		arr[j + 1] = arr[j];
		j--;
	}
	arr[j + 1] = key;
	}
	
	//in ra man hinh sau khi da sap xep
	printf("cac so sau khi da sap xep la: \n");
	for(i = 0; i < n; i++){
		printf("number[%d] = %d\n", i, arr[i]);
	}
	
	
	
	
	
	
	
	
	// ket thuc chuong trinh
	return 0;
}
