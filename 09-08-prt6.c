# include<stdio.h>
typedef struct complex{
    int x,y;
}comp;

void display(comp c, int a){
     printf("The value of x for %d complex number is %d\n",a+1,c.x);
     printf("The value of y for %d complex number is %d\n",a+1,c.y);
}

int main(){
    comp c[5];
    int i;
    for(i=0;i<5;i++){
        printf("Enter the value of x for %d complex number\n",i+1);
        scanf("%d",&c[i].x);
        printf("Enter the value of y for %d complex number\n",i+1);
        scanf("%d",&c[i].y);
    }
    for(i=0;i<5;i++){
        display(c[i],i);
    }
    return 0;
}
