#include "Clock.h"
#include <iostream>
using namespace std;

void Clock::Display(){
    cout<<hour<<":"<<minute<<":"<<second<<endl;
};
Clock::Clock(int h, int m,int s){
    cout<<"构造函数"<<endl;
    hour = h;
    minute = m;
    second = s;
};
Clock::~Clock(){
    cout<<"析构函数"<<endl;
}

void Clock::Updata(){
    second ++;
    if (second>=60){
        minute ++;
        second = 0;
        if (minute >= 60){
            hour ++;
            minute = 0;
            if (hour >=24){
                hour = 0;
            }
        }
    }

};
int Clock::GetH(){
    return hour;
};
int Clock::GetM(){
    return minute;
};
int Clock::GetS(){
    return second;
};

void Clock::SetH(int value){
    hour = value;
};
void Clock::SetM(int value){
    minute = value;
};
void Clock::SetS(int value){
    second = value;
};