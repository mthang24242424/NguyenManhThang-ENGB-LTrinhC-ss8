#include<stdio.h>
int main(){
	int m,n;
	printf("nhap so hang m: ");
	scanf("%d",&m);
	printf("nhap so cot n: ") ;
	scanf("%d",&n); 
	int number[m] [n];
	int sum =0; 
	for(int i=0; i<m; i++){ // nhap phan tu cho mang  
		for(int j=0; j<n; j++){
			printf("number[%d][%d] = ",i,j);
			scanf("%d",&number[i][j]); 
		} 
	}
	for(int i=0; i<m; i++){ // in ma tran  
	for(int j=0; j<n; j++){
		printf(" %d",number[i][j]);
		} 
		printf("\n");  
	}
	for(int i=0;i<m;i++){
		printf("number[%d][%d]= %d \n",i,i,number[i][i]);
		sum+= number[i][i]; 
	} 
	printf("tong cua cheo chinh la %d",sum); 
	return 0; 
}
