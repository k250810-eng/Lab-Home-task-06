#include <stdio.h>

int main(){

    int num;
    int evencount = 0;
    int oddcount = 0;

    for(int i = 0; i<10; i++){

        printf("Enter a number: \n");
        scanf("%d", &num);

        if(num<0)
        {
         printf("Wrong input \n");
         continue;
        }

        else if(num%2==0)
        {
          evencount++;
        }

        else if(num %2!=0)
        {
          oddcount++;
        }
    }
    printf("The final Count is: \n %d for even \n %d for odd \n",evencount,oddcount);

}