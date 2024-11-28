#include<stdio.h>
int main(){

	int number[3] [3] = {{1,2,3},{4,5,6},{7,8,9}};
	int sum =0; 

	for(int i=0; i<3; i++){ // in phan tu  
	for(int j=0; j<3; j++){
	if(i==0||i==2||j==0||j==2) {
		sum += number[i][j]; 
	}
		} 
	}
	printf("tong bien la %d ",sum) ;
	return 0; 
}
