#ifndef STRING_H__
#define STRING_H__

#include <string.h>
#include <cstring>
#include <iostream>
using namespace std;

class String
{
private:
    /* data */
    char * str_;
public:
    // String();
    String(char* str = "");
    String(const String& other);
    /// @brief 
    /// @param other 
    /// @return 
    String& operator=(const String &other);
    ~String();
    void Display();
    char* AllocAndCpy(char* str);
};

// String::String(/* args */)
// {
// }
String::String(char* str)
{
    str_ = AllocAndCpy(str);

}
// String::String(const String& Other):str_(Other.str_) //浅拷贝，因为两个指针指向同一块地方，会析构两次，会报错
// {


// }

String::String(const String& other) //深拷贝 避免同一块内存会析构两次，会报错
{
    str_ = AllocAndCpy(other.str_);
}

char* String::AllocAndCpy(char* str){
    int len = strlen(str)+1;
    char* str__ = new char[len];
    memset(str__,0,len);
    strcpy(str__,str);
    return str__;
}


String& String::operator=(const String &other){     //使其变成深拷贝
    if (this == &other)
        return *this;
    delete[] str_;
    str_ = AllocAndCpy(other.str_);
    return *this;
}

String::~String()
{
    delete str_;
}

void String::Display(){
    cout<<str_<<endl;

}


#endif
