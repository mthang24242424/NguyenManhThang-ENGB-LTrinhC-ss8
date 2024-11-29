#include<stdio.h>
int main(){
// in ra phan tu dau tien xuat hien nhieu nhat trong mang 
// khai bao 1 mag so nguyen bat ki
int arr[]={1,2,1,2,4,1,7,9,2,4};
// khai bao 1 cai mang chua cac gia tri xuat hien nhieu nhat
int result[100]={0};
int maxCount;// so lan phan tu xuat hien 
int index =0;
int lengthArr=sizeof(arr)/sizeof(arr[0]) ;
for(int i=0;i<lengthArr;i++){
	int count=0; 
	for(int j=0; j<lengthArr;j++){
		if(arr[i]==arr[j]){
			count++; 
		} 
	} 
	if(count>maxCount){
		maxCount=count;
	} 
}
// duyet lai 1 lan xem nhung phan tu nao co so lan xuat hien bang maxCount
	for(int i=0;i<lengthArr;i++){
	int count=0; 
	for(int j=0; j<lengthArr;j++){
		if(arr[i]==arr[j]){
			count++; 
		} 
	}
	 if(count==maxCount){
		// ktra xem arr[i] da ton tai trong mang result chx
		int flag=-1;
		for(int k=0;k<100;k++){
			if(arr[i]==result[k]){
				flag=1;
				break;
			}
		}
		//ket thuc for ktra bien flag
		if(flag==-1){
			result[index]=arr[i];
			index++;
		}
		// reset lai flag
		flag=-1;
	} 
}
// in cac phan tu trong mang 
for(int i=0; i<index ; i++){
	printf("phan tu xuat hien nhieu nhat la %d \n",result[i]);
}
return 0;
}
