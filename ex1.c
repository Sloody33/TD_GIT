#include <stdio.h>

int main()
{   
    int total = 0;
    int s ;
    int m ;
    int h ;
    printf("donnez un nombre un nombre de secondes");
    scanf("%d",&total);
    h = total/3600 ;
    m = (total - (h*3600))/60 ;
    s = total - h*3600 - m*60 ;
    printf("%d heures, %d minutes, %d secondes",h,m,s);
}