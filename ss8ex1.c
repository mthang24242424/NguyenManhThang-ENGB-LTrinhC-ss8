#include<stdio.h>
int main(){

	int number[3] [3] = {{1,2,3},{4,5,6},{7,8,9}};
	int sum =0; 

	for(int i=2; i>=0; i--){ // in phan tu  
	for(int j=2; j>=0; j--){
		printf(" number[%d][%d] = %d \n",i,j,number[i][j]);
		} 
	}
	return 0; 
}
