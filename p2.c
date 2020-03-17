#include<stdio.h>
void main(){
	int i,n,k,j,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++)
			printf(" ");
			c=i;
		for(k=1;k<=2*i-1;k++){
			
			if(k>=i){
				
				printf("%d",c);
				c--;
			}
			else{
				
				printf("%d",c);
				c++;
			}
		}
			printf("\n");
	}
}