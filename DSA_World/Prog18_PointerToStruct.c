// Returning Pointer to a Structure

#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

struct Rectangle
{
   int length;
   int breadth;
};

struct Rectangle *fun()
{
    struct Rectangle *p;
    p=new Rectangle;
//  p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    
    p->length=7;
    p->breadth=21;
    
    return p;
    
}

int main()
{
    struct Rectangle *ptr =fun();
    
     cout<<"length"<<ptr->length<<endl<<"breadth"<<ptr->breadth<<endl;
     
    return 0;
}