#include<stdio.h>
int main(){
	int n;
	printf("nhap so nguyen n ");
	scanf("%d",&n);
	int number[n] [n];
	for(int i=0; i<n; i++){ // nhap phan tu cho mang  
		for(int j=0; j<n; j++){
			printf("number[%d][%d] = ",i,j);
			scanf("%d",&number[i][j]); 
		} 
	}
	for(int i=0; i<n; i++){ // in phan tu  
	for(int j=0; j<n; j++){
		printf(" %d",number[i][j]);
		} 
		printf("\n");  
	}
	return 0; 
}
