#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int A[5]={2,4,6,8,10};
    int *p;
    p=A; // p=&A[0]
    
    for (int i=0;i<5;i++)
     {
         printf("%d\n",A[i]);
         printf("%d\n",p[i]);
     }
    
}
