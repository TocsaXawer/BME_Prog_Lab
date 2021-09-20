#include<stdio.h>

int main(void){
    char EUR[4];
    int bun, penz ;
    scanf("%d%d%s", &bun, &penz, &EUR);
    int egy_tiz = (penz/10);
    switch (bun)
    {
    case 0: printf("Bonus: %d %s",0, EUR); break;
    case 1: printf("Bonus: %d %s",(1000), EUR); break;
    case 2: printf("Bonus: %d %s",penz/10, EUR); break;
    case 3: printf("Bonus: %d %s",penz/10+1000, EUR); break;
    default: printf("INVALID\nBonus: 0 %s", EUR); break;
    }
    return 0;
}