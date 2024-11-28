#include<stdio.h>
int main(){

	int number[3] [3] = {{1,2,3},{4,5,6},{7,8,9}};
	int sum =0; 

	for(int i=0; i<3; i++){ // in phan tu  
	for(int j=0; j<3; j++){
		printf("%d ",number[i][j]);
		} 
		printf("\n"); 
	}
	for(int i=0;i<3;i++){
		printf("number[%d][%d]= %d \n",i,2-i,number[i][2-i]);
		sum+= number[i][2-i]; 
	} 
	printf("tong cheo phu la %d",sum); 
	return 0; 
}
