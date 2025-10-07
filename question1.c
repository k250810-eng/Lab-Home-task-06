#include <stdio.h>

int main(){
    int digit = 0;
    int num;
    int newnum;
    int reverse = 0;

    printf("type a number for a palindrome check  \n");
    scanf("%d",&num);

    if(num<0)
    {
    printf("Wrong input");
    return 0;
    }

    newnum = num;

    while(newnum!=0)
    {
        digit = newnum % 10;
        reverse= (reverse * 10)+ digit;
        newnum = newnum/10;
        printf("The reverse is %d \n", reverse);
    }

    if(reverse==num){
        printf("The number is a palindrome \n");
    }

    else{
        printf("The number is not a palindrome \n");
    }
}



