#include<stdio.h>

int main(void){
    int also, felso, i, szám;
    scanf("%d", &also);
    scanf("%d", &felso);
    szám = 0;
    for (i = also; i < felso+1; i+=szám)
    {
        printf("%d ", i);
        szám += 1;
    }
    return 0;
}