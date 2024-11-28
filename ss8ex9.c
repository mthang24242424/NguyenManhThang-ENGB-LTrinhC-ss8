#include<stdio.h>
int main(){

// in ra phan tu dau tien xuat hien nhieu nhat trong mang 
// khai bao 1 mag so nguyen bat ki
int arr[]={1,2,1,2,4,1,7,9,2};
int maxCount;// so lan phan tu xuat hien 
int maxItem;// phan tu xuat hien nhieu nhat 
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
		maxItem=arr[i]; 
	} 
}
printf("phan tu co gia tri la:%d xuat hien nhieu nhat %d lan",maxItem,maxCount); 
return 0;
}
