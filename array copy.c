#include<stdio.h>
int main(){
	int a[10];
	int b[10];
    int n;
    printf("enter elements");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    	scanf("%d",&a[i]);
    	
	}
	 for(int i=0;i<n;i++){
	 	b[i]=a[i];
	 }
	 for(int i=0;i<n;i++){
	 		printf("%d",b[i]);
	 }

}