#include<stdio.h>
int main() {

 int a=1,n,sum=1;
 
 printf("enter the value : ");
	scanf("%d",&n);
 
 while(a<=n)
 {
 	sum*=a;
 	 	a++;
 }
printf("%d",sum);
}

