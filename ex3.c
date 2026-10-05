#include <stdio.h>
#include <string.h>
int main()
{
    char motDevine[100];
    char lettre;
    int cptFaute = 0;
    char motTrouver[100] ;
    
    printf("mot a deviner\n");
    scanf("%s",motDevine);

    int size = strlen(motDevine);

    for (int i = 0; i < size; i++)
    {
        motTrouver[i]='-';
    }
    motTrouver[size] = '\0';


    while (strcmp(motDevine, motTrouver) != 0 && cptFaute < 5)
    {
    printf("choississez une lettre\n");
    scanf(" %c",&lettre);



    int trouve = 0;

    for (int i = 0; i < size; i++)
    {
        if (motDevine[i] == lettre)
        {
            motTrouver[i] = lettre;
            trouve = 1;
        }
    }

    if (trouve == 0)
    {
        cptFaute++;
    }
        


    
    switch (cptFaute)
    {
    case 0:
        printf("\n\n\n\n\n\n\n-------\n");
        break;
    
    case 1:
        printf("-------\n | |\n |\n |\n |\n |\n-------\n");
        break;

    case 2:
        printf("-------\n | |\n | O\n |\n |\n |\n-------\n");
        break;

    case 3:
        printf("-------\n | |\n | O\n | |\n |\n |\n-------\n");
        break;

    case 4:
        printf(" -------\n | |\n | O\n | /|\\\n |\n |\n-------\n");
        break;
    
    default:
        printf("-------\n | |\n | O\n | /|\\\n | / \\\n |\n-------\n");
        printf("Vous avez perdu\n");
        return 0;
    }
    printf("%s\n",motTrouver);

}   
    printf("Vous avez gagnez votre mot etait\n %s",motTrouver);
    }
    


