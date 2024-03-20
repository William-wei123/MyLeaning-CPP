#ifndef TELEVISION_H
#define TELEVISION_H
#include <iostream>
using namespace std;
class Television
{
private:
    /* data */
    int Volume_;
    int chennel_;
public:
    friend class TeleContraler;
    Television(const int Volume, const int chennel );
    ~Television();
};

Television::Television(const int Volume, const int chennel):Volume_(Volume),chennel_(chennel)
{
}

Television::~Television()
{
    cout<<Volume_<<"\n"<<chennel_<<endl;
}



#endif