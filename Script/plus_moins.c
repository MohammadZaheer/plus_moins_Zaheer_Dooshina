#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void plus_moins(int choix_joueur, int valeur_a_trouver, int rep_choix)
{
    if (rep_choix == 1)
    {
        do
        {
            if (choix_joueur < valeur_a_trouver)
            {
                printf("plus\n");
            }
            else if(choix_joueur > valeur_a_trouver)
            {
                printf("moins\n");
            }
            printf("Entrez une entier svp: ");
            scanf("%d", &choix_joueur);
        } while (choix_joueur != valeur_a_trouver);
        printf("Bingo\n");
    }
    else if(rep_choix == 2)
    {
        for(int x = 1; x <= 24; x++)
        {
            if(choix_joueur < valeur_a_trouver)
            {
                printf("plus\n");
                printf("Entrez une entier svp: ");
                scanf("%d", &choix_joueur);
            }
            else if(choix_joueur > valeur_a_trouver)
            {
                printf("moins\n");
                printf("Entrez une entier svp: ");
                scanf("%d", &choix_joueur);
            }
            else if(choix_joueur == valeur_a_trouver)
            {
                printf("Bingo\n");
                x = x + 25;
            }
        }
    }
    else if (rep_choix == 3)
    {
        for (int x = 1; x <= 10; x++)
        {
            if (choix_joueur < valeur_a_trouver)
            {
                printf("plus\n");
                printf("Entrez une entier svp: ");
                scanf("%d", &choix_joueur);
            }
            else if(choix_joueur > valeur_a_trouver)
            {
                    printf("moins\n");
                    printf("Entrez une entier svp: ");
                    scanf("%d", &choix_joueur);
            }
            else if(choix_joueur == valeur_a_trouver)
            {
                printf("Bingo\n");
                x = x + 10;
            }
        }
    }
    else
    {
        printf("invalide\n");
    }
}

int main()
{
    srand (time(NULL));
    int valeur = rand() % 100 + 1;
    int choix;
    int reponse;
    printf("Choissisez votre mode de difficulté. (1) facile? entrez le chiffre 1. (2) Moyen? entrez le chiffre 2. (3) Difficle? entrez le chiffre 3. : ");
    scanf("%d", &reponse);
    printf("Entrez une entier svp: ");
    scanf("%d", &choix);
    plus_moins(choix, valeur, reponse);
    return 0;
}


/*
//QUESTION 7
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void plus_moins(int choix_joueur, int valeur_a_trouver)

{
    do
    {
        if (choix_joueur < valeur_a_trouver)
        {
            printf("plus\n");
        }
        else if(choix_joueur > valeur_a_trouver)
        {
            printf("moins\n");
        }
        printf("Entrez une entier svp: ");
        scanf("%d", &choix_joueur);
    } while (choix_joueur != valeur_a_trouver);
    printf("Bingo\n");
}

int main()
{
    srand (time(NULL));
    int val = rand() % 100 + 1;
    int choix;
    printf("Entrez une entier svp: ");
    scanf("%d", &choix);
    plus_moins(choix, val);
    return 0;
}
*/


/* QUESTION 6
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void plus_moins(int choix_joueur, int valeur_a_trouver)
{
    if (choix_joueur < valeur_a_trouver)
    {
        printf("moins\n");
    }
    else if(choix_joueur > valeur_a_trouver)
    {
        printf("plus\n");
    }
    else
    {
        printf("Bingo\n");
    }
}

int main()
{
    srand (time(NULL));
    int val = rand() % 100 + 1;
    int choix;
    printf("Valeur: %d\n" , val);
    printf("Entrez une entier svp: ");
    scanf("%d", &choix);
    plus_moins(choix, val);
    return 0;
}
*/

/*
//QUESTION 4
#include <stdio.h>

void plus_moins(int choix_joueur, int valeur_a_trouver)
{
    if (choix_joueur < valeur_a_trouver)
    {
        printf("moins\n");
    }
    else if(choix_joueur > valeur_a_trouver)
    {
        printf("plus\n");
    }
    else
    {
        printf("Bingo\n");
    }
}

int main()
{
    int val = 12;
    int choix;
    printf("Entrez une entier svp: ");
    scanf("%d", &choix);
    plus_moins(choix, val);

    return 0;
}
*/
