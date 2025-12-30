//Dynamically object Creation in Heap and pointer pointing there
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

struct Rectangle{
    int length;
    int breadth;
};

int main()
{
   
    struct Rectangle *p;
    p=(struct Rectangle*) malloc(sizeof(struct Rectangle)); // in C
 /* p=new rectangle                        in C++*/   
    
    p->length=10;
    p->breadth=5;
    printf("%d\n",p->length);
    printf("%d\n",p->breadth);
    
    
    return 0;
}