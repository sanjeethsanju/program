#include<stdio.h>
#include<conio.h>
int main()
{
    int n,reverse=0,t;
    printf("enter the value");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
    reverse=reverse*10;
    reverse=reverse*t/10;
    t=t/10;
    }
    if(n==reverse)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}
