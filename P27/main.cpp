#include <string>
#include <iostream>
using namespace std;

int main_1(){
    string s1;
    string s2("s2");
    cout<<s2<<endl;

    basic_string<char> s3("s3");    //等价于 string s3("s3")
    cout<<s3<<endl;
    
    string s4("aasdsad",4); //取前四个
    cout<<s4<<endl;


    string s5("12345678",4,3); //从四开始，取3个
    cout<<s5<<endl;

    string s6(4,'c'); //从4个c
    cout<<s6<<endl;

    string::iterator first = s5.begin()+1;
    string::iterator end = s5.end();    //
    string s7(first,end);
    cout<<s7<<endl;
    return 0;
}
void main_2(){  //find
    string s1("a1234");
    cout<<s1.size()<<endl;
    cout<<s1.length()<<endl;
    cout<<s1.empty()<<endl;
    s1.substr(1,2);//从1开始取，取两个
    cout<<s1.substr(1,2)<<endl;
    s1.substr(1);//从1开始取，取到结尾，默认第二个参数为-1
    cout<<s1.substr(1)<<endl;
    string::size_type pos = s1.find('3',1); // 找‘3’， 从1开始找
    if (pos == string::npos){       //npos = -1
        cout<<"meiyou"<<endl;

    }else{
        cout<<"位置："<<pos<<endl;
    }

}
void main_3(){  //replace
    string s1("a1234");
    s1.replace(2,2,"afadfad");// 从2开始后的两个字节，替换为字符串“”
    cout<<s1<<endl;
    string s2 = "123456789";
    s2.insert(2,"dssds");// 在下标2前插入字符串
    cout<<s2<<endl;

    s2.append("dssds");//追加到末尾
    cout<<s2<<endl;

    string s3("cas");
    s2.swap(s3);

    s3.c_str(); //强制转换为char*
    string::size_type first = s1.find_first_of(s2);// 第一个在s2字符串里面的字符的位置
    if (first == string::npos){       //npos = -1
        cout<<"meiyou"<<endl;
    }
    string::size_type last = s1.find_last_of(s2);   // 最后一个在s2字符串里面的字符的位置
    if (last == string::npos){       //npos = -1
        cout<<"meiyou"<<endl;
    }
    cout<<s1.substr(first, last-first+1)<<endl;
    
}

void main_4(){
    string s1("a1 2 3 4");
    string s2(" ");
    cout<<s1<<endl;
    while (s1.find_first_of(s2) != -1)
    {
       string::size_type first = s1.find_first_of(s2);
    //    s1.replace(first,1,"");
       s1.erase(first,1);
    }
    cout<<s1<<endl;
    
}


int main(){
    main_4();
    return 0;
    
}