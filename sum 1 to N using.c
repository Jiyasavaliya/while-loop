#include<stdio.h>
main() {

 int a=1,n,sum=0;
 
 printf("enter the value : ");
 scanf("%d",&n);

 while(a<=n){

 	sum+=a;	
 	a++;
 }
printf("%d",sum);
    
}

