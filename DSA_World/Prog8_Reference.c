//A refrence is a just another name for the same variable
// its available onmly in C++ language

#include <iostream>

int main()
{
    int a=10;
    int &r=a;
    printf("%d\n",a);
    printf("%d\n",&r);
    printf("%d\n",r);
    return 0;
}