#include<stdio.h>

int main(){
	
	//khai bao mang va yeu cau nguoi dung nhap vao mang
	int n;
	printf("Moi ban nhap kich thuoc mang: ");
	scanf("%d", &n);
	int arr[n];
	
	//cho nguoi dung nhap vao phan tu trong mang
	printf("cac phan tu co trong mang la: \n");
	int i;
	for(i = 0; i < n; i++) {
		printf(" phan tu thu %d la\n", i + 1);
		scanf("%d", &arr[i]);
	}
	
	// can tao mot bien de co the kiem tra xem co phan tu do hay khong 
	int kiemtra = 0;
	int index;
	
	// yeu cau nguoi dung nhap mot so de co the kiem tra 
	printf("ban muon kiem tra phan tu nao \n");
	scanf("%d", &index);
	
	for(i = 0; i < n; i++) {
		if(index == arr[i]){
			kiemtra = 1;
			break;
		
	} 
}
	
	
	//dieu kien kiem tra bai toan
	if(kiemtra == 1){
		printf("phan tu %d co trong mang va o vi tri %d", index, i);	
	}
	if(kiemtra == 0){
		printf("khong co phan tu %d nao trong mang", index);	
	}
	
	
	
	
	
	

return 0;
}
