#include "Clock.h"

int main(void)
{
    Clock c;
    int i=60;
    c.Init(10,10,10);
    c.Display();
    for (i=60;i>=0;i--){
        c.Updata();
        c.Display();
    }

    

    return 0;
}