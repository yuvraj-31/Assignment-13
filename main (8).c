

#include <stdio.h>

int fibo(int a,int b,int c);

int main()
{   
    int n;
    
    printf("Enter a number\n");
    scanf("%d",&n);
    fibo(n,-1,1);
    

    return 0;
}

int fibo(int a,int b,int c)
{  
   if(a>0)
   {
       int Fibo=b+c;
       b=c;
       c=Fibo;
       printf(" %d",Fibo);
       fibo(a-1,b,c);
   }
    
}
