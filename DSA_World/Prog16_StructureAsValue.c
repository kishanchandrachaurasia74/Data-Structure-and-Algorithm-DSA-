// Structure as Value


#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

struct Rectangle
{
   int length;
   int breadth;
};

void fun(struct Rectangle r)
{
   r.length=20; //formal length will change but actual will not change
   cout<<"length"<<r.length<<endl<<"breadth"<<r.breadth<<endl;
}

int main()
{
    struct Rectangle r={10,5};
    fun(r);

    printf("length %d\n Breadth %d\n",r.length,r.breadth);
   return 0;
}