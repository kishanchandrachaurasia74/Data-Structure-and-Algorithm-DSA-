//Power Using Recursion

#include <stdio.h>

int  Pow(int m,int n)
{
    if(n==0)
        return 1;
    else;
        return Pow(m,n-1)*m;
}

int main()
{
    int r;
    r= Pow(5,3);
    printf("%d",r);
    return 0;
}




