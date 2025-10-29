#include <stdio.h>

int main(){
    int num, guess=13, limit=3, count=0, a=0;

    while(num!=guess &&  a==0){
        if(count<limit){
            printf("Enter a number: ");
            scanf("%d", &num);
            count++;
        } else{
            a=1;
        }
    } if(a==1){
        printf("You failed\n");
    } else{
        printf("You won\n");
    }
}
