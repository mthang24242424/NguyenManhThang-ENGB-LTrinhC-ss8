#include<stdio.h>
int main(){

	int number[3] [3] = {{1,2,3},{4,5,6},{7,8,9}};
	int check;
	int count=0;
	printf("nhap 1 phan tu ngau nhien trong mang ");
	scanf("%d",&check);

	for(int i=0; i<3; i++){ // in phan tu  
	for(int j=0; j<3; j++){
		if(check==number[i][j]){
			count ++;
			printf(" number[%d][%d] = %d ",i,j,number[i][j]);
			break;
		}
		} 
	}
	if(count==0){
			printf("ko co phan tu nay trong mang");
		}
	return 0; 
}
