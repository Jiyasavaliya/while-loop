#include<stdio.h>
int main()
{
    int a = 2, number;
    
    printf(" Please Enter the Value : ");
    scanf("%i", &number);
    
    printf(" even numbr list  : \n", number);
    
	while(a<= number)
    {
        printf(" %d",a);
        a = a+2;
    }
}
