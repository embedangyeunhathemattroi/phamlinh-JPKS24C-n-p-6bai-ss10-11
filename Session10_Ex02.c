#include<stdio.h>

int main(){
	
	// cho nguoi dung nhap kich thuoc mang
	int n;
	printf("moi ban nhap kich thuoc mang mong muon ");
	scanf("%d", &n);
	//gan gia tri vua nhap cho mang 
	int arr[n];
	
	//yeu cau nguoi dung nhap tung phan tu cho mang
	int i;

	for(i = 0; i < n; i++) {
		printf("phan tu %d la: \n", i + 1);
		scanf("%d", &arr[i]);
	}
	
	//sau khi da gan gia tri xong tien hanh sap xep trong mang theo thu tu tu be den lon
	// dung bubble sort
	

	//khai bao them bien j de co the su dung vong lap for
	int j;
	
	// in ra mang khi chua sap xep
	printf("mang khi chua sap xep la: \n");
	for(i = 0; i < n; i++) {
		printf("number[%d] la %d\n", i, arr[i]);
	}
	
	// sap xep theo bubble sort
	for(i = 0; i < n; i++) {
		for(j = 0; j < n - i -1; j++){
			if(arr[j] > arr[j + 1]) {
				// can mot bien trung gian de luu gia tri can sua 
				int key = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = key;
			} // cua if
		} //for thu hai
	} // for thu nhat
	printf("\n");
	
	//cac phan tu khi duoc sap xep lai la
	for(i = 0; i < n; i++){
		printf("number[%d] = %d\n", i, arr[i]);
	} 
	
	
	
	
	
	
	
	
	
	
	
	
	//ket thuc chuong trinh 
	return 0;
}
