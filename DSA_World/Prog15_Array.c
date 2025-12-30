//Array as Parameter

#include<iostream>
#include<stdio.h>
#include<conio.h>

void fun(int *A,int n)
{
    int i;
    for (i=0; i,n; i++)
        printf("%d\n",A[i]);
        
}

int main()
{
    int A[]={2,4,6,8,10};
    int n=5;
    fun(A,n);
   /* 
    for (int x:A)
    cout<<x<<endl;*/
    
    return 0;
}