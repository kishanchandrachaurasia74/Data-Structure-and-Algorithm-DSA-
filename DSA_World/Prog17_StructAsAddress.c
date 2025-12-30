// Structure as Address

#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

struct Rectangle
{
   int length;
   int breadth;
};

void fun(struct Rectangle *p)
{
     p->length=20;  //formal parameter change will change the actual parameter value
   cout<<"length"<<p->length<<endl<<"breadth"<<p->breadth<<endl;
}

int main()
{
    struct Rectangle r={10,5};
    fun(&r);
    printf("length %d\n Breadth %d\n",r.length,r.breadth);
    return 0;
}