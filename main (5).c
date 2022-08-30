

#include <stdio.h>

int sum(int a);

int main()
{   
    int n;
    
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The sum of digits of a given number is: %d\n",sum(n));
    

    return 0;
}

int sum(int a)
{   
    if(a==0)
     return 0;
    return a%10+sum(a/10);
     
}
