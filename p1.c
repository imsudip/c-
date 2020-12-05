#include<stdio.h>
#include<stdlib.h>
void main(){
	int i,n,k,j;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(j=i;j<=2*i;j++)
			{
				if(i!=0)
				{
					printf("1");
				}
				else
				{
					printf("%d ",j);
				}	
			}
			printf("\n");
			
			
	}
}