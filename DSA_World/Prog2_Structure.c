#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle 
{
  int  length;
  int  breadth;
  //char x; will allocates 4 bytess but use only one bytes and it is called as padding
};

//struct rectangle r1,r2,r3; global declaration

int main()
{
    struct Rectangle r1={10,5};
    
    r1.length=12;
    r1.breadth=8;
    printf("%lu\n", sizeof(r1));
    printf("%d\n", (r1.length));
    printf("%d", (r1.breadth));

}
