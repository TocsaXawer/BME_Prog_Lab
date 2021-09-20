#include<stdio.h>

int main(){
    int a, i, y, z, n, cher=0, q;
    char str[100];
    char h = 'x';
    char p = '.';
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {   
        if (i == 0 || (a-1) == i){
            for (y = 0; y < a; y++)
            {
                cher += sprintf(&str[cher], "%c", h);
                printf ("%s", str);
                cher = 0;
            }
        }
        else{
            if (i != 0 || (a-1) != i){
            for (q = 0; q < a; q++)
            {
                if (q == 0 || (a-1) == q){
                    cher += sprintf(&str[cher], "%c", h);
                    printf ("%s", str);
                    cher = 0;
                }
                else{
                    cher += sprintf(&str[cher], "%c", p);
                    printf ("%s", str);
                    cher = 0;
                }
            }
        }
        }
        printf("\n");
    }
    
    return 0;
}