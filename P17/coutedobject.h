#ifndef cout___
#define cout___
class coutedobject
{
private:
    /* data */
    static int count_2; //私有时，需要提供一个公开访问接口，便于封装
public:
    static int count_;  //属于类，类的每个实例都访问同一个内存 //静态变量引用性声明
    coutedobject(/* args */);
    ~coutedobject();
    static int Getcount2();
    static const int count_temp = 200;  ///静态变量引用性声明,尽管初始化了，（但任然需要在类外定义 是错的）
    int t;
};

int coutedobject::count_=0;   //静态变量定义性声明
int coutedobject::count_2=0;   //静态变量定义性声明
// const int coutedobject::count_temp; //静态变量定义性声明
coutedobject::coutedobject(/* args */)
{
    ++count_;
    ++count_2;
}

int coutedobject::Getcount2()
{
    // cout<<"t"<<t<<endl;  报错，无法访问非静态成员
    return count_2;
}

coutedobject::~coutedobject()
{
    --count_;
    --count_2;
}

#endif
