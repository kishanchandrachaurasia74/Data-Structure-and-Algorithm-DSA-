//Fibonacci Series using Recusrion and Loop

#include <stdio.h>

//by loop
int fib(int n)
{
    int t0=0,t1=1,s=0,i;
    
    if(n<=1)
        return n;
    for (i=2;i<=n;i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}
//by recursion

int rfib(int n)
{
    if (n<=1)
    return n;
    else
    return rfib(n-2)+rfib(n-1);
}

int main()
{
    
    printf("%d\n",fib(7));
    printf("%d",rfib(7));
    return 0;
}
