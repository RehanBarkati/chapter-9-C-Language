# include<stdio.h>
#include<string.h>
struct employee{
    int code;
     float salary;
     char name[12];
};
int main(){
     struct employee rehan= {100,20000,"Rehan"};
     printf("Name=%s,slary=%f,code=%d",rehan.name,rehan.salary,rehan.code);    
    return 0;
}