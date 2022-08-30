

#include <stdio.h>

int sum(int a);

int main()
{   
    int n;
    
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The sum of first %d even natural number is: %d\n",n,sum(2*n));
    

    return 0;
}

int sum(int a)
{   
    if(a==1)
     return 0;
    if(a%2!=0) 
     a--;
    
    return a+sum(a-1);
     
}
