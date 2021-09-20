#include<stdio.h>

int main(){
    int a, b, c, x, y;
    scanf("%d %d %d", &a, &b, &c);
    for(x = 1; x < c; x++){
        for(y = 1; y < c; y++){
            int calc = a*x+b*y;
            if ( calc == c){
                printf("%d %d\n", x, y);
            }
        }
    }
    return 0;
}