// Monolithic Programming for finding the Area 

#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    int length=0;
    int breadth=0;
    
    printf("enter  the length and breadth");
    cin>>length>>breadth;
    
    int area=length*breadth;
    int peri=2*(length+breadth);
    
    printf("Area is %d\nperimeter is %d",area,peri);
    
    return 0;
}