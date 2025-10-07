#include <stdio.h>

void inner(int n);

int main(){

    int num;

    printf("what size you want the triangle in? \n");
    scanf("%d",&num);

    for(int i = 1; i<=num; i++)
    {
       for(int j = 1; j<=num-i; j++)
       {
         printf(" ");
    
       }
         
        for(int k = 1; k<=i; k++)
        {
          printf("%d",k);
        }
         printf("\n");
    }




// rows ---> /n from i 

// spaces ----> j (n-i) decreases as going elow

// number pattern ---> K



        //  ----1
        //  ---12
        //  --123
        //  -1234
        //  12345
}


