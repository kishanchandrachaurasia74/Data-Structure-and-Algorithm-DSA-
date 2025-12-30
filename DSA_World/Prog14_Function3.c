//Function Introduction :Call by Reference :only for C++
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

void swap(int &x, int &y)
{
    int temp;
    temp =x;
    x=y;
    y=temp;
}

int main()
{
int a,b;
a=10;
b=20;
swap(a,b);
printf("%d %d",a,b);
}
