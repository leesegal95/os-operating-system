#include <stdio.h>
#include <stdlib.h>

int leapyear(int year);

int main(int argc, char** argv) 
{
    int year_arg = atoi(argv[1]);
    if(leapyear(year_arg)) {
        printf("The %d was a leap year",year_arg);
    }
    else {
        printf("The %d was not a leap year",year_arg);
    }
    return 0;
}

int leapyear (int year)
{
    if (year % 400 == 0) {
        return 1; 
    }
    else if (year % 100 == 0) {
        return 0;
    }
    else if (year % 4 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}