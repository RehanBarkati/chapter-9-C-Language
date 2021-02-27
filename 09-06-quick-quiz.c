# include<stdio.h>
#include<string.h>
struct employee{
    int code;
     float salary;
     char name[12];
};
void show(struct employee emp){
    printf("The code of employee is %d\n",emp.code);
    printf("The salary of employee is %.2f\n",emp.salary);
    printf("The name of employee is %s\n",emp.name);
    emp.code=10;
}

int main(){
     struct employee e1;
     struct employee *ptr=&e1;
     ptr->code=100;
     ptr->salary=100.20;
     strcpy(ptr->name,"Rehan");

 show(e1);
 printf("The code of employee after function call is %d\n",e1.code);
    
    return 0;
}