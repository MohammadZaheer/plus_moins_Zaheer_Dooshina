#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void plus_moins(int choix_joueur, int valeur_a_trouver)
{
    if (choix_joueur < valeur_a_trouver)
    {
        printf("plus\n");
        printf("La valeur etait %d\n", valeur_a_trouver);
    }
    else if(choix_joueur > valeur_a_trouver)
    {
        printf("moins\n");
        printf("La valeur etait %d\n", valeur_a_trouver);
    }
    else
    {
        printf("Bingo\n");
    }
}

int main()
{
    srand (time(NULL));
    int valeur = rand() % 100 + 1;
    int choix;
    printf("Entrez une entier svp: ");
    scanf("%d", &choix);
    plus_moins(choix, valeur);
    return 0;
}
