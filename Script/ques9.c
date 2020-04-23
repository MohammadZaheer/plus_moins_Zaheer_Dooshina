/*QUESTION 9*/
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
            else if (choix_joueur > valeur_a_trouver)
            {
                printf("moins\n");
            }
            printf("Entrez une entier svp: ");
            scanf("%d", &choix_joueur);
        } while (choix_joueur != valeur_a_trouver);
        printf("Bingo\n");
    }
    else if (rep_choix == 2)
    {
        for (int x = 1; x <= 25; x++)
        {
            if (choix_joueur < valeur_a_trouver)
            {
                printf("plus\n");
            }
            else if (choix_joueur > valeur_a_trouver)
            {
                printf("moins\n");
            }
            else
            {
                printf("Bingo\n");
                break;
            }
            if (x == 25)
            {
                break;
            }
            printf("Entrez une entier svp: ");
            scanf("%d", &choix_joueur);
        }
    }
    else if (rep_choix == 3)
    {
        for (int x = 1; x <= 10; x++)
        {
            if (choix_joueur < valeur_a_trouver)
            {
                printf("plus\n");
            }
            else if (choix_joueur > valeur_a_trouver)
            {
                    printf("moins\n");
            }
            else
            {
                printf("Bingo\n");
                break;
            }
            if (x == 10)
            {
                break;
            }
            printf("Entrez une entier svp: ");
            scanf("%d", &choix_joueur);
        }
    }
}

void deux_joueurs(int choix_joueur, int valeur_a_trouver, int quel_joueur, int nombre_de_coup, int nombre_de_essaie_1, int nombre_de_essaie_2, int points_joueur_1, int points_joueur_2)
{
    if (quel_joueur == 1)
    {
        printf("Le joueur 2 commence\n");
        printf("Joueur 1 veuillez entrez un nombre de coup svp: ");
        scanf("%d", &nombre_de_coup);
        while (nombre_de_coup <= 10)
        {
            printf("Entrez un nombre de coup qui est plus grand que 10 svp: ");
            printf("Entrez un nombre de coup svp: ");
            scanf("%d", &nombre_de_coup);
        }
        printf("Entrez une entier svp: ");
        scanf("%d", &choix_joueur);
        while (choix_joueur != valeur_a_trouver && nombre_de_essaie_2 < nombre_de_coup)
        {
            if (choix_joueur < valeur_a_trouver)
            {
                printf("plus\n");
            }
            else if(choix_joueur > valeur_a_trouver)
            {
                printf("moins\n");
            }
            else
            {
                break;
            }
            nombre_de_essaie_2 = nombre_de_essaie_2 + 1;
            if (nombre_de_essaie_2 == nombre_de_coup)
            {
                break;
            }
            printf("Entrez une entier svp: ");
            scanf("%d", &choix_joueur);
        }
        if (choix_joueur == valeur_a_trouver)
        {
            printf("Bingo\n");
        }
        points_joueur_2 = nombre_de_coup - nombre_de_essaie_2;
        printf("Le nombre de points pour joueur 2 est %d\n", points_joueur_2);
        valeur_a_trouver = rand() % 100 + 1;
        printf("Maintenant c'est le tour du joueur 1\n");
        printf("Joueur 2 veuillez entrez un nombre de coup svp: ");
        scanf("%d", &nombre_de_coup);
        while (nombre_de_coup <= 10)
        {
            printf("Entrez un nombre de coup qui est plus grand que 10 svp: ");
            printf("Entrez un nombre de coup svp: ");
            scanf("%d", &nombre_de_coup);
        }
        printf("Entrez une entier svp: ");
        scanf("%d", &choix_joueur);
        while (choix_joueur != valeur_a_trouver && nombre_de_essaie_1 < nombre_de_coup)
        {
            if (choix_joueur < valeur_a_trouver)
            {
                printf("plus\n");
            }
            else if (choix_joueur > valeur_a_trouver)
            {
                printf("moins\n");
            }
            else
            {
                break;
            }
            nombre_de_essaie_1 = nombre_de_essaie_1 + 1;
            if (nombre_de_essaie_1 == nombre_de_coup)
            {
                break;
            }
            printf("Entrez une entier svp: ");
            scanf("%d", &choix_joueur);
        }
        if (choix_joueur == valeur_a_trouver)
        {
            printf("Bingo\n");
        }
        points_joueur_1 = nombre_de_coup - nombre_de_essaie_1;
        printf("Le nombre de points pour joueur 1 est %d\n", points_joueur_1);
    }
    else if (quel_joueur == 2)
    {
        printf("Le joueur 1 commence\n");
        printf("Joueur 2 veuillez entrez un nombre de coup svp: ");
        scanf("%d", &nombre_de_coup);
        while (nombre_de_coup <= 10)
        {
            printf("Entrez un nombre de coup qui est plus grand que 10 svp: ");
            printf("Entrez un nombre de coup svp: ");
            scanf("%d", &nombre_de_coup);
        }
        printf("Entrez une entier svp: ");
        scanf("%d", &choix_joueur);
        while (choix_joueur != valeur_a_trouver && nombre_de_essaie_1 < nombre_de_coup)
        {
            if (choix_joueur < valeur_a_trouver)
            {
                printf("plus\n");
            }
            else if (choix_joueur > valeur_a_trouver)
            {
                printf("moins\n");
            }
            else
            {
                break;
            }
            nombre_de_essaie_1 = nombre_de_essaie_1 + 1;
            if (nombre_de_essaie_1 == nombre_de_coup)
            {
                break;
            }
            printf("Entrez une entier svp: ");
            scanf("%d", &choix_joueur);
        }
        if (choix_joueur == valeur_a_trouver)
        {
            printf("Bingo\n");
        }
        points_joueur_1 = nombre_de_coup - nombre_de_essaie_1;
        printf("Le nombre de points pour joueur 1 est %d\n", points_joueur_1);
        valeur_a_trouver = rand() % 100 + 1;
        printf("Maintenant c'est le tour du joueur 2\n");
        printf("Joueur 1 veuillez entrez un nombre de coup svp: ");
        scanf("%d", &nombre_de_coup);
        while (nombre_de_coup <= 10)
        {
            printf("Entrez un nombre de coup qui est plus grand que 10 svp: ");
            printf("Entrez un nombre de coup svp: ");
            scanf("%d", &nombre_de_coup);
        }
        printf("Entrez une entier svp: ");
        scanf("%d", &choix_joueur);
        while (choix_joueur != valeur_a_trouver && nombre_de_essaie_2 < nombre_de_coup)
        {
            if (choix_joueur < valeur_a_trouver)
            {
                printf("plus\n");
            }
            else if(choix_joueur > valeur_a_trouver)
            {
                printf("moins\n");
            }
            else
            {
                break;
            }
            nombre_de_essaie_2 = nombre_de_essaie_2 + 1;
            if (nombre_de_essaie_2 == nombre_de_coup)
            {
                break;
            }
            printf("Entrez une entier svp: ");
            scanf("%d", &choix_joueur);
        }
        if (choix_joueur == valeur_a_trouver)
        {
            printf("Bingo\n");
        }
        points_joueur_2 = nombre_de_coup - nombre_de_essaie_2;
        printf("Le nombre de points pour joueur 2 est %d\n", points_joueur_2);
    }
}

int main()
{
    srand (time(NULL));
    int valeur = rand() % 100 + 1;
    int choix;
    int reponse;
    int mode_de_jeu;
    printf("Choissisez votre mode de jeu. (1) un joueur? entrez le chiffre 1. (2) deux joueurs? entrez le chiffre 2. : ");
    scanf("%d", &mode_de_jeu);
    while (mode_de_jeu != 1 && mode_de_jeu != 2)
    {
        printf("Entrez uniquement le chiffre 1 ou 2\n");
        printf("Choissisez votre mode de jeu. (1) un joueur? entrez le chiffre 1. (2) deux joueurs? entrez le chiffre 2. : ");
        scanf("%d", &mode_de_jeu);
    }
    if (mode_de_jeu == 1)
    {
        printf("Choissisez votre mode de difficulté. (1) facile? entrez le chiffre 1. (2) Moyen? entrez le chiffre 2. (3) Difficle? entrez le chiffre 3. : ");
        scanf("%d", &reponse);
        printf("Entrez une entier svp: ");
        scanf("%d", &choix);
        plus_moins(choix, valeur, reponse);
    }
    else if (mode_de_jeu == 2)
    {
        int joueur;
        printf("Bienvenu sur le mode de deux joueurs. Qui choisit le nombre de coup? Si c'est joueur 1, entrez le chiffre 1. Si c'est joueur 2, entrez le chifre 2. : ");
        scanf("%d", &joueur);
        int coup;
        int essaie_1;
        int essaie_2;
        int points_1;
        int points_2;
        essaie_1 = 0;
        essaie_2 = 0;
        deux_joueurs(choix, valeur, joueur, coup, essaie_1, essaie_2, points_1, points_2); 
    }
    return 0;
}

