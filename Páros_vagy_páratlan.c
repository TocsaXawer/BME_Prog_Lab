#include <stdio.h>

#include <stdlib.h>

int main() {

int a ;

printf("adj meg 1 szamot");

scanf("%d", &a);

if (a % 2 == 0)

{

printf("Az eredmeny %d \n.",a-1);

}

else

{

printf("Az eredmeny %d.",a+1);

}

system("pause");

return 0;



}