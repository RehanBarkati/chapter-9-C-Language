# include<stdio.h>
#include<string.h>
struct employee{
    int code;
     float salary;
     char name[12];
};
int main(){
    struct employee facebook[100];
    facebook[0].code=100;
    facebook[0].salary=100.50;
    strcpy(facebook[0].name,"Rehan");
    
    facebook[1].code=101;
    facebook[1].salary=90.50;
    strcpy(facebook[1].name,"Subhan");

    facebook[2].code=102;
    facebook[2].salary=2000.50;
    strcpy(facebook[2].name,"Rehan");
    return 0;
}