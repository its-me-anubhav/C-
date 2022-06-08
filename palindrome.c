#include<stdio.h>
 int main ()
{ 
    int num,temp,sum=0,r;
    printf("Ente the number");
    scanf("%d",& num);
    temp=num;
    while(num>0)
    {
        r = num%10;
        sum = (sum*10)+r;
        num = num/10;
    }
    if (sum==temp)
    printf("Number is Palindrome");
    else
    printf(" Number is not Palindrome");
    return 0;
}
    
