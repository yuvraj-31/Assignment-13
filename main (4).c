

#include <stdio.h>

int sum(int a);

int main()
{   
    int n;
    
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The sum of first %d odd natural number is: %d\n",n,sum(n));
    

    return 0;
}

int sum(int a)
{   
    if(a==1)
     return 1;
    return a*a+sum(a-1);
     
}
