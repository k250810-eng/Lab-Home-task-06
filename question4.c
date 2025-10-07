#include <stdio.h>

int main(){

int num;
int sum = 0;

printf("Input the number: \n");
scanf("%d", &num);

int temp = num;

for(int i=1; i<num; i++)
{
    if(temp%i==0)
    {
       sum+=i; 
       printf("Sum is at %d \n", sum);
    }

    else
    {
        continue;
    }
}

if(sum==num){

    printf("this is a perfect value \n");
}

else{
    printf("this is not a perfect value \n");
}

}