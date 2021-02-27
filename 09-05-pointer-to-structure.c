# include<stdio.h>
#include<string.h>
struct employee{
    int code;
     float salary;
     char name[12];
};

int main(){
   struct employee e1;
   struct employee *ptr=&e1;
   //e1.code=100; OR
  // (*ptr).code=100; OR 
  ptr->code=100;
   printf("%d",e1.code);

    return 0;
}