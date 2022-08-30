

#include <stdio.h>

int power(int a,int b);

int main()
{   
    int n1,n2;
    
    printf("Enter a number\n");
    scanf("%d",&n1);
    printf("Enter a power digit\n");
    scanf("%d",&n2);
    printf("The number after calculating power is %d",power(n1,n2));
    
    return 0;
}


int power(int a,int b)
{  
    if(b==1)
     return a;
    return a*power(a,b-1);
    
}
