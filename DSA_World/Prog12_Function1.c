//Function Introduction :Call by Value
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

int add(int a,int b) // Formal parameter
{
    /*int c;
    c=a+b; */
//the value of a formal parameter modified willnnot reflect the actual parameter value
    a++;
    printf("%d\n",a);
    return 0;
}
int main()
{
   
    int x,y,z;
    x=10;
    y=20;
    z=add(x,y);      //Actual parameter
    
    printf("sum is %d\n",x);

    return 0;
}

/*
void swap(int x, inty)
{
    int temp;
    temp =x;
    x=y;
    y=temp;
}

int main ()
{
int a,b;
a=10;
b=20;
swap(a,b);
printf("%d %d",a,b);
}

*/