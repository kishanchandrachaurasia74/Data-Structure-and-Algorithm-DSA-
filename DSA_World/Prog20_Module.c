// Moduler Programming for finding the Area 

#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int area(int length,int breadth)
{
    return length*breadth;
}

int peremeter(int length,int breadth)
{
    int p;
    p=2*(length+breadth);
    
    return p;
}
int main()
{
    int length=0;
    int breadth=0;
    
    printf("enter  the length and breadth");
    cin>>length>>breadth;
    
    int a=area(length,breadth);
    int peri=peremeter(length,breadth);
    
    printf("Area is %d\nperimeter is %d",a,peri);
    
    return 0;
}