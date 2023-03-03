#include<stdio.h>
 int main()

{
	
	int a=1;
	int n;
	
	printf("enter the value : ");
	scanf("%d",&n);
	
	while(a<=10) {
		
		printf("%d*%d=%d\n",n,a,n*a);
	
		a++;	
	}
	
}



