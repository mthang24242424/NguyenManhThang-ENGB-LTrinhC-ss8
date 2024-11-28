#include<stdio.h>
int main(){

	int number[3] [3] = {{1,2,3},{4,12,6},{7,8,9}};
	int max = number[0][0];
	for(int i=0; i<3; i++){ // in phan tu  
	for(int j=0; j<3; j++){
		if(number[i][j]>max){
			max = number[i][j];
		}
		}	
	} 
	printf("phan tu lon nhat cua mang la %d ",max);
	return 0; 
}
