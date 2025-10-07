#include <stdio.h>

float Average(int totalread, int count);
void day_read(int read);

int main(){
   int count = 1, time,days = 7;                        //overall
   int max = 0; int min = 100000;                       //task part 1:
   int savedmax_day = 0, savedmin_day = 0;
   int totalmin = 0;                            
   float average, totalhour = 0;                
   int daily_goal = 0; int fortyfive_goal = 0;          //task part 2
   int daysread = 0;                                    
  
    printf("====================\n");
    printf("Week Reading Tracker\n");
    printf("====================\n");

   // main loop
   while(count<=days) {
    printf("Enter your reading time in minutes for the %d day of the week \n", count);
    printf("Enter 0 if you did not read at all \n");
    scanf("%d", &time);    

    if(time < 0) {
      printf("Invalid input,Please enter 0 or a positive number.\n");
      continue;
    }
  
    totalmin += time;

    if(time>0){
      daysread++;
    }

    if(time > max){
      max = time;
      savedmax_day = count;
    }

    if(time < min){
      min = time;
      savedmin_day=count;
    }

    if(time>=20){
      daily_goal ++;
    }

    if(time>=45){
      fortyfive_goal ++;
    }

    count++;
    
 }

  totalhour = (float)totalmin/60;
  average = Average(totalmin,days);
  float percent_consistent = ((float)daysread/ days)*100;


printf("=====================================\n");
printf("THE FINAL RESULT OF YOUR READING WEEK\n");
printf("=====================================\n");

    //total times
  printf("--->Your total reading time in minutes was: %d minutes \n",totalmin);
  printf("--->Your total reading time in hours was: %.1f hours \n\n", totalhour);
   //average
  printf("--->The average reading time in minutes was %.1f minutes \n", average);
   //longest reading
  printf("--->Your longest reading session was %d minutes \n", max);printf("===>It was on a: ");day_read(savedmax_day);
   //shortest reading
  printf("--->Your shortest reading session was %d minutes \n", min);printf("===>It was on a: ");day_read(savedmin_day);

  printf("--->Your Daily goal for 20 minutes reading was reached %d times \n", daily_goal);
  printf("--->Your 45 minute goal was reached %d times \n", fortyfive_goal);
  printf("--->You were %.2f%% consistent \n\n", percent_consistent);

   if(percent_consistent>=70)
   {
      printf("Excellent consistency! Keep it up \n\n");
   }

   else if(percent_consistent<70)
   {
      printf("You can do better next week come on!- martin luther king \n\n");
   }
}

//Sorry for the lengthy code I did this to learn call functions properly (to some degree) 

// average function
float Average(int totalread, int count){
    float average = (float)totalread/count;
    return average;
}
// just to print out days;
void day_read(int read){
  switch (read)
  {
  case 1:
    printf("Monday! \n");
    break;
  case 2:
    printf("Tuesday! \n");
    break;
  case 3:
    printf("Wednesday! \n");
    break;
  case 4:
    printf("Thursday! \n");
    break;   
  case 5:
    printf("Friday! \n");
    break;
  case 6:
    printf("Saturday! \n");
    break;
  case 7:
    printf("Sunday! \n");
    break;
  }

}
