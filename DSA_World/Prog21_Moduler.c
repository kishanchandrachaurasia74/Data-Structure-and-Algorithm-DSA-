// Moduler Programming for finding the Area 

#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int area(struct Rectangle r)
{
    return r.length*r.breadth;
}

int peremeter(Rectangle r)
{
    int p;
    p=2*(r.length+r.breadth);
    
    return p;
}
int main()
{
   Rectangle r={0,0};
    
    printf("enter  the length and breadth");
    cin>>r.length>>r.breadth;
    
    int a=area(r);
    int peri=peremeter(r);
    
    printf("Area is %d\nperimeter is %d",a,peri);
    
    return 0;
}