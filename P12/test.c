#include <stdio.h>

#define MOD(x, y) x%y


int T15(){
    printf("ccccc\n");
    int a[5] ={1,3,5,7,9};

    int *ptr = (int *)(&a+1);

    printf("%d\n", *(a+1));
    printf("%d\n", *(ptr-1));
    printf("%d\n", *(&a+1));
    printf("%d\n", *(&a-1));
    return 0;
}
int main(){
    
    int X = 5;
    float Y=0;
    Y=(float)(2/X);
    Y=2/(float)X;
    return 0;
    

}
