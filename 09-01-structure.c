# include<stdio.h>
#include<string.h>

 struct employee{
     int code;
     float salary;
     char name[12];
 };
 
int main(){
    // employee e1;
    // e1-salary-40 ----> would not work without structures
    struct employee e1;
    e1.salary=500.20;
    e1.code=100;
    //e1.salary="Rehan" ---->won't work
    strcpy(e1.name,"Rehan");

    printf("%.2f\n",e1.salary);//--->%.2f means till 2 decimal without .2 it will print upto 6 decimal
    printf("%d\n",e1.code);
    printf("%s\n",e1.name);
    return 0;
}