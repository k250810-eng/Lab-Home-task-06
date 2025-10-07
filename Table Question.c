#include <stdio.h>

int main(){
int num;
int multiply;

printf("The number of times you want to multiply? \n");
scanf("%d", &num);

for(int i= 1; i<=num ; i++)
{
    int count = count + 1;
    printf("----table of %d----- \n", count);

      for(int j = 1; j<=10; j++)
    {
        multiply = 0;
        multiply = i * j;
        printf("%d x %d = %d",i,j,multiply);
        printf("\n");
    }
}

}




