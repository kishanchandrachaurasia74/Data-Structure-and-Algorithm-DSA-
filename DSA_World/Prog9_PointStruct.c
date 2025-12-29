//Pointer to a Structure
#include<stdio.h>
#include<conio.h>

struct Rectangle{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r={10,5};  /* without pointer*/
    printf("%d\n",r.length);
    printf("%d\n",r.breadth);
    
    struct Rectangle *p=&r;        /* pointer to structure*/
    printf("%d\n",(*p).length);
    printf("%d\n",(*p).breadth);

     //or                           /* pointer to structure*/
    printf("%d\n",p->length);
    printf("%d\n",p->breadth);
    
    
    return 0;
}