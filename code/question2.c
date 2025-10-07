#include <stdio.h>

int main(){

    int num;
    int sum = 0;
    int digit;

printf("Enter the number \n");
scanf("%d", &num);

while(num>0)
{
   digit = num%10;
   sum += digit;
   printf("%d", digit);
   num /= 10;
   
   if(num>0)
 {
    printf("+");
 }
}

printf("\n");
printf("The sum is: %d", sum);

}
