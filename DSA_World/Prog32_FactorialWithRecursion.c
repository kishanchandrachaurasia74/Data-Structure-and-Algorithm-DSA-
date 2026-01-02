//Factorial Using Recursion

#include <stdio.h>

int  Fact(int n)
{
    if(n==0)
        return 1;
    else;
        return Fact(n-1)*n;
}

int main()
{
    int r;
    r= Fact(5);
    printf("%d",r);
    return 0;
}



