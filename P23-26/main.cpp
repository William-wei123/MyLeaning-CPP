// #include "String.h"
#include <iostream>
#include <math.h>
#include "complex.h"
#include "Integer.h"
using namespace std;
#include "String.h"
#include "DB.h"
#include "test.h"
int n;  //未初始化的全局变量，初始值为0，存放在.BSS段中
int n2=100;//初始化的全局变量，，存放在.data段中
void main1(){

    Complex t1(3,4);
    Complex t2(6,8);
    t1.ADD(t2);
    t1.Display();

    

    
}
void main2(){

    Complex t1(3,4);
    Complex t2(6,8);
    Complex t3 = t1 + t2;
    // Complex t4 = t1.operator+(t3);  //等价t4 = t1+t3
    t3.Display();
    // t4.Display();
    
}
void main24(){

    Integer t1(99);
    Integer t2 = ++t1;
    Integer t3 = t2++;
    t2++;
    // Complex t4 = t1.operator+(t3);  //等价t4 = t1+t3
    t2.Display();
    t3.Display();
    // t4.Display();
    
}

void main24_2(){

    String s1("ABC");
    String s2 = s1;
    String s3(s1);
    String s4;
    
    // Complex t4 = t1.operator+(t3);  //等价t4 = t1+t3
    s1.Display();
    s2.Display();
    s3.Display();
    s4 = "s3";  // 如果没有重载char 类型的operator= 这一步会存在一个隐身转换的过程，先将"s3" 转为String 类
    s4.Display();
    bool noempty;
    noempty = !s4;
    cout<<noempty<<endl;
    String s5;
    noempty = !s5;
    cout<<noempty<<endl;
    // t4.Display();
    
}

void main25(){  //[]
    String s1("qazxcvbbnm");
    const String s2("CBIASCCBJS");
    char ch = s1[4];
    cout<<ch<<endl;
    s1[4] = 'F';    
    s1.Display();
    cout<<ch<<endl;
    ch = s2[0];
    cout<<ch<<endl;
    // s2[0] = 'F';  
    s2.Display();
}
void main25_2(){    //+
    String s1 = "ACV";
    String& s2 = s1;
    String s3 = s1+s2;
    s3.Display();
    
    String S4 = "AAA" + s3;
    String S5 = "AAA"+s3+"s"+"abhcbljas"+"cnaiuckj";
    S4.Display();
    S5.Display();
}
void main25_3(){    //+=
    String s1 = "ACV";
    String& s2 = s1;
    String s3 = s1+s2;
    s3.Display();
    s3+="AAA";
    s3.Display();
    

}

void main25_4(){    //<< 流运算符
    String s1 = "ACV";
    String& s2 = s1;
    String s3 = s1+s2;
    s3.Display();
    s3+="AAA";
    s3.Display();
    cout<<s3<<endl;
}

void main25_5(){    //>> 流运算符
    String s1;
    // char temp[1024];
    // cin>>temp;
    // cout<<"s1:"<<endl;
    cin>>s1;
    cout<<"s1:"<<endl;
    cout<<s1<<endl;
    system ("pause");
}

int add(int a,int b){
    return a+b;
}
void main26_1(){    //强制类型转换运算符
    Integer T(100);
    T =  200;
    
    T.Display();
    T = add(T,300); // T 强制转换int 
    T.Display();

    system ("pause");
}
void main26_2(){    //->运算符
   DB db1;
   db1->Open();
   db1->Close();
   db1->Query();
//    delete db1;

    system ("pause");
}

void main26_3(){    //new 运算符
    test* T1 = new test(100);    // new operator =operator new + 调用构造函数
    char chunk[10];
    delete T1;      //析构后再operator delete
    // test* T2 = new (chunk)test(200);    // placement new 在chunk 内存new一个对象，不开辟新的空间； 调用构造函数
    // cout<<T2->n_<<endl;

    // test* T3 = (test*)chunk;    //将chunk强制转换 发现*T3=*T2，不开辟新的空间；
    // cout<<T3->n_<<endl;




    system ("pause");
}



void* operator new(size_t size){
    cout<<"global operator new(size_t size)"<<endl;
    void* p = malloc(size);
    return p;
}
void operator delete(void *p){
    cout<<"global operator delete p"<<endl;
    free(p);
}
void operator delete(void *p, size_t size){
    cout<<"global operator delete (void *p, size_t size)"<<endl;
    free(p);
}
/*数组*/
void* operator new[](size_t size){
    cout<<"global operator new[](size_t size)"<<endl;
    void* p = malloc(size);
    return p;
}
void operator delete[](void *p){
    cout<<"global operator delete[] p"<<endl;
    free(p);
}
void operator delete[](void *p, size_t size){
    cout<<"global operator delete[] (void *p, size_t size)"<<endl;
    free(p);
}

void main26_4(){    //glob new 运算符
    test* T1 = new test;    // new operator =operator new + 调用构造函数
    char* chunk = new char[100];    // new operator =operator new + 调用构造函数
    delete T1;      //析构后再operator delete
    // // delete[] T2; 
    test* T2 = new (chunk)test(200);    // placement new 在chunk 内存new一个对象，不开辟新的空间； 调用构造函数
    cout<<T2->n_<<endl;
    T2->~test();        //显示调用析构函数释放内存，因为此内存在堆上？ placement new 都要显性调用析构？
    // test* T3 = (test*)chunk;    //将chunk强制转换 发现*T3=*T2，不开辟新的空间；
    // cout<<T3->n_<<endl;
    test* T3 = new (__FILE__, __LINE__)test(500);
    delete T3;
    delete[] chunk; // 全局delete
    


    system ("pause");
}


int main(void){
    main26_4();


    return 0;
}