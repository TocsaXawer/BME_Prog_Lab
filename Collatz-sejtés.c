#include<stdio.h>

int main(){ 
    int szamlal = 0;
    int a, koz, i; 
    scanf("%d", &a);
    
    for ( i = 0; i < 1000; i++){  
         
        if (a % 2 == 0){
            a = a/2;
           
            szamlal += 1;
        }
        else if (a == 1){
            printf("%d", szamlal);
            return 0;
        }
        else{
            a = ((a*3)+1);
            
            szamlal += 1;
        }
        
        
    }
    return 0;
}