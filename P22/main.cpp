// #include "String.h"
#include <iostream>
#include <math.h>
#include "TeleContraler.h"
#include "Television.h"
using namespace std;

class Point
{
private:
    /* data */
    int x_;
    int y_;
public:
    friend double Distance(Point& P1,Point& P2);
    Point(int x, int y);
    ~Point();
};

Point::Point(int x, int y):x_(x),y_(y)
{
}

Point::~Point()
{
}

double Distance(Point& P1,Point& P2){
    double dx = P1.x_ - P2.x_;
    double dy = P1.y_ - P2.y_;
    return sqrt(dx*dx+dy*dy);

}

int n;  //未初始化的全局变量，初始值为0，存放在.BSS段中
int n2=100;//初始化的全局变量，，存放在.data段中
void main1(){
    
    Point P1(3,4);
    Point P2(6,8);
    cout<<Distance(P1,P2)<<endl;
    
    
}
void main2(){
    Television TT(6,30);
    TeleContraler TCon;
    TCon.CDowm(TT);

    

    
}

int main(void){
    main2();


    return 0;
}