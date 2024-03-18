#ifndef __CLOCK_H__
#define __CLOCK_H__

class Clock
{
private:    //为了封装，数据尽量定义为私有
    int hour;
    int minute;
    int second;

public:
    void Display();
    Clock(int h, int m,int s);

    ~Clock();
    //因为数据私有后，需要提供接口给外部访问
    void Updata();
    
    int GetH();
    int GetM();
    int GetS();

    void SetH(int value);
    void SetM(int value);
    void SetS(int value);

};

#endif
