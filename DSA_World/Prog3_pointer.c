#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int a=10;
    int *p;  // declaration of pointer 
    p=&a;   // assigning address of a stored in p
    
    printf("%d\n",a);
    printf("using pointer %ul \n",*p);
    printf("adreess of a  %ul",p);
}
