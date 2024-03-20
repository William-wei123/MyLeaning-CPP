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
    String(const char* str = "");
    String(const String& other);

    String& operator=(const String &other);
    String& operator=(const char* other);
    bool operator!(){
        if(strlen(str_) == 0){
            return false;
        }else
            return true;
    }


    char& operator[](unsigned int index);

    const char& operator[](unsigned int index)const;

    friend String operator+(String SS1, String SS2);

    String& operator+=(const String& S1);

   

    friend ostream& operator<<(ostream& os, const String& Str);
    friend istream& operator>>(istream& in, String& Str);  


    ~String();
    void Display()const;
    char* AllocAndCpy(const char* str);
};

// String::String(/* args */)
// {
// }
String::String(const char* str)
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

char* String::AllocAndCpy(const char* str){
    int len = strlen(str)+1;
    char* str__ = new char[len];
    memset(str__,0,len);
    strcpy(str__,str);
    return str__;
}

char* str_str(const char* s1, const char* s2){
    int len = strlen(s1)+strlen(s2)+1;
    char* Str_temp = new char[len];
    memset(Str_temp,0,len);
    
    strcpy(Str_temp,s1);
    // strcat(tempS.str_,SS2.str_);
    strcpy(Str_temp+strlen(s1),s2);
    return Str_temp;

}

char& String::operator[](unsigned int index){   
    // return str_[index];
    return const_cast<char&>(static_cast<const String&>(*this)[index]);
}

const char& String::operator[](unsigned int index)const{
    return str_[index];
}

String& String::operator=(const String &other){     //使其变成深拷贝
    if (this == &other)
        return *this;
    delete[] str_;
    str_ = AllocAndCpy(other.str_);
    return *this;
}

String& String::operator=(const char* other){     //使其变成深拷贝

    cout<<"字符串赋值"<<endl;
    delete[] str_;
    str_ = AllocAndCpy(other);
    return *this;
}
String operator+(String SS1, String SS2){
    String tempS; 
    delete[] tempS.str_;  // 释放掉之前的内存，免得泄漏
    
    // char* str = new char[len]
    tempS.str_ = str_str(SS1.str_, SS2.str_);
    
    return tempS;
}



String& String::operator+=(const String& S1){
    
    char* temp_Ss = str_ ;
    str_ = str_str(temp_Ss, S1.str_);
    delete[] temp_Ss;
    return *this;
}


ostream& operator<<(ostream& os, const String& Str){
    return os<<Str.str_;
}
istream& operator>>(istream& in, String& Str){
    char temp[1024];
    cin>>temp;
    Str = temp;    //有问题
    // Str.str_ = in
    return in;
}

String::~String()
{
    delete[] str_;
}

void String::Display()const{
    cout<<str_<<endl;

}


#endif
