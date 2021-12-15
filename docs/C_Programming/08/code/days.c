#include <stdio.h>

// Julian canlender vs Gregorian canlender
int isLeapYear(int year)
{
    if((year%4==0)&&(year%100!=0))
    {
        return 1;
    }
    if(year%400==0)
    {
        return 1;
    }
    return 0;
}

int days(int year, int month, int day)
{
    int res=day;
    month--;
    switch(month)
    {
        case 11: res+=30;
        case 10: res+=31;
        case  9: res+=30;
        case  8: res+=31;
        case  7: res+=31;
        case  6: res+=30;
        case  5: res+=31;
        case  4: res+=30;
        case  3: res+=31;
        case  2: res+=28;
        case  1: res+=31;
    }
    if(isLeapYear(year)&&month>=2)
    {
        res++;
    }
    return res;
}

int valid(int year, int month, int day)
{
    // test year
    if(year<=0) return 0;
    // test month
    if(month<=0||month>=13) return 0;
    // test day
    if(day<=0) return 0;
    if(month== 1&&day>31) return 0;
    if(isLeapYear(year)==0&&month== 2&&day>28) return 0;
    if(isLeapYear(year)==1&&month== 2&&day>29) return 0;
    if(month== 3&&day>31) return 0;
    if(month== 4&&day>30) return 0;
    if(month== 5&&day>31) return 0;
    if(month== 6&&day>30) return 0;
    if(month== 7&&day>31) return 0;
    if(month== 8&&day>31) return 0;
    if(month== 9&&day>30) return 0;
    if(month==10&&day>31) return 0;
    if(month==11&&day>30) return 0;
    if(month==12&&day>31) return 0;
    return 1;
}

int main()
{
    int day=23;
    int month=4;
    int year=2019;
    printf("Input: year month day(Three Integers):\n");
    while(1)
    {
        if(scanf("%d %d %d",&year,&month,&day)==3)
        {
            if(valid(year,month,day)==1)
            {
                break;
            }
            else
            {
                printf("%d.%d.%d is invalid!\n",year,month,day);
            }
        }
        // else
        // {
        //     while(getchar()!='\n') //Eat invalid input
        //     {
        //     }
        //     printf("Please Input Three Integers!!!\n");
        // }
    }
    printf("%d.%d.%d is No.%d days of the year!\n",year,month,day,days(year,month,day));
    return 0;
}