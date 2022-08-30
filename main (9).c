

#include <stdio.h>

int count(int a,int b);

int main()
{   
    int n;
    
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("%d",count(n,0));
    

    return 0;
}

int count(int a,int b)
{  
   if(a>0)
   {  b++;
      return count(a/10,b);
   }
   else
   return b;
    
}
