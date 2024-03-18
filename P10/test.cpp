#include "test.h"
#include <iostream>
using namespace std;
//内联函数的定义一
inline int test::ADD(int a, int b){
    return a+b;
}
void test::Init(){
    a_ = 0;
    b_ = 0;
    c_ = 0;
}

void test::Init(int a){
    a_ = a;
    b_ = 0;
    c_ = 0;
}
void test::Init(int a, int b){
    a_ = a;
    b_ = b;
    c_ = 0;
}

void test::Init(int a, int b, int c){
    a_ = a;
    b_ = b;
    c_ = c;
}
void test::Display(){
    cout<<"a:"<<a_<<endl;
    cout<<"b:"<<b_<<endl;
    cout<<"c:"<<c_<<endl;

}
void test::Init1(int a/*=0*/, int b/*=0*/, int c/*=0*/){
    a_ = a;
    b_ = b;
    c_ = c;
}