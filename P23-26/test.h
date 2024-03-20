#ifndef ___TESASA__H
#define ___TESASA__H
#include <stdlib.h>
#include <iostream>
using namespace std;
class test
{
private:
    /* data */
    
public:
    int n_;
    test(/* args */);
    test(int n);
    void* operator new(size_t size);
    void operator delete(void *p);
    void operator delete(void *p, size_t size);
    void* operator new(size_t size, void *p){//placement new 重载
        cout<<"placement new 重载"<<endl;
        return p;
    } 

    void operator delete(void *, void *){//placement new 重载
        // return p;
    } 


    void* operator new(size_t size, const char* file , long line){//placement new 重载
        cout<<"new"<<file<<":"<<line<<endl;
        void* p = malloc(size);
        return p;
    } 

    void operator delete(void *p, const char* file , long line){//placement new 重载
        cout<<"delete"<<file<<":"<<line<<endl;
        free(p);
    } 
    ~test();
};

test::test(/* args */)
{
}
test::test(int n):n_(n)
{
    cout<<"构造 test(int n):n_(n)"<<endl;
}

void* test::operator new(size_t size){
    cout<<"operator new(size_t size)"<<endl;
    void* p = malloc(size);
    return p;
}
void test::operator delete(void *p){
    cout<<"operator delete p"<<endl;
    free(p);
}
void test::operator delete(void *p, size_t size){
    cout<<"operator delete (void *p, size_t size)"<<endl;
    free(p);
}


test::~test()
{
     cout<<"xigou "<<endl;
}




#endif