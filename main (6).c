

#include <stdio.h>

int fact(int a);

int main()
{   
    int n;
    
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The factorial of a given number is: %d\n",fact(n));
    

    return 0;
}

int fact(int a)
{   
    if(a==0 || a==1)
     return 1;
    
    return a*fact(a-1);
     
}
