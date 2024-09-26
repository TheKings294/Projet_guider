// Commit Unique car developer sur Xcode


#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    char opp;
    int nb_a;
    int nb_b;
    int resultat1;
    
    printf("Choisiser un oppérateur parmit ceux disponible : + - * / %%\n");
    scanf("%c", &opp);
    
    printf("Nombre 1: ");
    scanf("%d", &nb_a);
    printf("Nombre 2 :");
    scanf("%d", &nb_b);
    
    switch (opp) {
        case '+':
            resultat1 = nb_a + nb_b;
            printf("%d %c %d = %d\n", nb_a, opp, nb_b, resultat1);
            break;
        case '-':
            resultat1 = nb_a - nb_b;
            printf("%d %c %d = %d/n", nb_a, opp, nb_b, resultat1);
            break;
        case '*':
            resultat1 = nb_a * nb_b;
            printf("%d %c %d = %d\n", nb_a, opp, nb_b, resultat1);
            break;
        case '/':
            resultat1 = nb_a / nb_b;
            printf("%d %c %d = %d\n", nb_a, opp, nb_b, resultat1);
            break;
        case '%':
            resultat1 = nb_a % nb_b;
            printf("%d %c %d = %d\n", nb_a, opp, nb_b, resultat1);
            break;
            
        default:
            printf("C'est quoi ca mon reuf");
            break;
    }
    
}
