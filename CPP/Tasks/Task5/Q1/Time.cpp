#include <iostream>
#include "Time.h" 

Time::Time():hours(0),minutes(0),seconds(0){}
Time::Time(int H,int M,int S):hours(H),minutes(M),seconds(S){}
void Time::display() const
{
    std::cout<<(hours < 10 ? "0" : "" ); 
    std::cout<<hours<<":";
    std::cout<<(minutes < 10 ? "0" : "" );
    std::cout<<minutes<<":";
    std::cout<<(seconds < 10 ? "0" : "");
    std::cout<<seconds<<std::endl;
}
void Time::add_Time(const Time &T1,const Time &T2)
{
    hours = T1.hours + T2.hours;
    minutes= T1.minutes + T2.minutes;
    seconds = T1.seconds + T2.seconds;
    if(seconds >=60)
    {
        minutes += seconds / 60;
        seconds %= 60;
    }
    if(minutes>=60)
    {
        hours += minutes / 60;
        minutes %= 60;
    }
    if (hours >= 24) 
    {
        hours %= 24;
    }
}


