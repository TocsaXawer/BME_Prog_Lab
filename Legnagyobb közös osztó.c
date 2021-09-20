#include <stdio.h>

int main(){
    int a;
    int b;
    scanf("%d%d", &a, &b);
    int swit = 1;
    while (swit){
        int c = a/b;
        int d = a-(c*b);
        a = b;
        b = d;
        if (b == 0){
            printf("%d", a);
            swit = 0;
        }  
    }
    return 0;

}