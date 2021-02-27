# include<stdio.h>
typedef struct vector{
    int x,y;
}vec;

void sumvector(vec v1,vec v2){
    struct vector result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    printf("The value of X and Y component of resultant of two vector is %d and %d\n",result.x,result.y);
}

int main(){
   vec v1,v2;
    v1.x=20;
    v1.y=30;
    printf("X dim is %d and Y dim is %d\n",v1.x,v1.y);

    v2.x=40;
    v2.y=50;
    printf("X dim is %d and Y dim is %d\n",v2.x,v2.y);

    sumvector(v1,v2);

    return 0;
}