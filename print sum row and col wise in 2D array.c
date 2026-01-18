#include<stdio.h>
int main (){
	int r,c,sum=0;
	printf("enter a row and col");
	scanf("%d%d",&r,&c);
	int  arr[r][c];
int i,j;
printf("enter a matrix elements");
    for(int i=0;i<r;i++){
    	for(int j=0;j<c;j++){
    		scanf("%d",&arr[i][j]);
    	}
    }
    for(int i=0;i<r;i++){
    	int rowsum=0;
    	for(int j=0;j<c;j=0){
    		rowsum+=arr[i][j];
		}
			printf("%d=%d",i+1,rowsum);
	}
	
		for(int i=0;i<r;i++){
		int	colsum=0;
				for(int j=0;j<c;j=0){
				colsum+=arr[i][j];
				}
				printf("%d=%d",j+1,colsum);
		}
		
}