#include <stdio.h>

int main(){
    int n, guess=13, count=0, limit=3, a=0;
    do{
        if(count<limit){
        printf("Enter a number: ");
        scanf("%d", &n);
        count++;
        }
        else{
            a=1;
        }
    }
    while(n!=guess && a==0);
    if(a==1){
        printf("You Failed\nTry Again\n");
    }
    else{
        printf("You won\n");
    }
}