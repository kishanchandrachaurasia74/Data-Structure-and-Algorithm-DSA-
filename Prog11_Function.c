//Function Introduction
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

int add(int a,int b) // Formal parameter
{
    int c;
    c=a+b;
    return c;
}
int main()
{
   
    int x,y,z;
    x=10;
    y=20;
    z=add(x,y);      //Actual parameter
    
    printf("sum is %d\n",z);
    
    return 0;
}