// size of the pointer are independent of its data type
#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle  *p5;
    
    printf("%d\n",sizeof(p1));
    printf("%d\n",sizeof(p2));
    printf("%d\n",sizeof(p3));
    printf("%d\n",sizeof(p4));
    printf("%d\n",sizeof(p5));
}
