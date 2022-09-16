#include <stdio.h>
#include <stdlib.h>

struct date {
    int jour;
    int mois;
    int annee;
};

struct aprenand {
    char nom[25];
    char prenom[25];
    struct date date_naissance;
};

int main(){

    int size;
    printf("enter the number of the elements of the array : ");
    scanf("%d" , &size);

    int i , j , age[size] , somme = 0;
    struct aprenand help , aprenands[size];

    for(i = 0 ; i < 3 ; i++) {
        printf("enter le nom d'aprenand : ");
        scanf("%s" , aprenands[i].nom);
        printf("enter le prenom d'aprenand : ");
        scanf("%s" , aprenands[i].prenom);
        printf("enter la date de naissance d'aprenand : \n");
        do {
            printf("le jour : ");
            scanf("%d" , &aprenands[i].date_naissance.jour);
        }while(!(aprenands[i].date_naissance.jour >= 1 && aprenands[i].date_naissance.jour <= 31));

        do {
            printf("le mois : ");
            scanf("%d" , &aprenands[i].date_naissance.mois);
        }while(!(aprenands[i].date_naissance.mois >= 1 && aprenands[i].date_naissance.mois <= 12));
        
        do {
            printf("l'annee : ");
            scanf("%d" , &aprenands[i].date_naissance.annee);
        }while(!(aprenands[i].date_naissance.annee >= 1980 && aprenands[i].date_naissance.annee < 2022));
    }

    for(i = 0 ; i < size ; i++) {
        for(j = i + 1 ; j < size ; j++) {
            
            if((2022 - aprenands[i].date_naissance.annee) < (2022 - aprenands[j].date_naissance.annee)) {
                help = aprenands[i];
                aprenands[i] = aprenands[j];
                aprenands[j] = help;
            } else if((2022 - aprenands[i].date_naissance.annee) == (2022 - aprenands[j].date_naissance.annee)) {
                if(aprenands[i].date_naissance.mois < aprenands[j].date_naissance.mois) {
                    help = aprenands[i];
                    aprenands[i] = aprenands[j];
                    aprenands[j] = help;
                }else if(aprenands[i].date_naissance.mois == aprenands[j].date_naissance.mois) {
                    if(aprenands[i].date_naissance.jour < aprenands[j].date_naissance.jour) {
                        help = aprenands[i];
                        aprenands[i] = aprenands[j];
                        aprenands[j] = help;
                    }
                }
            }
        }
    }

    for(i = 0 ; i < size ; i++){
        age[i] = 2022 - aprenands[i].date_naissance.annee;
    }
    for(i = 0 ; i < size ; i++){
        somme += age[i];
    }
    system("clear");
    // Affichage
    for(i = 0 ; i < size ; i++) {
        printf("\nAprenant %d\n" , i+1);
        printf("Nom : %s\n" , aprenands[i].nom);
        printf("Prenom : %s\n" , aprenands[i].prenom);
        printf("Date de Naissance : %d-%d-%d\n" , aprenands[i].date_naissance.annee , aprenands[i].date_naissance.mois , aprenands[i].date_naissance.jour);
        printf("------------------------------\n");
    }

    printf("\nle max est : %d" , 2022 - aprenands[0].date_naissance.annee);
    printf("\nle min est : %d" , 2022 - aprenands[size-1].date_naissance.annee);

     printf("\nla moyenne d'age : %d\n" , somme/size);
    return 0;
}