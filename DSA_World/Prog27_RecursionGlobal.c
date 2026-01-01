//Recursion with Global Variable

#include <stdio.h>

int x=0; //Global Variable
int fun(int n)
{
    if(n>0)
    {
        x++;
       return fun(n-1)+x;
       
    }
    return 0;
}
int main()
{
    int r;
    
    r=fun(5);
    printf("%d",r);
    return 0;
}


/*#include <stdio.h>

int x=0; //Global Variable
int fun(int n)
{
    if(n>0)
    {
        x++;
       return fun(n-1)+x;
       
    }
    return 0;
}
int main()
{
    int r;
    
    r=fun(5);
    printf("%d",r);

     r=fun(5);
    printf("%d",r); //x value will be change now x=10
    return 0;
}
*/