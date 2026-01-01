//Sum of First n Natural Number

#include <stdio.h>

//method second by using Recursion
int  sum(int n)
{
    if(n==0)
        return 0;
    else;
        return sum(n-1)+n;
}

int main()
{
    int r;
    r= sum(5);
    printf("%d",r);
    
    return 0;
}



/*first method bu normal sum
int sum(int n)
{   
    return n*(n+1)/2;
}
int main()
{
    int r;
    r= sum(5);
    printf("%d",r);
    
    return 0;
}
*/