#ifndef INTEGER__HH_
#define INTEGER__HH_
#include <iostream>
using namespace std;
class Integer
{
private:
    /* data */
    int n_;
public:
    Integer(int n);
    void Display(){
        cout<<n_<<endl;
    }
    // Integer& operator++(){  //前置++ 
    // cout<<"Complex operator"<<endl;
    //     ++n_;
    //     return *this;
    // }
    friend Integer& operator++(Integer& t1){    ////前置++ 
        cout<<"friend operator"<<endl;
        ++t1.n_;
        return t1;

    }
    Integer operator++(int i){  //后置++ 
        cout<<"Complex operator"<<endl;
        Integer temp(n_);
        ++n_;
        return temp;
    }
    operator int(){
        cout<<"强制转换int"<<endl;
        return n_;
    }
    ~Integer();
};

Integer::Integer(int n):n_(n)
{
    cout<<"构造"<<n<<endl;

}

Integer::~Integer()
{
    cout<<"析构"<<n_<<endl;
}



#endif