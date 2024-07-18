#ifndef _TIME_H_
#define _TIME_H_

class Time
{
    private:
    int hours;
    int minutes;
    int seconds;
    public:
    Time();
    Time(int,int,int);
    void display() const;
    void add_Time(const Time &T1,const Time &T2);

};



#endif
