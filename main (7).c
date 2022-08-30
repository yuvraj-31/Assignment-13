

#include <stdio.h>

int Hcf(int a,int b,int c);
int min(int a,int b);

int main()
{   
    int n1,n2;
    
    printf("Enter two number\n");
    scanf("%d %d",&n1,&n2);
    printf("The Hcf of a given number is: %d\n",Hcf(n1,n2,min(n1,n2)));
    

    return 0;
}

int Hcf(int a,int b,int c)
{   
    
   if(a%c==0 && b%c==0)  
    return c;
   return Hcf(a,b,c-1); 
}
int min(int a,int b)
{
    if(a>b)
      return b;
    else
      return a;
}
