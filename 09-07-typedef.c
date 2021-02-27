# include<stdio.h>
#include<string.h>

typedef struct employee{
      int code;
      float salary;
      char name[12];
}  emp ;
void show(emp emp1){
    printf("The code of employee is %d\n",emp1.code);
    printf("The salary of employee is %.2f\n",emp1.salary);
    printf("The name of employee is %s\n",emp1.name);
}

int main(){
    //declaring e1 and ptr and pointing ptr to e1
      emp e1;
     emp *ptr=&e1;

     //set the member values of e1
     ptr->code=100;
     ptr->salary=100.20;
     strcpy(ptr->name,"Rehan");
     show(e1);
    
    return 0;
}