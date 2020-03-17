#include<stdio.h>
void main()
{
	
	int i,j,n,m,x,binom;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			x=0;binom=1;
				for(j=n-1;j>=i+1;j--)
						printf("  ");
				while(x<=i){
					if(i==0||x==0)
						printf(" %d ",binom);
						
					else{
						binom=binom*(i-x+1)/x;
						printf(" %d ",binom);
					}
					printf(" ");
					x++;
					
				}
			printf("\n");	
		}
}