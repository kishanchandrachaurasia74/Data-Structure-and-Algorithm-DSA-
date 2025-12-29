// Variable size array declaration


#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size";
    cin>>n;
    int A[n];
    A[0]=3;
    
    for (int x:A)
    {
        cout<<x<<endl;
    }
    
}