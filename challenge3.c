#include <stdio.h>

int main() {
     int a , b ;
     printf("entrer le 1er nombre :");
     scanf("%d",&a);
     printf("entrer le 2eme nombre :");
     scanf("%d",&b);
     if (a == b)
         printf("%d",(a+b)*3);
     else 
         printf("%d",a+b);
     
    return 0;
}