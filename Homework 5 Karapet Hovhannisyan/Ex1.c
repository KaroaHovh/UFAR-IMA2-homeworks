#include <stdio.h>

int main(){

    struct time {
        int hours;
        int minutes;
        int seconds;

    } first_time, second_time;

    printf("Please input the first time hours (values from 0 to 24):");
    scanf("%d", &first_time.hours);
    
    printf("Please input the first time minutes (values from 0 to 60):");
    scanf("%d", &first_time.minutes);

    printf("Please input the first time seconds (values from 0 to 60) :");
    scanf("%d", &first_time.seconds);

    printf("Please input the second time hours (values from 0 to 24):");
    scanf("%d", &second_time.hours);
    
    printf("Please input the second time minutes (values from 0 to 60):");
    scanf("%d", &second_time.minutes);

    printf("Please input the second time seconds (values from 0 to 60) :");
    scanf("%d", &second_time.seconds);

    if(second_time.hours>24 ||second_time.hours<0 
    || second_time.minutes>60 || second_time.minutes<0 
    || second_time.seconds>60 || second_time.seconds<0
    ||first_time.hours>24 ||first_time.hours<0 
    || first_time.minutes>60 || first_time.minutes<0 
    || first_time.seconds>60 || first_time.seconds<0)
    {
        printf("Invalid input\n");
    }
    else{
        first_time.hours = first_time.hours+second_time.hours;
        first_time.minutes = first_time.minutes+second_time.minutes;
        first_time.seconds = first_time.seconds+second_time.seconds;

        for (int i = 0; i<2; i++){
            if(first_time.seconds>=60){
                first_time.minutes++;
                first_time.seconds-=60;
            }
            if(first_time.minutes>=60){
                first_time.hours++;
                first_time.minutes-=60;
            }
            if(first_time.hours>=24){
                first_time.hours-=24;
            }
        }
        printf("The sum of the times is %d:%d:%d", first_time.hours, first_time.minutes, first_time.seconds);

    }
    


}