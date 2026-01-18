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
    	for(int j=0;j<c;j++){
    int max=arr[0][0];
    int min=arr[0][0];
    if(arr[i][j<max]){
    	max=arr[i][j];
	}if(min<arr[i][j]){
		min=arr[i][j];
	}
	printf("%d",max);
	printf("%d",min);
}
}
	}