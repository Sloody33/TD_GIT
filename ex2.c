#include <stdio.h>
#include <math.h>
int main()
{
    int M ;
    int C ;
    int t ;
    int n ;
    printf("donne montant total du pret la\n");
    scanf("%d",&C);
    printf(" donne le taux d'interet\n");
    scanf("%d",&t);
    printf("donne le nombre d'année\n");
    scanf("%d",&n);
     M = (C * (t / 100.0 / 12.0))
     / (1 - pow(1 + (t / 100.0 / 12.0), -n * 12));
    printf("%d",M);
}
