#include<stdio.h>
int main(){
    int a, i, b;
    scanf("%d", &a);
    for ( i = 0; i < a+1; i++)
    {
       b = i*i;
       if (b == a){
           printf("Negyzetszam");
           return 0;
       }
       if (i == a){
            printf("Nem negyzetszam");
            return 0;
        }
    }
}

