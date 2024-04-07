#include <stdio.h>

struct Time{
    int hour;
    int minute;
    int second;
    int milisecond;
}; // basic time struct
struct Time diff(struct Time first, struct Time second){
    struct Time difference;
    difference.hour = first.hour - second.hour;
    difference.minute = first.minute - second.minute;
    difference.second = first.second - second.second;
    difference.milisecond = first.milisecond - second.milisecond;
    if(difference.hour < 0){
        difference.hour += 24;
    }
    if(difference.minute < 0){
        difference.minute += 60;   
    }
    if(difference.second < 0){
        difference.second += 60;
    }
    if(difference.milisecond < 0){
        difference.milisecond += 1000;
    }
    return difference;
} // to calculate difference between zones, defined with struct type func, and if smaller than 0, fix it by adding.
int main(){
    struct Time current = { 9, 5, 30, 20}; 
    struct Time first = { 12, 30, 50, 5};
    struct Time second = { 13, 45, 5, 5};
    printf("the current time is : %02d:%02d:%02d.%03d\n", current.hour,current.minute,current.second,current.milisecond);
    printf("the first time is : %02d:%02d:%02d.%03d\n", first.hour,first.minute,first.second,first.milisecond);
    printf("the second time is : %02d:%02d:%02d.%03d\n", second.hour,second.minute,second.second,second.milisecond);

    struct Time result = diff(first, second);
    printf("the difference between two time zones is : %02d:%02d:%02d.%03d\n", result.hour, result.minute, result.second, result.milisecond);
    return 0;
}