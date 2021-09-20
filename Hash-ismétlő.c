#include<stdio.h>
#include<string.h>

int main(void){
    char str[100];
    char a = '#';
    int cher = 0, k, n;
    scanf("%d", &n);
    if (n > 100){
        for (k=0; k<100; k++){
            cher += sprintf(&str[cher], "%c", a);
        }
    }
    else{
        for (k=0; k < n; k++) {
            cher += sprintf(&str[cher], "%c", a);
        }
    }
    printf ("%s", str);
}