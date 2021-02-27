# include<stdio.h>
struct vector{
    int x,y;
};

int main(){
    struct vector v1;
    v1.x=20;
    v1.y=30;
    printf("X dim is %d and Y dim is %d",v1.x,v1.y);
    return 0;
}